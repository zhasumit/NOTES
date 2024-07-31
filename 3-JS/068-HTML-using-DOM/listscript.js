const newFruit = document.createElement("li")
newFruit.textContent = 'jackfruit'
newFruit.style.color = 'grey'
newFruit.style.fontWeight = '400'
newFruit.style.backgroundColor = 'lightgreen'
newFruit.id = 'jackfruit'

document.getElementById('fruits').appendChild(newFruit)
document.getElementById('fruits').prepend(newFruit) 


// inserting between two elements
const mango = document.getElementById("mango");
document.getElementById('fruits').insertBefore(newFruit, mango);
