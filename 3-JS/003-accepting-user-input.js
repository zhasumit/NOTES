// How to accept user input
// 1. EASY WAY = window prompt
// 2. PROFESSIONAL WAY = HTML textbox

// ------------------------ EASY WAY ------------------------
let userName = window.prompt("What's your username?");
console.log(username);

// -------------------- PROFESSIONAL WAY --------------------
let username;

// some button with mySubmit event listener -> after user clicks submit button
document.getElementById("mySubmit").onclick = function () {
    username = document.getElementById("myText").value;
    document.getElementById("myH1").textContent = `Hello ${username}`
}


/* Example HTML with input field and button
    <h1 id="myH1">Enter your input</h1>
    <label>Input: </label>
    <input id="myText">
    <button id="mySubmit">submit</button> 
*/