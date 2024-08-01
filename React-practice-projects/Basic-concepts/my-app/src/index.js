/* global $ */
import React from 'react';
import ReactDOM from 'react-dom/client';
import './index.css';
import App from './App';
import reportWebVitals from './reportWebVitals';
import UseState_Example_Gallery from './components/useState_example.jsx';
import UseState_Example2_Form from './components/useState_example2.jsx';
import UseReducer_Example_Counter from './components/useReducer_example.jsx';
import BookList from './components/bookList.jsx';
import Props_Example from './components/props_example.jsx';
import { BrowserRouter as Router, Route, Routes } from 'react-router-dom';
import '../node_modules/bootstrap/dist/css/bootstrap.min.css';
import '../node_modules/bootstrap/dist/js/bootstrap.bundle.min.js';

const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(
  <React.StrictMode>
    <Router>
      <Routes>
        <Route path="/" element={<App />} />
        <Route path="/UseState_Example_Gallery" element={<UseState_Example_Gallery />} />
        <Route path="/UseState_Example2_Form" element={<UseState_Example2_Form />} />
        <Route path="/UseReducer_Example_Counter" element={<UseReducer_Example_Counter />} />
        <Route path="/BookList" element={<BookList />} />
        <Route path="/Props_Example" element={<Props_Example />} />
      </Routes>
    </Router>
  </React.StrictMode>
);

// If you want to start measuring performance in your app, pass a function
// to log results (for example: reportWebVitals(console.log))
// or send to an analytics endpoint. Learn more: https://bit.ly/CRA-vitals
reportWebVitals();