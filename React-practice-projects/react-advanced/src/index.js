import React from 'react';
import ReactDOM from 'react-dom';
import './index.css';
import App from './App';
import { BrowserRouter as Router, Route, Routes } from 'react-router-dom';
import UseState1 from './tutorial/1-useState/final/1-error-example';
import UseState2 from './tutorial/1-useState/final/2-useState-basics';
import UseState3 from './tutorial/1-useState/final/3-useState-array';
import UseState4 from './tutorial/1-useState/final/4-useState-object';
import UseState5 from './tutorial/1-useState/final/5-useState-counter';
import UseEffect1 from './tutorial/2-useEffect/setup/1-useEffect-basics';

const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(
  <div className="container">
    <React.StrictMode>
      <Router>
        <Routes>
          <Route path="/" element={<App />} />
          <Route path="/useState1" element={<UseState1 />} />
          <Route path="/useState2" element={<UseState2 />} />
          <Route path="/useState3" element={<UseState3 />} />
          <Route path="/useState4" element={<UseState4 />} />
          <Route path="/useState5" element={<UseState5 />} />
          <Route path="/useEffect1" element={<UseEffect1 />} />
        </Routes>
      </Router>
    </React.StrictMode>
  </div>
);

// If you want to start measuring performance in your app, pass a function
// to log results (for example: reportWebVitals(console.log))
// or send to an analytics endpoint. Learn more: https://bit.ly/CRA-vitals