// Resolvido em 26/01/2024
class Solution { // Hash table - Time O(n) - Space O(n)
public:
    static vector<int> twoSum(vector<int>& nums, int target){
        const int MAXL = (int)nums.size();

        unordered_map<int, int> mp;
        for(int i = 0; i < MAXL; i++){ mp[nums[i]] = i; }

        vector<int>ans(2);

        for(int i = 0; i < MAXL; i++){
            int value = target - nums[i];
            if(mp.find(value) != mp.end() && mp[value] != i){ // count() é uma opção
                ans[0] = min(mp[value], i);
                ans[1] = max(mp[value], i);
                break;
            }
        }
        return ans;
    }
};
