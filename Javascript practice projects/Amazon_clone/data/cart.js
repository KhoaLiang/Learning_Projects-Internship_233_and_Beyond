export const cart =[];

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
        quantity: Number(quantitySelector.value)
        });
        showAddedToCart();
    }
}
// Update cart quantity
export function UpdateCartQuantity(){
    let cartQuantity = 0;
    cart.forEach((item) => {
        cartQuantity += item.quantity;
    });

    document.querySelector('.js-cart-quantity').innerHTML = cartQuantity;
}