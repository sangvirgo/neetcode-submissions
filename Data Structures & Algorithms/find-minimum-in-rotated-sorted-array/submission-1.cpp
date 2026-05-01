class Solution {
public:
  int findMin(vector<int> &nums) {
    if(nums.size()<2) return nums[0];
    int rs = 5001;
    int l = 0, r = nums.size() - 1;
    while (l <= r) {
      int m = l + (r - l) / 2;
      rs = min(min(nums[r], nums[l]), min(rs, nums[m]));
      if (nums[m] > nums[l]) {
        l = m + 1;
      } else {
        r = m - 1;
      }
    }
    return rs;
  }
};

