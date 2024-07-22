// Random password generator 

function generatePassword(length, includeLowerCase, includeUpperCase, includeNumbers, includeSymbols) {
    const lowerCaseCharacters = 'abcdefghijklmnopqrstuvwxyz';
    const upperCaseCharacters = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ';
    const numbers = '0123456789';
    const symbols = '!@#$%^&*()_+=-{}[]|;:<>,.?/~`';

    let allowedChars = "";
    allowedChars += includeLowerCase ? lowerCaseCharacters : "";
    allowedChars += includeUpperCase ? upperCaseCharacters : "";
    allowedChars += includeNumbers ? numbers : "";
    allowedChars += includeSymbols ? symbols : "";

    // check for falsy cases
    if (length < 0) {
        console.log("Length must be a positive integer.");
        return;
    } if (allowedChars.length === 0) {
        console.log("At least one character type must be included.");
        return;
    }

    // Iterate the allowedCharacters and randomly select characters
    let password = "";
    for(let i = 0; i < length; i++) {
        const randomIndex = Math.floor(Math.random() * allowedChars.length);
        password += allowedChars[randomIndex];
    }
    return password;
}

let password = generatePassword(10, true, true, true, true);
console.log(`Generated Password: ${password}`);
