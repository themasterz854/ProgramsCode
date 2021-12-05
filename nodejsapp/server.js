// Requiring module
const express = require('express');
 
// Creating express object
const app = express();
 
// Handling GET request
app.get('/', (req, res) => {
    res.send('OP madarchod '
        + 'hai')
    res.end()
})
 
// Port Number
const PORT = process.env.PORT || 80;
 
// Server Setup
app.listen(PORT,console.log(
  `Server started on port ${PORT}`));