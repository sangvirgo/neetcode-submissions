class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(const int i: nums) {
            if(s.find(i)!=s.end()) {
                return 1;
            }
            s.insert(i);
        }
        return 0;
    }
};