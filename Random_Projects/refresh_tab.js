const { Builder, By, Key, until } = require('selenium-webdriver');
const chrome = require('selenium-webdriver/chrome');
const options = new chrome.Options();

// Set options to start Chrome with an existing user profile
options.addArguments('user-data-dir=/path/to/your/chrome/profile');
options.addArguments('--no-sandbox');
options.addArguments('--disable-dev-shm-usage');
options.addArguments('--remote-debugging-port=9222');
// options.addArguments('--headless'); // Optional: Run Chrome in headless mode

(async function refreshTab() {
  let driver;
  try {
    console.log('Starting Chrome driver...');
    driver = await new Builder().forBrowser('chrome').setChromeOptions(options).build();
    console.log('Chrome driver started.');

    // Open a new tab and switch to it
    console.log('Opening a new tab...');
    await driver.executeScript('window.open("about:blank", "_blank");');
    let tabs = await driver.getAllWindowHandles();
    await driver.switchTo().window(tabs[1]);
    console.log('New tab opened.');

    // Navigate to the desired URL (replace with the URL of the already open tab)
    console.log('Navigating to the URL...');
    await driver.get('https://rewards.bing.com/?ref=rewardspanel');
    console.log('Navigation complete.');

    // Refresh the tab every 8 seconds
    const refreshInterval = setInterval(async () => {
      try {
        console.log('Refreshing the page...');
        await driver.navigate().refresh();
        console.log('Page refreshed.');
      } catch (err) {
        console.error('Error refreshing the page:', err);
        clearInterval(refreshInterval);
      }
    }, 10000);

    // Optionally, close the driver after some time
    // setTimeout(async () => {
    //   clearInterval(refreshInterval);
    //   await driver.quit();
    //   console.log('Driver quit.');
    // }, 60000); // Close after 1 minute

  } catch (err) {
    console.error('Error during setup or execution:', err);
    if (driver) {
      await driver.quit();
    }
  }
})();