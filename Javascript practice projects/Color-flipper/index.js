document.addEventListener("DOMContentLoaded", function() {
    // Get the value of the CSS variable
    const rootStyles = getComputedStyle(document.documentElement);
    const bgColor = rootStyles.getPropertyValue('--BGCOLOR').trim();

    // Insert the value into the HTML
    const colorValueElement = document.getElementById('color-value');
    colorValueElement.textContent = bgColor;
    const mainContainer = document.querySelector('.main-container');
    // mainContainer.style.backgroundColor = '#000';
    function flipColor(){
        const randomColor = Math.floor(Math.random()*16777215).toString(16);
        mainContainer.style.backgroundColor = `#${randomColor}`;
        colorValueElement.textContent = `#${randomColor}`;
        console.log('I flipped')
    }
    const flipButton = document.querySelector('.js-flip-button');
    flipButton.addEventListener('click', () =>{
        flipColor();
    });
});