class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int cnt = 0;
        for (char ch : s) {
            if (ch == '(') {
                if (cnt > 0) {
                    ans += ch;
                }
                cnt++;
            }
            else {
                if (cnt > 1) {
                    ans += ch;
                }
                cnt--;
            }
        }
        return ans;
        
        
    }
};