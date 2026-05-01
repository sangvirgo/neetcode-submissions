class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int cntZero=0; int res=1;
        for(const auto& n:nums) {
            if(n) {
                res*=n;
            } else {
                cntZero++;
            }
        }
        vector<int> rs(nums.size(), 0);
        if(cntZero>1) {
            return rs;
        } else {
            for(int i=0; i<nums.size(); i++) {
                if(nums[i] && cntZero==0) {
                    rs[i]=res/nums[i];
                } else if(cntZero==1 && nums[i]==0)  {
                    rs[i]=res;
                }
            }
        }
        return rs;
    }
};