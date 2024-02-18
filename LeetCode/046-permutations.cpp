// Resolvido em 29/01/2024
class Solution { // Backtracking - Time O(n*n!) - Space O(n*n!)
public:
    void solve(vector<vector<int>>& ans, vector<int>& cur, queue<int>& nums, int MAX){
        if(MAX == cur.size()){
            ans.push_back(cur);
            return;
        }
        for(int i = 0; i < nums.size(); i++){
            cur.push_back(nums.front());
            nums.pop();
            solve(ans, cur, nums, MAX);
            nums.push(cur.back());
            cur.pop_back();
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> cur;
        queue<int> aux;
        for(int i = 0; i < nums.size(); i++) aux.push(nums[i]);
        solve(ans, cur, aux, nums.size());
        return ans;
    }
};