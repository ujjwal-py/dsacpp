class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char>sm;
        for (int i = 0; i < s.size(); i++) {
            if (sm.find(s[i]) != sm.end()) {
                if (t[i] != sm[s[i]]) return false;
            }
            sm[s[i]] = t[i];
        }
        map<char, char>tm;
        for (int i = 0; i < s.size(); i++) {
            if (tm.find(t[i]) != tm.end()) {
                if (s[i] != tm[t[i]]) return false;
            }
            tm[t[i]] = s[i];
        }
        return true;
    }
};