class Solution {
public:
    int compress(vector<char>& chars) {
        string ans = "";
        for (int i = 0; i < chars.size(); i++) {
            int count = 1;
            char s = chars[i];
            while (i < chars.size() - 1 && (chars[i] == chars[i+1])) {
                count++;
                i++;
            }
            ans += s;
            if (count == 1) {

            } 
            else {
                string cn = to_string(count);
                for (char t : cn) {
                    ans += t;
                }
            }
        }
        int l = 0;
        for (char c : ans) {
            chars[l] = c;
            l++;
        }
        return ans.size();
    }
};