// Resolvido em 02/02/2024
class Solution { // String - Time O(n) - Space O(n)
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        for(int i = 0; i < strs[0].size(); i++){
            char cur = strs[0][i];
            for(int j = 0; j < strs.size(); j++){
                if(i >= strs[j].size() || cur != strs[j][i]){
                    cur = '\0';
                    break;
                }
            }
            if(cur == '\0') break;
            else ans += cur;
        }
        return ans;
    }
};