let userName = "sumitzha"
console.log(`Hello, ${userName}!`);

console.log(userName.charAt(0));
console.log(userName.indexOf("a"));

console.log(userName.lastIndexOf("i"));
console.log(userName.length);

userNameSpaced = "      jhaSumit    ";
console.log(userNameSpaced.trim());

console.log(userName.toUpperCase());
console.log(userName.toLowerCase());
console.log(userName.repeat(3));

console.log(userName.startsWith('zha'));
console.log(userNameSpaced.trim().startsWith('jha'));

console.log(userName.endsWith('zha'));
console.log(userName.includes('ha'));

let phoneNumber = "1234-567-890";
phoneNumber = phoneNumber.replace("-", "");
console.log(phoneNumber);

phoneNumber = phoneNumber.replaceAll("-", "");
console.log(phoneNumber);

console.log(phoneNumber.padStart(14, "0"));