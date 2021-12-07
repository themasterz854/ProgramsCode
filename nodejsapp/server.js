// Requiring module
const express = require('express');
 
// Creating express object
const app = express();


var absolutepathofhtmlfile = __dirname + '/htmlpracticepage.html';
var absolutepathofassets = __dirname + '/assets';
// Handling GET request
app.use(express.static(absolutepathofassets));
app.get('/', (req, res) => {
    res.sendFile(absolutepathofhtmlfile);
});

// Port Number
const PORT = process.env.PORT || 80;
 
// Server Setup
app.listen(PORT,console.log(
  `Server started on port ${PORT}`));