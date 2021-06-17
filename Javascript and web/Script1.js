// JavaScript source code
window.alert("HELLO"); //alert("hello")
console.log('"Hello"');
let x = "Hell";
const y = "WHY";
window.alert(y);
console.log(typeof (9), "\n", typeof ("SA")); // number
let book = {}; //object
let country = {
    name: "Netherlands",
    population: 17.18
};
country.capital = "Amsterdam";
delete country.population;
country.population = "78"   
console.log(country.population)
String(123);   // "123"
String(false); // "false"
String(-12.3); // "-12.3"
String(true);  // "true"
Number("1");    // 1
Number(" 37 "); // 37
Number("");     // 0
Number("\n3");  // 3
Number("\n");   // 0
Number("\t");   // 0
Number(true);   // 1
Number(false);  // 0
console.log(+"543")
let a = 1;
let b = 2;
console.log(`The sum of numbers ${a} and ${b} is not equal to ${10 * a + b}.`);
console.log(`The

noob`)
let items = ["cheese", "shampoo", "pen"]; //is an array
let emptyArrayOne = new Array();
let emptyArrayTwo = [];
items[1] = "soap"; // rewrite the elements of array     
console.log(items.length);
items.push("flowers");
console.log(items.shift()); // deletes the zeroth item and displays it
console.log(items);
items.pop();
console.log(items);
/*
 function name(parameters) {
   // body
} 
*/
function writeMessage() {
    console.log("Good afternoon!");
}
// ARROW FUNCTIONS
let append = (a, b) => { return a + b;}; //curly braces allows to write multiple lines of code


//TIMEOUTS
function welcome(name) {
    console.log(name + ", welcome to our website! You have a special discount today!");
}
let userWelcomeMessage = setTimeout(welcome, 5000, "Mary")

//INTERVALS
function alarm(time) {
    console.log("Wake up! It�s " + time + " o'clock!");
}

setInterval(alarm, 3000, 8);
let timerId = setTimeout(welcome,1000,"NOOB");

clearTimeout(timerId);
const intervalId = setInterval(alarm, 1000);

clearInterval(intervalId);
console.log(5);

function printOne() {
    console.log(1);
}

console.log(9);

function printFour() {
    console.log(4);
}

setTimeout(printSix, 3000)
setTimeout(printOne, 0)
setTimeout(printFour, 0)
setTimeout(printSeven, 2000)

function printSix() {
    console.log(6);
}

function printSeven() {
    console.log(7);
}
/*null means that the variable was explicitly assigned an empty or non-existent value.
 * If the variable is null, we know that it does not contain an acceptable number, string or other data type:
 */
//The undefined value is returned when a variable was declared, but its value wasn't set
console.log(typeof null);       // object
console.log(typeof undefined);  // undefined

console.log("15" === 15);         // false
console.log("15" == 15);          // true 
console.log(true === 1);          // false
console.log(true == 1);           // true
console.log(null === undefined);  // false
console.log(null == undefined);   // true
console.log(undefined == null);  // true 

console.log(null > 0);  // false
console.log(null == 0); // false
console.log(null >= 0); // true
console.log(null <= 0); // true
console.log(undefined > 0);  // false
console.log(undefined < 0);  // false
console.log(undefined <= 0); // false

let sheep = ["Dolly", "Polly", "Molly"];

console.log(sheep.slice(1, 2)); //be careful it uses index
console.log(sheep.slice(1));

let fibNums = [0, 1, 1, 2, 3, 5, 8, 13, 21];

console.log(fibNums.slice(-4)); // [5, 8, 13, 21] last 4 elements

//Objects methods
let product = {
    name: "Microwave",
    description: "With oven mode",
    price: 398
};

product.giveDiscount = function () {
    console.log("You have a 10% discount!");
};

product.giveDiscount(); // You have a 10% discount!
let person = {
    greetings() {
        console.log("Hello");
    }
};

let movie = {
    name: "The Thirteenth Floor",
    age: 1999,
    getInfo() {
        let arrow = () => console.log("The movie " + this.name + " was shot in " + this.age);
        arrow();
    }
};

