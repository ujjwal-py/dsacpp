class Solution {
public:
    string largestOddNumber(string num) {
        int l = 0, r = num.length() - 1;
        string ans = "";
        while (l <= r) {
            int nm = num[r] + '0';
            if (nm > 0 && nm % 2 != 0) {
                ans += num.substr(l, r-l + 1);
                break;
            }
            else r--;
        }
        return ans;
        
    }
};