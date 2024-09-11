//the controller is responsible for handling the request and sending the response
const Task = require('../models/Task');
//ref https://mongoosejs.com/docs/api/model.html#Model.find() 
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
//ref https://mongoosejs.com/docs/api/model.html#Model.findOne() 
const getTask = async (req, res) => {
    try {
        const {id: taskID} = req.params;
        const task = await Task.findOne({_id: taskID});

        
        if(!task){
            return res.status(404).json({msg: `No task with id : ${taskID}`});
        }
        res.status(200).json({task});
    } catch (error) {
        res.status(500).json({msg: error});
    }

    
}
const updateTask = async (req, res) => {
    try {
        const {id: taskID} = req.params;

        const task = await Task.findOneAndUpdate({_id: taskID}, req.body, {
            new:true, runValidators:true
        });

        if(!task){
            return res.status(404).json({msg: `No task with id : ${taskID}`});
        }

        //res.status(200).json({id: taskID, data: req.body});
        res.status(200).json({task});
    } catch (error) {
        res.status(500).json({msg: error});
    }
}
const deleteTask = async (req, res) => {
    try {
        const {id: taskID} = req.params;
        const task = await Task.findOneAndDelete({_id: taskID});
        if(!task){
            return res.status(404).json({msg: `No task with id : ${taskID}`});
        }
        res.status(200).json({task});
    } catch (error) {
        res.status(500).json({msg: error});
    }
}

module.exports = {
    getAllTasks, createTask, getTask, updateTask, deleteTask
}