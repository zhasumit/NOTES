// nested objects = Objects inside of other Objects.
//                               Allows you to represent more complex data structures
//                               Child Object is enclosed by a Parent Object

//                               Person{Address{}, ContactInfo{}}
//                               ShoppingCart{Keyboard{}, Mouse{}, Monitor{}}  

class Person {
    // since rest parameters can take more than one adress parts
    constructor(name, age, gender, ...address) {
        this.name = name;
        this.age = age;
        this.gender = gender;
        this.address = new Adress(...address)
    }
}

class Adress {
    constructor(street, city, country) {
        this.street = street;
        this.city = city;
        this.country = country;
    }
}

const person1 = new Person("Spongebob", 30, "male", "125 conch St.", "Bikini bottom", "Int. waters");
const person2 = new Person("Patrick", 33, "male", "121 conch St.", "Bikini bottom", "Int. waters");
const person3 = new Person("squidward", 35, "male", "127 conch St.", "Bikini bottom", "Int. waters");

console.log(person1.address)