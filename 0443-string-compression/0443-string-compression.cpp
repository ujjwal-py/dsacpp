class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> ans;
        for (int i = 0; i < chars.size(); i++) {
            int count = 1;
            char s = chars[i];
            while (i < chars.size() - 1 && (chars[i] == chars[i+1])) {
                count++;
                i++;
            }
            ans.push_back(s);
            if (count == 1) {

            } 
            else {
                string cn = to_string(count);
                for (char t : cn) {
                    ans.push_back(t);
                }
            }
        }
        chars.clear();
        for (int i = 0; i < ans.size(); i++) {
            chars.push_back(ans[i]);
        }
        return chars.size();
    }
};