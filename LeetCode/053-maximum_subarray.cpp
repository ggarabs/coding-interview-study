// Resolvido em 31/01/2024
class Solution { // Dynamic Programming - Time O(n) - Space O(1)
public:
    int maxSubArray(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        const int len = nums.size();
        int ans = nums[0], cur = nums[0];
        for(int i = 1; i < len; i++){
            cur = max(cur+nums[i], nums[i]);
            ans = max(ans, cur);
        }
        return ans;
    }
};