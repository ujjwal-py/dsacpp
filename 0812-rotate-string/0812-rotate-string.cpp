class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) return false;
        string ss = s + s;
        if (ss.find(goal) < ss.length()) return true;
        else return false;
        
    }
};