//the controller is responsible for handling the request and sending the response
const Task = require('../models/Task');
const getAllTasks = async (req, res) => {
    try {
        const tasks = await Task.find({});
        //the reason why we can use mongoose methods like find() is because we imported the Task model
        //and the Task model is connected to the database
        res.status(200).json({tasks});
    } catch (error) {
        res.status(500).json({msg: error});
    }
}
const createTask = async (req, res) => {
    try {
        const task = await Task.create(req.body);
        res.status(201).json({task});
    } catch (error) {
        res.status(500).json({msg: error});
    }
}
const getTask = (req, res) => {
    res.json({id: req.params.id});
}
const updateTask = (req, res) => {
    res.send('update item');
}
const deleteTask = (req, res) => {
    res.send('delete item');
}

module.exports = {
    getAllTasks, createTask, getTask, updateTask, deleteTask
}