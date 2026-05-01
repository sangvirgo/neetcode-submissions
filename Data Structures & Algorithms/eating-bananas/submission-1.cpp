class Solution {
public:
  int minEatingSpeed(vector<int> &piles, int h) {
    int r = *max_element(piles.begin(), piles.end());
    int l = 1;
    while (l < r) {
      int temp = 0;
      int m = l + (r - l) / 2;
      for (auto it : piles) {
        temp += ceil((double)it / m);
      }
      if (temp > h) {
        l = m + 1;
      } else {
        r = m;
      }
    }
    return l;
  }
};

