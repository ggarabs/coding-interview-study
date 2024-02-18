// Resolvido em 25/01/2024
class Solution { // Bitmask - Time O(2^n) - Space O(2^n)
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        for(int mask = 0; mask < pow(2, nums.size()); mask++){
            vector <int> subset = {};
            for(int i = 0; i < nums.size(); i++){
                if(mask & (1<<i)) subset.push_back(nums[i]);
            }
            ans.push_back(subset);
        }
        return ans;
    }
};