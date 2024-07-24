// static : something that belongs to a class rather than an object 
//          is shared among all instances of a class 
//          class owns static members, they are associated with the class

class MathUtils {
    static PI = 3.14159;
    static calculateCircumference(radius) {
        return 2 * MathUtils.PI * radius;
    }
    static calculateArea(radius) {
        return MathUtils.PI * radius * radius;
    }
}

console.log(MathUtils.PI); // 3.14
console.log(MathUtils.calculateCircumference(5)); // 31.41
console.log(MathUtils.calculateArea(5)); // 78.54




// Mixed classwith static and non-static members
class Student {
    static studentCount = 0;
    getStudentCount() {
        return `There are ${Student.studentCount} students in the class.`;
    }
    constructor(name, age) {
        this.name = name;
        this.age = age;
        Student.studentCount++;
    }
    sayHello() {
        console.log(`Hello, my name is ${this.name}`);
    }
}
let student1 = new Student("Supriya", 20);
student1.sayHello();
let student2 = new Student("Sushma", 21);
student2.sayHello();
let student3 = new Student("Survan", 19);
student3.sayHello();

console.log(student1.name); // Supriya
console.log(student2.name); // Sushma
console.log(student3.name); // Survan

console.log(Student.studentCount); // 3
console.log(student1.getStudentCount()); // 3
