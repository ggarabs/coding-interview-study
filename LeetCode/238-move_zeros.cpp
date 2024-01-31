// Resolvido em 31/01/2024
class Solution { // Two pointers - Time O(n) - Space O(1)
public:
    void moveZeroes(vector<int>& nums) {
        const int len = nums.size();
        int p1 = 0, p2 = 0;
        while(p1 < len && p2 < len){
            if(nums[p1] == 0 && nums[p2] != 0) swap(nums[p1], nums[p2]);
            if(nums[p1] != 0) p1++;
            if(nums[p2] == 0 || p2 < p1) p2++;
        }
    }
};