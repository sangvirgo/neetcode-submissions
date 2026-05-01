class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int res=0;
        for(int i=0; i<nums.size(); i++) {
            int tempNum=nums[i];
            if(st.find(tempNum-1)!=st.end()) continue;
            int temp=1;
            while(i<nums.size() && st.find(tempNum+1)!=st.end()) {
                tempNum++;
                temp++;
            }
            res=max(res, temp);
        }
        return res;
    }
};
