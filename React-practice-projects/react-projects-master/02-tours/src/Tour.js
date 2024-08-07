import React, {useContext} from 'react';
import { ToursContext } from './App';

const Tour = ({id, image, info, price, name}) => {
  const { setTours, tours } = useContext(ToursContext);
  const removeItem = (id) => {
    let newTours = tours.filter((tour) => tour.id !== id);
    setTours(newTours);
  };
  return (<article className='single-tour'>
    <img src={image} alt={name} />
    <footer>
      <div className='tour-info'>
        <h4>{name}</h4>
        <h4 className='tour-price'>${price}</h4>
      </div>
      <p>{info}</p>
      <button className='delete-btn' onClick={() => removeItem(id)}>not interested</button>
    </footer>
  </article>);
};

export default Tour;
