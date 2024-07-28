export let cart = JSON.parse(localStorage.getItem('cart'));

if(!cart){
    cart =[{
        productId: 'e43638ce-6aa0-4b85-b27f-e1d07eb678c6',
        quantity: 2,
        deliveryOptionsId: '1'
    }, {
        productId: '15b6fc6f-327a-4ec4-896f-486349e85a3d',
        quantity: 1,
        deliveryOptionsId: '2'
    }];
}

function saveToStorage(){
    localStorage.setItem('cart', JSON.stringify(cart));
}

//add too cart function
export function AddToCart(productId){
    const quantitySelector = document.querySelector(`.js-quantity-selector-${productId}`);
    const addedToCart = document.querySelector(`.js-added-to-cart-${productId}`);
    function showAddedToCart(){
        addedToCart.style.opacity = "1";
        setTimeout(() => {
            addedToCart.style.opacity = "0";
        }, 2000); // 2000 milliseconds = 2 seconds
    }
    //Check matching item
    let matchingItem;

    cart.forEach((item) => {
        if(item.productId === productId){
            matchingItem = item;
        }
    });

    if(matchingItem){
        matchingItem.quantity += Number(quantitySelector.value);
        showAddedToCart();
    }
    else{
        cart.push({
        productId: productId,
        quantity: Number(quantitySelector.value),
        deliveryOptionsId: '1'
        });
        showAddedToCart();
    }
    saveToStorage();
}
// Update cart quantity in homepage
export function UpdateCartQuantity(){
    let cartQuantity = 0;
    cart.forEach((item) => {
        cartQuantity += item.quantity;
    });

    document.querySelector('.js-cart-quantity').innerHTML = cartQuantity;
    saveToStorage();
}
// Update cart quantity in checkoutpage
export function UpdateCartQuantityCheckout(){
    let cartQuantity = 0;
    cart.forEach((item) => {
        cartQuantity += item.quantity;
    });

    document.querySelector('.js-checkout-quantity').innerHTML = cartQuantity + ' items';
    saveToStorage();
}
//Update cart quantity in checkout page
export function UpdateCart(productId){
    const quantityInput = document.querySelector(`.js-quantity-input-${productId}`);
    const quantityLabel = document.querySelector(`.js-quantity-label-${productId}`);
    //Check matching item
    let matchingItem;
    function UpdateQuantityLabel(){
        quantityLabel.innerHTML = `${quantityInput.value}`;
    };
    cart.forEach((item) => {
        if(item.productId === productId){
            matchingItem = item;
        }
    });

    if(matchingItem){
        matchingItem.quantity = Number(quantityInput.value);
    }
    else{
        cart.push({
        productId: productId,
        quantity: Number(quantityInput.value)
        });
    }
    UpdateQuantityLabel();
    UpdateCartQuantityCheckout();
    saveToStorage();
}
// Delete item from cart
export function DeleteItemFromCart(productId){
    const newCart = []; 
    cart.forEach((item) => {
        if(item.productId !== productId){
            newCart.push(item);
        }
    });
    cart = newCart;
    UpdateCartQuantityCheckout();
    saveToStorage();
}
//Update delivery option
export function updateDeliveryOption(productId, deliveryOptionsId){
    let matchingItem;
    cart.forEach((item) => {
        if(item.productId === productId){
            matchingItem = item;
        }
    });
    matchingItem.deliveryOptionsId = deliveryOptionsId;

    saveToStorage();
}