// element selectors = Methods used to target and manipulate HTML elements
//                                     select one or multiple HTML elements
//                                     from the DOM (Document Object Model)

// 1. document.getElementById()                 // ELEMENT OR NULL
// 2. document.getElementsClassName()           // HTML COLLECTION
// 3. document.getElementsByTagName()           // HTML COLLECTION
// 4. document.querySelector()                  // FIRST ELEMENT OR NULL
// 5. document.querySelectorAll()               // NODELIST

// ID selector
const myHeading = document.getElementById("my-heading");
myHeading.style.color = "darkblue";
myHeading.style.fontSize = "3em";
myHeading.style.fontWeight = "400";
myHeading.style.backgroundColor = "#FDFD96";
myHeading.style.textAlign = "center";

console.log(myHeading);


// Class selector
// list is returned (HTML collection)
const uses = document.getElementsByClassName("uses");
for (let use of uses) {
    use.style.padding = "2px";
    use.style.fontSize = "1em";
    use.style.marginLeft = "30px";
}
// cant use forEach and other array methods
// convert the HTMLCollection to array
Array.from(uses).forEach(use => use.style.color = "maroon");



const h4elements = document.getElementsByTagName("h4");
h4elements[0].style.backgroundColor = "tomato";

for (h4 of h4elements) {
    h4.style.color = "darkgreen";
    h4.style.fontWeight = "400";
    h4.style.fontSize = "1.5em";
}


const listElements = document.getElementsByTagName("li");
for (item of listElements) {
    item.style.color = "cyan";
    item.style.fontSize = "1.1em";
}

// Making an array from HTMLCollection
Array.from(h4elements).forEach(item => item.style.textAlign = "center");
Array.from(listElements).forEach(item => item.style.listStyle = "none");



// get the first match queryselector
// . used for class and # for id 
const p = document.querySelector("p");
p.style.color = "purple";
p.style.backgroundColor = "white";
p.style.padding = "1.2em .5em";

// select every match queryselector
// Nodelist has a built in forEach method
const pop = document.querySelectorAll(".pop");
pop[0].style.color = "hotpink";
pop.forEach(item => item.style.color = "white");

pop.forEach(item => item.style.listStyle = "number");



