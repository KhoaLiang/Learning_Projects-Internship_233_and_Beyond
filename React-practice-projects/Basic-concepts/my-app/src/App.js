/* global $ */
import logo from './logo.svg';
import './App.css';
import { useEffect } from 'react';

function App() {
  useEffect(() => {
    // jQuery code to handle button click
    $('#change-text-button').click(function() {
      $('#text-to-change').text('jQuery is working!');
    });
  }, []);
  return (
    <div className="App">
      <header className="App-header">
        <img src={logo} className="App-logo" alt="logo" />
        <p>
          Edit <code>src/App.js</code> and save to reload.
        </p>
        <a
          className="App-link"
          href="https://reactjs.org"
          target="_blank"
          rel="noopener noreferrer"
        >
          Learn React
        </a>
      </header>
      <body>
        {/* bootstrap 5 test */}
        <h1 className='display-6'>Hello, world!</h1>
        <div className="card border border-dark">
          <div className="card-body">
            <h5 className="card-title">Special title treatment</h5>
            <p className="card-text">With supporting text below as a natural lead-in to additional content.</p>
            <a href="#" className="btn btn-primary">Go somewhere</a>
          </div>
        </div>
        {/* jQuery test */}
        <button id="change-text-button" className="btn btn-secondary mt-3">Click me to change text</button>
        <p id="text-to-change" className="mt-3">This text will change when the button is clicked.</p>
      </body>
    </div>
  );
}

export default App;
