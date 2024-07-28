const toggleButton = document.querySelector('.js-nav-toggle');
const ulLinks = document.querySelector('.js-links')
function showNav() {
  ulLinks.classList.add('show-links');
}
function hideNav() {
  ulLinks.classList.remove('show-links');
}
toggleButton.addEventListener('click', () => {
    if (ulLinks.classList.contains('show-links')) {
        hideNav();
    } else {
        showNav();
    }
});