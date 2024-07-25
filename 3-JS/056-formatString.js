// .toLocaleString() = returns a string with a language 
//                                  sensitive representation of a number
//                                  .toLocaleString("locale", {options});

let number = 123456.789;
console.log(number.toLocaleString("hi-IN"));
console.log(number.toLocaleString("en-US"));
console.log(number.toLocaleString("de-DE"));

number = number.toLocaleString(undefined);
console.log(number);

number = number.toLocaleString("en-US", { style: "currency", currency: "USD" });
console.log(number);
number = number.toLocaleString("hi-IN", { style: "currency", currency: "INR" });
console.log(number);
number = number.toLocaleString("de-DE", { style: "currency", currency: "EUR" });
console.log(number);

