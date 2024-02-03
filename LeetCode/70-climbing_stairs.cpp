// Resolvido em 02/02/2024
class Solution { // Dynamic Programming - Time O(n) - Space O(n)
public:
    int climbStairs(int n) {
        vector <int> dp(n+1);
        dp[0] = 1; dp[1] = 1;
        for(int i = 2; i <= n; i++) dp[i] = dp[i-1] + dp[i-2];
        return dp[n];
    }
};