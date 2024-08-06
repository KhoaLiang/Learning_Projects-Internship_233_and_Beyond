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
import UseEffect1 from './tutorial/2-useEffect/final/1-useEffect-basics';
import UseEffect2 from './tutorial/2-useEffect/final/2-useEffect-cleanup';
import UseEffect3 from './tutorial/2-useEffect/final/3-useEffect-fetch-data';
import Return1 from './tutorial/3-conditional-rendering/final/1-multiple-returns';
import Return2 from './tutorial/3-conditional-rendering/final/2-short-circuit';
import Return3 from './tutorial/3-conditional-rendering/final/3-show-hide';
import Input1 from './tutorial/4-forms/final/1-controlled-inputs';
import Input2 from './tutorial/4-forms/final/2-multiple-inputs';
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
          <Route path="/useEffect2" element={<UseEffect2 />} />
          <Route path="/useEffect3" element={<UseEffect3 />} />
          <Route path="/return1" element={<Return1 />} />
          <Route path="/return2" element={<Return2 />} />
          <Route path="/return3" element={<Return3 />} />
          <Route path="/input1" element={<Input1 />} />
          <Route path="/input2" element={<Input2 />} />
        </Routes>
      </Router>
    </React.StrictMode>
  </div>
);

// If you want to start measuring performance in your app, pass a function
// to log results (for example: reportWebVitals(console.log))
// or send to an analytics endpoint. Learn more: https://bit.ly/CRA-vitals