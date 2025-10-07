let sub1 = 89;
let sub2 = 91;
let sub3 = 90;
let sub4 = 97;
let sub5 = 92;


let total = sub1 + sub2 + sub3 + sub4 + sub5;


let percentage = (total / 500) * 100;


console.log("Total Marks = " + total);
console.log("Percentage = " + percentage);

if (percentage >= 90) {
  console.log("Grade: A");
} else if (percentage >= 80) {
  console.log("Grade: B");
} else if (percentage >= 70) {
  console.log("Grade: C");
} else if (percentage >= 60) {
  console.log("Grade: D");
} else {
  console.log("Grade: Fail");
}