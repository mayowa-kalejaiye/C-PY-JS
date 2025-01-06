arr1 = new Array("purple", "green", "yellow");//Not advisable to use
arr2 = ['black', 'orange', 'pink'];

arr3 = new Array(10);
arr4 = [10];

let arr = ["hi there", 5, true];
arr[0] = "new house";
// console.log(arr[0]);

// arr = ["nope, now you'e overwriting the array"];

colors = ["black", "orange", "pink"];
booleans = [true, false, false, true];
emptyArray = []

// console.log("Length of colors:", colors.length);
// console.log("Length of booleans:", booleans.length);
// console.log("Length of empty arrays:", emptyArray.length);

numbers = [12, 24, 36];
numbers[5] = 48;
// console.log(numbers.length);
// console.log('numbers', numbers);

arr = ['Milk', 'Bread', 'Apples'];
// console.log(arr.length);
arr[1] = 'Bananas';
// console.log(arr)

favoriteFruits = ["grapefruit", "orange", "lemon"];
favoriteFruits.push("tangerine");

let lengthOfFavoriteFruits = favoriteFruits.push('lime');

// console.log(favoriteFruits);

let arrOfShapes = ["circle", "triangle", "rectangle", "pentagon"];
arrOfShapes.splice(2, 0, "square", "trapezoid");
console.log(arrOfShapes);
