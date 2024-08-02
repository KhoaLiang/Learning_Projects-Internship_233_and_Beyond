import React, { useState, useEffect } from 'react';
// by default runs after every re-render
//BUTTTTTTTTTTTTTT if you want to run useEffect only once, you can pass an empty array as the second parameter for example:
// useEffect(() => {
//   console.log('call useEffect');
// }, []);
// second parameter is an array of dependencies
// cleanup function
// second parameter
const UseEffectBasics = () => {
  const [value, setValue] = useState(0);
  //even though you can't put useEffect inside a condition, you can put a condition inside useEffect!
  //this useEffect will run every time the value changes because we have [value] as the second parameter
  useEffect(() => {
    console.log('useEffect has ran: ' , value + 1, 'times');
    if(value >= 1) {
      document.title = `New Messages(${value})`;
    }
  }, [value]);
  const inCreaseValue = () => {
    setValue((prevState) => {
      return prevState + 1
    });
  }
  return (
    <React.Fragment>
      <h2>{value}</h2>
      <button className='btn' onClick={() =>  inCreaseValue()}>Click now</button>
    </React.Fragment>
  );
};

export default UseEffectBasics;
