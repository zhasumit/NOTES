// arithmetic operators = operands (values, variables, etc.)
//                                         operators (+ - * /)
//                                         ex. 11 = x + 5;


// Using arithmetic operators to perform operations on numbers.
let students = 30;

students = students + 1;                // Addition 1 to students
students = students - 1;                // Subtraction 1 from students
students = students * 2;                // Multiplication 2 to students
students = students / 2;                // Division 2 from students
students = students ** 2;               // Exponentiation 2 to students
let extraStudents = students % 3;       // Modulo 2 to students (gives remainder)
console.log(students);




// Using the shorthand operators to perform operations on numbers.
// augmented assignment operators.
students += 1;
students -= 1;
students *= 2;
students /= 2;
students **= 2;
students %= 2;


// Increment & decrement operators
students++;
students--;

/*
    operator precedence
    1. parenthesis ()
    2. exponents
    3. multiplication & division & modulo
    4. addition & subtraction
*/