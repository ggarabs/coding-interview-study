// Resolvido em 25/01/2024
class Solution { // Stack - Time O(n) - Space O(n)
public:
    bool isValid(string s) {
        stack <char> st;
        bool valid = true;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') st.push(s[i]);
            else{
                if(s[i] == ')' && st.size() && st.top() == '(') st.pop();
                else if(s[i] == ']' && st.size() && st.top() == '[') st.pop();
                else if(s[i] == '}' && st.size() && st.top() == '{') st.pop();
                else{
                    valid = false;
                    break;
                }
            }
        }
        if(st.size()) valid = false;
        return valid;
    }
};