// Requiring module
const dotenv = require('dotenv');
dotenv.config();
const express = require('express');
// Creating express object
const app = express();
var bodyParser = require("body-parser");
var absolutepathofhtmlfile = __dirname + '/htmlpracticepage.html';
var absolutepathofhtml2file = __dirname + '/htmlpage2.html';
var absolutepathofassets = __dirname + '/assets';
var jsonobj = { "message": "hey"};
var name;

// Handling GET request
app.use(function middleware(req, res, next) {
  var string = req.method + " " + req.path + " - " + req.ip;
  console.debug(string);
  next();
});
app.use(express.static(absolutepathofassets));

app.get('/', (req, res) => {
    res.sendFile(absolutepathofhtmlfile);
});
app.get(
  "/now",
  (req, res, next) => {
    req.time = new Date().toString();
    next();
  },
  (req, res) => {
    res.send({
      time: req.time
    });
  }
);

const middleware2 = (req, res, next) => {
  req.time = new Date().toString();
  next();
};

app.get("/now2", middleware2, (req, res) => {
  res.send({
    time: req.time
  });
});

app.get('/getemail',(req,res) => {
  res.sendFile(absolutepathofhtml2file);
})
app.get('/getdata',(req,res) => {
  
})
app.get('/json',(req,res) => {
  name = req.query.firstname;
  jsonobj["message"] = "Hello" + name;
  if(process.env.MESSAGE_STYLE === "uppercase")
{
  jsonobj["message"] = jsonobj["message"].toUpperCase();
}
  res.json(jsonobj);
})

app.get("/:word/echo", (req, res) => {
  const word = req.params.word;
  res.json({
    echo: word
  });
});
var j = {}
app.get('/name', function(req, res) {
   //firstName = req.query.first;
   //lastName = req.query.last;
  // OR you can destructure and rename the keys
  //var { first: firstName, last: lastName } = req.query;
  // Use template literals to form a formatted string
  res.json({
    name: `${firstName} ${lastName}`
  });
});
app.use('/name',express.json());
app.use('/name',express.urlencoded());
app.post('/name', function(req, res) {
  // Handle the data in the request
  console.log(req.body.first);
  console.log(req.body.last)
  var string = req.body.first + " " + req.body.last;
  console.log(string);
  res.json({ name: string });
});
// Port Number
const PORT = process.env.PORT || 80;
 
// Server Setup
app.listen(PORT,console.log(
  `Server started on port ${PORT}`));