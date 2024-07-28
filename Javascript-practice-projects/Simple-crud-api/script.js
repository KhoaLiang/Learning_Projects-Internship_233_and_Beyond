const express = require('express');
const Joi = require('joi');
const app = express(); // create express app
app.use(express.json()); // make sure express can parse json

//Give data to the server
const customers = [
    {title: 'John Doe', id: 1},
    {title: 'Jane Doe', id: 2},
    {title: 'Jim Doe', id: 3},
    {title: 'Jill Doe', id: 4},
    {title: 'Jack Doe', id: 5}
];
//Read request Handlers
//Display message for the root URL
app.get('/', (req, res) => {
    res.send('Welcome to the Simple CRUD API');
});
//Display all customers
app.get('/api/customers', (req, res) => {
    res.send(customers);
});

//Display a single customer
app.get('/api/customers/:id', (req, res) => {
    const customer = customers.find(c => c.id === parseInt(req.params.id));
    if(!customer) return res.status(404).send('The customer with the given ID was not found');
    res.send(customer);
});
//add a customer
app.post('/api/customers', (req, res) => {
    const { error } = validateCustomer(req.body);
    if(error) return res.status(400).send(error.details[0].message);
    const customer = {
        id: customers.length + 1,
        title: req.body.title
    };
    customers.push(customer);
    res.send(customer);
});

//PORT environment variable
const port = process.env.PORT || 8080;
app.listen(port, () => {
    console.log(`Listening on port ${port}...`);
});