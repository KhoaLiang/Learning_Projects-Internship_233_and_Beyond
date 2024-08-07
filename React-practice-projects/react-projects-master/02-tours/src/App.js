import React, { useState, useEffect, createContext } from 'react';
import Loading from './Loading';
import Tours from './Tours';

const url = 'http://localhost:3000/tours.json';

// Create a context
export const ToursContext = createContext();

function App() {
  const [loading, setLoading] = useState(true);
  const [tours, setTours] = useState([]);
  const [error, setError] = useState(null);

  const fetchTours = async () => {
    setLoading(true);
    try {
      const response = await fetch(url);
      const tours = await response.json();
      setTours(tours);
      setLoading(false);
      console.log("tour:", tours);
    } catch (error) {
      setLoading(false);
      setError(error.message);
    }
  };

  useEffect(() => {
    fetchTours();
  }, []);

  if (loading) {
    return (
      <main>
        <Loading />
      </main>
    );
  }

  if (error) {
    return (
      <main>
        <h2>Error: {error}</h2>
      </main>
    );
  }

  return (
    <main>
      <ToursContext.Provider value={{ setTours, tours }}>
        <Tours tours={tours} />
        <button className='btn' onClick={() => fetchTours()}>Reset</button>
      </ToursContext.Provider>
    </main>
  );
}

export default App;