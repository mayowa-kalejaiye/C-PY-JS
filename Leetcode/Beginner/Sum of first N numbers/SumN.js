// Question 1: Sum of First N Natural Numbers
// Write a function to calculate the sum of the first N natural numbers.

function sumOfNaturals(n) {
    return (n * (n + 1)) / 2;
}

let result = sumOfNaturals(5);
console.log("Sum:", result);