movie.getInfo(); // The movie The Thirteenth Floor was shot in 1999

let i;
for (i = 1; i <= 5; i++) {
    console.log(i + ", Hi Nessie!");
}

let animals = ['cat', 'dog', 'turtle'];

for (x in animals) {
    console.log(animals[x]);
}

let n = 2;
while (n < 100) {
    n = n * n;
    console.log(n);
}
// WINDOWS
//  open();
// open("https://www.google.com");

alert("You entered the site as a guest");

prompt("How old are you?", 22);

let name = prompt("What's your name?", "Bob");

alert("Welcome to our website, " + name + "!");

let answer = confirm("Are you sure you want to follow this link?");

alert(answer); // true or false

//Function constructor
function Car(brand, year) {
    this.brand = brand;
    this.year = year;
    //you can return anything default is this
}

 car1000 = new Car("Mercedes", 2020);
const car1001 = new Car("Audi", 2019);


/* first we have to write export before the function which we want
export function myBestFunction() {
    //...
} 

then we we have to write import like this

// main.js
import { myBestFunction as myFunction } from './library.js';

myFunction();

import * as myLib from './library.js';

myLib.myBestFunction();


You can also avoid writing the function name when importing it. To do this, add the default keyword after export and import the function using any name without brackets.

// library.js
export default function myBestFunction() {
  //...
}

// main.js
import anyNameToFunction from './library.js';

anyNameToFunction();
*/

//PROMISES
/*For example, as a user, you can see the whole website without a loaded avatar, 
so you can interact with the site
 instead of staring at a blank page for 30 seconds
 while the browser is loading the personal image. 
Once the avatar has been loaded, you will see it where it's supposed to be.*/
/*let promise = new Promise(function(resolve,reject){


});

const myFriendHaveApprovedMyPosition = true;

let promise = new Promise(function(resolve, reject) {
  if (myFriendHaveApprovedMyPosition){
    resolve("Hooray! Now I’m a true programmer!");
  } else {
    reject(new Error("Whoops! Have to study more =("));
 }
});
let promise = new Promise(function(resolve, reject) {
    setTimeout(() => resolve("I have completed"), 5000);
  });

const examDate = 25.06;
const promise = new Promise(function(resolve, reject){
    const currentDate = 23.05;
    if (currentDate < examDate){
        resolve("You should prepare for the exam");
    } else {
        reject("Oops! You have missed your exam!");
    }
});

promise.then(
    function successStatus(response) {
        console.log(response);
        return response;
    },
    function failStatus(error) {
        console.log(error);
        return error;
    }
);
//.then(null, function failStatus(error) { ... }), or .catch:



promise.catch(function failStatus(error) {
    console.log(error);
    return error;
});
//The method .finally is used when we want to invoke a function after the promise was settled, regardless of the promise state. 
//The .finally function doesn’t have any arguments, 
//so inside the function you can’t interact with the actual promise state or result

promise
    .then(function successStatus(response) {
        console.log(response);
        return response;
    })
    .catch(function failStatus(error) {
        console.log(error);
        return error;
    })
    .finally(function stopLoader() {    
        console.log("The loader has stopped");
    });
*/
let isSuccess = true;

function loadNumber() {
    return new Promise(function(resolve, reject){
        if (isSuccess){
            resolve(1);
        } else {
            reject(2);
        }
    });
}


loadNumber()
    .then(function number1(value) {
        console.log(value);
        return loadNumber();
    })
    .then(function number2(value) {
        console.log(value);
        return loadNumber();
    })
    .then(function number3(value) {
        console.log(value);
        return loadNumber();
    })
    .then(function number4(value) {
        isSuccess = false;
        console.log(value);
        return loadNumber();
    })
    .then(function number5(value) {
        console.log(value);
        return loadNumber();
    })
    .catch(function(error) {
        console.log(error)
    })
    .finally(function() {
        console.log(3)
    });

print()