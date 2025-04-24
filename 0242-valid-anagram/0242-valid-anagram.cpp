class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        // for (int i = 0; i < s.length(); i++) {
        //     if (s.find(t[i]) > s.length()) return false;
        // }
        // return true;

        int sHash[26] = {0};
        int tHash[26] = {0};
        for (int i = 0; i < s.length(); i++) {
            sHash[s[i] - 'a']++;
            tHash[t[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if (sHash[i] != tHash[i]) return false;
        }
        return true;
    }
};