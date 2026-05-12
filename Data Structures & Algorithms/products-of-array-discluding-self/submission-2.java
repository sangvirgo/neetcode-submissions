class Solution {
    public int[] productExceptSelf(int[] nums) {
        boolean hasZero=false, hasTwoZero=false;
        int res=1;
        for(int n: nums) {
            if(n==0) {
                if(hasZero) {
                    hasTwoZero = true;
                }
                hasZero=true;
            } else {
                res*=n;
            }
        }
        int[] rs = new int[nums.length];
        int i=0;
        for(int n:nums) {
            if(hasTwoZero || (hasZero && n!=0) ) {
                rs[i++]=0;
            } else if(!hasZero && n!=0) {
                rs[i++] = res/n;
            } else {
                rs[i++] = res;
            }
        }
        return rs;
    }
}