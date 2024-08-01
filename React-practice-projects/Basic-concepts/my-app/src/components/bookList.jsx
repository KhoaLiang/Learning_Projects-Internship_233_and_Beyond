import React from 'react';

//CSS
import '../CSS/bookList.css';

function BookList() {
  return (
    <section className='bookList'>
        <Book />
        
    </section>
  )
};
const Book = () =>{
    return <article className='book'>
        <img src='https://m.media-amazon.com/images/I/819dTM9Lz5L._AC_UL480_FMwebp_QL65_.jpg' alt=''></img>
        <h1>Flowers for Algernon</h1>
        <h4>by Daniel Keyes</h4>
    </article>;
}

export default BookList;
