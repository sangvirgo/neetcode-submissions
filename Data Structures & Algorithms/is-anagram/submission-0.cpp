class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return 0;
        vector<int> m(26);
        for(const char c: s) {
            m[c-'a']++;
        }
        for(const char c:t) {
            m[c-'a']--;
        }
        for(const auto& cnt : m) {
            if(cnt!=0) return 0;
        }
        return 1;
    }
};