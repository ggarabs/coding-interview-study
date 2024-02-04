// Resolvido em 04/02/2024
class Solution { // Bit Operations - Time O(n) - Space O(1)
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++) ans ^= nums[i];
        return ans;
    }
};