import {cart, DeleteItemFromCart, UpdateCartQuantityCheckout, UpdateCart} from '../data/cart.js';
import { products } from '../data/products.js';
import { deliveryOptions } from '../data/deliveryOptions.js';

//external code from the internet
hello();
//day js 
const today = dayjs();
const deliveryDate = today.add(7, 'days');
deliveryDate.format('dddd, MMMM D');

UpdateCartQuantityCheckout();

let cartSummaryHTML = '';

cart.forEach((item) => {
    const productId = item.productId;

    let matchingProduct;

    products.forEach((product) => {
        if(product.id === productId){
            matchingProduct = product;
        }
    });
    const deliveryOptionID = item.deliveryOptionsId;

    let deliveryOption;

    deliveryOptions.forEach((option) => {
        if(option.id === deliveryOptionID){
            deliveryOption = option;
        }
    });
    const today = dayjs();
    const deliveryDate = today.add(deliveryOption.deliveryDate, 'days');
    const dateString = deliveryDate.format('dddd, MMMM D');

    //console.log(matchingProduct);
    cartSummaryHTML +=
    `<div class="cart-item-container js-cart-item-container-${matchingProduct.id}">
        <div class="delivery-date">
            Delivery date: ${dateString}
        </div>

        <div class="cart-item-details-grid">
            <img class="product-image"
            src="${matchingProduct.image}">

            <div class="cart-item-details">
            <div class="product-name">
                ${matchingProduct.name}
            </div>
            <div class="product-price">
                $${(matchingProduct.priceCents / 100).toFixed(2)}
            </div>
            <div class="product-quantity">
                <span>
                Quantity: <span class="quantity-label js-quantity-label-${matchingProduct.id}">${item.quantity}</span>
                </span>
                <span class="update-quantity-link link-primary js-update-link" data-product-id="${matchingProduct.id}">
                Update
                </span>

                <input class="quantity-input js-quantity-input-${matchingProduct.id}" ></input>
                <span class="save-quantity-link link-primary js-save-link js-save-quantity-link-${matchingProduct.id}" data-product-id="${matchingProduct.id}">Save</span>

                <span class="delete-quantity-link link-primary js-delete-link" data-product-id="${matchingProduct.id}">
                Delete
                </span>
            </div>
            </div>

            <div class="delivery-options">
            <div class="delivery-options-title">
                Choose a delivery option:
            </div>
            ${deliveryOptionsHTML(matchingProduct, item)}
            </div>
        </div>
    </div>`;
    
});
function deliveryOptionsHTML(matchingProduct, cartItem){
    let html ='';
    deliveryOptions.forEach((deliveryOptions) => {
        const today = dayjs();
        const deliveryDate = today.add(deliveryOptions.deliveryDate, 'days');
        const dateString = deliveryDate.format('dddd, MMMM D');
        const priceString = deliveryOptions.priceCents === 0 ? 'FREE' : `$${(deliveryOptions.priceCents / 100).toFixed(2)} - `;
        const isChecked = deliveryOptions.id === cartItem.deliveryOptionsId;
        html +=
        `   <div class="delivery-option">
                <input type="radio" 
                ${isChecked ? 'checked' : ''}
                class="delivery-option-input"
                name="delivery-option-${matchingProduct.id}">
                <div>
                <div class="delivery-option-date">
                    ${dateString}
                </div>
                <div class="delivery-option-price">
                    ${priceString} Shipping
                </div>
                </div>
            </div>
        `;
    });
    return html;
}
document.querySelector('.js-order-summary').innerHTML = cartSummaryHTML;
document.querySelectorAll('.js-delete-link').forEach((link) =>{
    link.addEventListener('click', () =>{
        const productId = link.dataset.productId;
        DeleteItemFromCart(productId);

        const container =  document.querySelector(`.js-cart-item-container-${productId}`);
        container.remove();
    });
});
document.querySelectorAll('.js-update-link').forEach((link) =>{
    link.addEventListener('click', () =>{
        const productId = link.dataset.productId;
        const quantityInput = document.querySelector(`.js-quantity-input-${productId}`);
        const quantitySaveLink = document.querySelector(`.js-save-quantity-link-${productId}`);
        console.log("Update link click for: ", productId);
        link.classList.add('is-editing-quantity');
        quantityInput.style.display = 'initial';
        quantitySaveLink.style.display = 'initial';
        link.style.display = 'none';
    }); 
});
document.querySelectorAll('.js-save-link').forEach((link) =>{
    link.addEventListener('click', () =>{
        const productId = link.dataset.productId;
        const quantityInput = document.querySelector(`.js-quantity-input-${productId}`);
        const quantityUpdateLink = document.querySelector(`.is-editing-quantity`);
        console.log("Save link click for: ", productId);
        UpdateCart(productId);

        quantityUpdateLink.style.display = 'initial';
        quantityUpdateLink.classList.remove('is-editing-quantity');
        quantityInput.style.display = 'none';
        link.style.display = 'none';
    }); 
});