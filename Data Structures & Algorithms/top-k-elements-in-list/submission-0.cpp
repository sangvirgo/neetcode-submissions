class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> rs;
        unordered_map<int, int> m;
        for(const int &n: nums) {
            if(m.find(n)!=m.end()) {
                m[n]++;
            } else {
                m[n]=1;
            }
        }
        vector<pair<int, int>> cnt(m.begin(), m.end());
        sort(cnt.begin(), cnt.end(), [](const auto& a, const auto& b) {
            return a.second > b.second;
        });
        for(int i=0; i<k; i++) {
            rs.push_back(cnt[i].first);
        }
        return rs;
    }
};