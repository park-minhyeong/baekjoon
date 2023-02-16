const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split(" ");

min = 0;
Solution = (L) => {
    while (L !== 0) {
        if (L >= 5) {
            min++;
            L -= 5;
        } else {
            min++;
            L = 0;
        }
    }
    console.log(min);
};

Solution(input[0]);
