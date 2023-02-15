const fs = require("fs");
const filePath = process.platform === "linux" ? "/dev/stdin" : "./input.txt";
const input = fs.readFileSync(filePath).toString().trim().split(" ");

const dp = [];
Solution = (N) => {
    dp[0] = 1;
    dp[1] = 1;
    for (i = 2; i <= N; i++) {
        dp[i] = dp[i - 1] * i;
    }
    console.log(dp[N]);
};

Solution(input[0]);
