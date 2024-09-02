const authorize = (req, res, next) => {
    const { user } = req.query;
    if (user === 'john') {
        req.user = { name: 'john', id: 3 }
        console.log('Authorize')
        next()
        //how to use middleware in express
        //http://localhost:5000/?user=john
    } else {
        res.status(401).send('Unauthorized')
    }
    
}
module.exports = authorize