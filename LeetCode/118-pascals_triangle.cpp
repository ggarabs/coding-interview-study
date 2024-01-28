// Resolvido em 26/01/2024
class Solution { // Dynamic Programming - Time O(n²) - Space O(n²)
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        if(numRows >= 1) ans.push_back({1});
        if(numRows >= 2) ans.push_back({1,1});

        for(int k = 2; k < numRows; k++){
            vector<int> cur = {1};
            for(int i = 0; i < ans[k-1].size()-1; i++) cur.push_back(ans[k-1][i]+ans[k-1][i+1]);
            cur.push_back(1);

            ans.push_back(cur);
        }

        return ans;
    }
};