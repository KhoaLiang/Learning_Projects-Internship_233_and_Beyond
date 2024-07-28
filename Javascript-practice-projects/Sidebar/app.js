const sidebarToggle = document.querySelector('.js-sidebar-toggle');
const sidebar = document.querySelector('.js-sidebar');
const closeBtn = document.querySelector('.js-close-btn');
function showSidebar() {
  sidebar.classList.add('show-sidebar');
}
function hideSidebar() {
  sidebar.classList.remove('show-sidebar');
}
sidebarToggle.addEventListener('click', () => {
    sidebar.classList.contains('show-sidebar') ? hideSidebar() : showSidebar();
});
closeBtn.addEventListener('click', () => {
    hideSidebar();
})   