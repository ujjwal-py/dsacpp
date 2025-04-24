class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char>sm;
        unordered_map<char, char>tm;
        for (int i = 0; i < s.size(); i++) {
            if (sm.find(s[i]) != sm.end()) {
                if (t[i] != sm[s[i]]) return false;
            }
            if (tm.find(t[i]) != tm.end()) {
                if (s[i] != tm[t[i]]) return false;
            }
            tm[t[i]] = s[i];
            sm[s[i]] = t[i];
        }
        return true;
    }
};