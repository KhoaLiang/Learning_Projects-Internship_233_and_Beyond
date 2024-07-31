import { useState } from 'react';
import { sculptureList } from '../data/data_useState';

export default function UseState_Example_Gallery() {
  const [index, setIndex] = useState(0);

  function handleClick() {
    setIndex(index + 1);
    if (index === sculptureList.length - 1) {
      setIndex(0);
    }
  }
  function handleClickBack() {
    setIndex(index - 1);
    if (index === 0) {
      setIndex(sculptureList.length - 1);
    }
  }

  let sculpture = sculptureList[index];
  return (
    <>
      <button onClick={handleClickBack}>
        Back
      </button>
      <button onClick={handleClick}>
        Next
      </button>
      <h2>
        <i>{sculpture.name} </i> 
        by {sculpture.artist}
      </h2>
      <h3>  
        ({index + 1} of {sculptureList.length})
      </h3>
      <img 
        src={sculpture.url} 
        alt={sculpture.alt}
      />
      <p>
        {sculpture.description}
      </p>
    </>
  );
}
