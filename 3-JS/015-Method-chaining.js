// Method chaining : multiple methods can be chained together
// ------------------------- NO METHOD CHAINING -------------------------
let userName = " SurPAl ";

// making first letter capital
userName = userName.trim();
let letter = userName.charAt(0);
letter = letter.toUpperCase();

// Making remaining letters lower case
let extracharacter = userName.slice(1);
extracharacter = extracharacter.toLowerCase();

// combining all characters to form a new string (for fullName)
userName = letter + extracharacter;

console.log(userName);




// --------------------------- METHOD CHAINING --------------------------

userName = userName.trim().charAt(0).toUpperCase() + userName.trim().slice(1).toLowerCase();
console.log(userName);