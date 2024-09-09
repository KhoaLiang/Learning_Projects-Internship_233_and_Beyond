const mongoose = require('mongoose');

const TaskSchema = new mongoose.Schema({
    name:{
        type:String,
        required:[true, 'must provide name'],
        trim:true,
        maxlength:[20, 'name can not be more than 20 characters']
    },
    completed: {
        type: Boolean,
        default: false
    }
});

//export the model
//the model is the data that the controller needs to work with
//mongoose.model('Task', TaskSchema) creates a collection called tasks IF it does not exist
//and inserts the data into the collection
//if the collection exists, it inserts the data AS A DOCUMENT into the collection
//a collection is a table in a relational database
//a collection consist of many documents in a NoSQL database
module.exports = mongoose.model('Task', TaskSchema);