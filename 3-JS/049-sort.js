// sort() = method used to sort elements of an array in place.
//               Sorts elements as strings in lexicographic order, not alphabetical
//               lexicographic = (alphabet + numbers + symbols) as strings

const fruits = ['banana', 'date', 'lemon', 'grape', 'kiwi', 'fig', 'mango', 'cherry', 'nectarine', 'apple'];
console.log(fruits);
fruits.sort();
console.log(fruits);

const numbers = [4, 1, 8, 2, 5, 3, 6, 9, 7];
console.log(numbers);
numbers.sort((a, b) => a - b);
console.log(numbers);
numbers.sort((a, b) => b - a);
console.log(numbers);





const people = [
    { name: "spongebob", age: 12, gpa: 3.5 },
    { name: "patrick", age: 15, gpa: 4.0 },
    { name: "squidward", age: 10, gpa: 2.8 },
    { name: "mr. potatohead", age: 18, gpa: 3.7 },
    { name: "krabby", age: 11, gpa: 3.9 },
]

console.log(people);

people.sort((a, b) => a.gpa - b.gpa);
console.log(people);

people.sort((a, b) => b.age - a.age);
console.log(people);


people.sort((a, b) => a.name.localeCompare(b.name));
console.log(people);
