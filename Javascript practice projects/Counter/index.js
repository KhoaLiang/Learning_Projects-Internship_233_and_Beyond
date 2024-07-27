
let counter = JSON.parse(localStorage.getItem('counter'));

if(!counter){
    counter = {
        value: 0
    };
}
function saveToStorage(){
    localStorage.setItem('counter', JSON.stringify(counter));
}
function increaseCounter(){
    counter.value++;
    saveToStorage();
    console.log(counter.value);
}
function decreaseCounter(){
    counter.value--;
    saveToStorage();
    console.log(counter.value);
}
function displayCounter(){
    document.querySelector('.js-counter-display').innerHTML = counter.value;
    console.log('Counter value: ', counter.value);
}
displayCounter();

//increase button
const increaseButton = document.querySelector('.js-increase-button');
increaseButton.addEventListener('click', () =>{
    increaseCounter();
    displayCounter();
});
//decrease button
const decreaseButton = document.querySelector('.js-decrease-button');
decreaseButton.addEventListener('click', () =>{
    decreaseCounter();
    displayCounter();
});

//reset button
const resetButton = document.querySelector('.js-reset-button');
resetButton.addEventListener('click', () =>{
    counter.value = 0;
    saveToStorage();
    displayCounter();
});