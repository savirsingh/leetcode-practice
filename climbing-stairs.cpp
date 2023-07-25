// code by savir singh
// https://leetcode.com/problems/climbing-stairs/

class Solution {
public:
    int dp[50];
    inline int climbStairs(int n) {
        if (dp[n]) return dp[n];
        if (n <= 0) return 0;
        if (n == 1) return 1;
        if (n == 2) return 2;
        dp[n] = climbStairs(n - 1) + climbStairs(n - 2);
        return dp[n];
    }
};
