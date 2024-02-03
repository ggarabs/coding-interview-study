// Resolvido em 02/02/2024
class Solution { // Hash Table - Time O(n) - Space(1)
public:
    int romanToInt(string s) {
        const int sz = s.size();
        int ans = 0;
        unordered_map <char, int> table = {{'I', 1}, {'V', 5}, {'X', 10}, 
                                           {'L', 50}, {'C', 100}, {'D', 500}, 
                                           {'M', 1000}};
        for(int i = 0; i < sz; i++){
            if(i+1 < sz && table[s[i]] < table[s[i+1]]) ans -= table[s[i]];
            else ans += table[s[i]];
        }
        return ans;
    }
};