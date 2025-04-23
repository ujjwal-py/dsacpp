class Solution {
public:
    string largestOddNumber(string num) {
        int l = 0, r = num.length() - 1;
        while (l <= r) {
            int nm = num[r] + '0';
            if (nm > 0 && nm % 2 != 0) {
                return num.substr(l, r-l + 1);
            }
            else r--;
        }
        return "";
        
    }
};