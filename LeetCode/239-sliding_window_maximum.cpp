// Resolvido em 18/02/2024
class Solution { // Heap (Priority Queue) - Time O(N*lg N) - Space O(N)
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        const int size = (int)nums.size();
        priority_queue<pair<int,int>> pq;
        vector<int> ans;
        for(int i = 0; i < size; i++){
            pq.push({nums[i], i});
            if(i >= k-1){
                while(!pq.empty() && i-pq.top().second >= k) pq.pop();
                ans.push_back(pq.top().first);
            }
        }
        return ans;
    }
};