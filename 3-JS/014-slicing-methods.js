// slicing wont alter the original string
let fullName = "Sumit Jha"

let firstName = fullName.slice(0, 5);
let lastName = fullName.slice(6)
console.log(firstName, lastName);



firstName = fullName.slice(0, fullName.indexOf(" "));
lastName = fullName.slice(fullName.indexOf(" "));
console.log(firstName, lastName);



firstName = fullName.split(" ")[0];
lastName = fullName.split(" ")[1];
console.log(firstName, lastName);

let lastCharacter = fullName.slice(-1);
console.log(lastCharacter);



const email = "AlexisZara@gmail.com";
let userName = email.slice(0, email.indexOf("@"));
let extension = email.slice(email.indexOf("@") + 1);
console.log(`User Name: ${userName}`);
console.log(`Email Extension: ${extension}`);