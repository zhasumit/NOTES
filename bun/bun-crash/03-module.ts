// import path from "path";
const path = require("path");

const filePath = path.join(__dirname, "app.js");
const fileName = path.basename(filePath);

console.log(filePath);
console.log(fileName);
