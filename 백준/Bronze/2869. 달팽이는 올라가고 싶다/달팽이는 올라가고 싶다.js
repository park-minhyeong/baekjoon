const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
let input = fs.readFileSync(filePath).toString().trim().split(" ");

const A = input[0];
const B = input[1];
const V = input[2];
function Solution(A, B, V) {
    let day = Math.ceil((V - B) / (A - B));
    return day;
}

console.log(Solution(input[0], input[1], input[2]));
