// Resolvido em 28/01/2024
class Solution { // Dynamic Programming - Time O(n) - Space O(n)
public:
    int rob(vector<int>& nums) {
        const int MAXL = nums.size();
        int dp[MAXL], ans = 0, aux = 0;
        for(int i = MAXL-1; i >= 0; i--){
            if(i+2 < MAXL) aux = max(aux, dp[i+2]);
            dp[i] = nums[i]+aux;
            ans = max(dp[i], ans);
        }
        return ans;
    }
};