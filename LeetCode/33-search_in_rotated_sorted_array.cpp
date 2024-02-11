// Resolvido em 11/02/2024
class Solution { // Binary Search - Time O(lg N) - Space O(1)
public:
    int search(vector<int>& nums, int target) {
        int beg = 0, end = nums.size()-1, mid, last = nums.size()-1;

        while(beg <= end){
            mid = (beg+end)/2;

            if(target == nums[mid]) return mid;

            if(target > nums[last] && nums[mid] < nums[last]) end = mid-1;
            else if(target <= nums[last] && nums[mid] > nums[last]) beg = mid+1;
            else if(target < nums[mid]) end = mid-1;
            else beg = mid+1;
        }
        return -1;
    }
};