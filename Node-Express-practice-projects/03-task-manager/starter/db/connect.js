const mongoose = require('mongoose');

const connectionString = '';

const connectDB = (url) =>{
    mongoose.connect(connectionString || url, 
    {
        useNewUrlParser: true,
        useCreateIndex: true,
        useUnifiedTopology: true,
        useFindAndModify: false
    });
}

module.exports = connectDB;