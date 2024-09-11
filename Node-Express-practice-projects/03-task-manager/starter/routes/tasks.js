//the route is responsible for defining the endpoints and calling the controller
//this is the route of app.use('/api/v1/tasks', tasks);
//the route is also known as the View in the MVC pattern
//but the question is where is the model?
//the model is the data that the controller needs to work with
//the model is saved in the database
//in this case, the model is the Task model, we can view the model as specific data model that the controller needs to work with in the database and the form of the data model is defined in the Task model.
const express = require('express');
const router = express.Router();

const {getAllTasks, createTask, getTask, updateTask, deleteTask} = require('../controllers/tasks');

router.route('/').get(getAllTasks).post(createTask);
router.route('/:id').get(getTask).patch(updateTask).delete(deleteTask);
//req.params.id is used to get the id from the url

module.exports = router;