// JSON = (JavaScript Object Notation) data-interchange format
//        Used for exchanging data between a server and a web application
//        JSON files {key:value} OR [value1, value2, value3]

//      JSON.stringify() = converts a JS object to a JSON string.
//      JSON.parse() = converts a JSON string to a JS object

// JSON file work with one long string of characters
const names = [
    "Ankita",
    "Bhavana",
    "Riya",
    "Nikhil",
    "Nikku",
    "Raj",
    "Abhishek",
    "Mihir",
];
const person = {
    name: "Ratikesh",
    age: 25,
    isEmployed: true,
    hobbies: ["Singing", "guitar", "cooking", "traveling"],
};

const people = [
    { name: "Ankita", age: 24, city: "Pune" },
    { name: "Sumit", age: 22, city: "Bangalore" },
    { name: "Rahul", age: 23, city: "Calicut" },
    { name: "Priya", age: 26, city: "Mumbai" },
];

// Stringify converts an array to a JSON string
const nameString = JSON.stringify(names);
console.log(nameString);

const personString = JSON.stringify(person);
console.log(personString);

const peopleString = JSON.stringify(people);
console.log(peopleString);

// parsing JSON string to get back the original array/object
// converting that long string back to an JSON object we use JSON.parse()
const originalJsonNames = JSON.parse(nameString);
const originalJsonPerson = JSON.parse(personString);
const originalJsonPeople = JSON.parse(peopleString);
console.log(originalJsonNames);
console.log(originalJsonPerson);
console.log(originalJsonPeople);
