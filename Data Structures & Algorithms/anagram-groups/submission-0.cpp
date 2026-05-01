class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> m;
        for(string &s: strs) {
            string temp=s;
            sort(temp.begin(), temp.end());
            m[temp].push_back(s);
        }
        for(const auto [k, v]:m) {
            res.push_back(v);
        }
        return res;
    }
};