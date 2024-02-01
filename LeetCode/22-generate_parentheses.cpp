// Resolvido em 01/02/2024
class Solution { // Backtracking - Time O(2^(2*n)) - Space O(2^(2*n))
public:
    void solve(string buffer, vector<string>&ans, int ab, int dif, int MAX){
        if(buffer.size() == 2*MAX){
            ans.push_back(buffer);
            return;
        }
        if(ab < MAX) solve(buffer+'(', ans, ab+1, dif+1, MAX);
        if(dif != 0) solve(buffer+')', ans, ab, dif-1, MAX);

    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve("", ans, 0, 0, n);
        return ans;
    }
};