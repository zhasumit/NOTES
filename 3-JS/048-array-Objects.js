const fruits = [
    { name: 'apple', color: 'red', calories: 95 },
    { name: 'orange', color: 'orange', calories: 45 },
    { name: 'banana', color: 'yellow', calories: 105 },
    { name: 'Coconut', color: 'white', calories: 159 },
    { name: 'Pineapple', color: 'yellow', calories: 37 },
]

console.log(fruits[3].color);


fruits.push({ name: 'grape', color: 'purple', calories: 62 });
fruits.push({ name: 'melon', color: 'green', calories: 125 });

console.log(fruits);
fruits.pop();
console.log(fruits);


console.log('-----------------------------------')
fruits.forEach((fruit) => console.log(fruit));
fruits.forEach((fruit) => console.log(fruit.name));
fruits.forEach((fruit) => console.log(fruit.calories));





// map makes a spereate new array so we return a new object
const fruitsNames = fruits.map((fruit) => fruit.name);
console.log(fruitsNames);
const fruitColors = fruits.map((fruit) => fruit.color);
console.log(fruitColors);
const fruitCalories = fruits.map((fruit) => fruit.calories);
console.log(fruitCalories);





// using filter ()
const yellowFruits = fruits.filter((fruit) => fruit.color === 'yellow');
const lowCalorieFruits = fruits.filter((fruit) => fruit.calories < 100);
console.log(yellowFruits);
console.log(lowCalorieFruits);





console.log('-----------------------------------')
// reduce()
const maxCalorieFruit = fruits.reduce((maxCal, fruit) => {
    return fruit.calories > maxCal.calories ? fruit : maxCal;
})
console.log(maxCalorieFruit);
const minCalories = fruits.reduce((minCal, fruit) => {
    return fruit.calories < minCal.calories ? fruit : minCal;
})
console.log(minCalories);