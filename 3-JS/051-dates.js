// Date : object that contains the current date and time
//        date object can be changed and formatted using methods

const date = new Date();
console.log(date);

// Date(Year, Month, Day, Hour, Minute, Second, Millisecond)
const date1 = new Date(2024, 0, 2, 15, 30, 45, 500);
console.log(date1.toDateString());

// using epoch timestamp (milliseconds since January 1, 1970)
const date2 = new Date(1640992000000);
console.log(date2.toLocaleDateString());





// getting date attributes
const year = date1.getFullYear()
const month = date1.getMonth()
const day = date1.getDate()
const hours = date1.getHours()
const minutes = date1.getMinutes()
const seconds = date1.getSeconds()
const ms = date1.getMilliseconds()
const dayOfWeek = date1.getDay();

console.log(year);
console.log(month);
console.log(day);
console.log(hours);
console.log(minutes);
console.log(seconds);
console.log(ms);
console.log(dayOfWeek);





// setting the date using setFunctions 
date1.setFullYear(2025);
date1.setMonth(11);
date1.setDate(31);
date1.setHours(23);
date1.setMinutes(59);
date1.setSeconds(59);
date1.setMilliseconds(999);

console.log(date1);




// comparing dates
// Passing string constructor to create Date object
const date3 = new Date('2024-09-12');
const date4 = new Date('2025-07-24');
(date3 > date4) ?
    console.log('Happy Birthday!') :
    console.log('date3 is earlier than date4');


