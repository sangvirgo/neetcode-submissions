class Solution {
public:
    bool isPalindrome(string s) {
        int i =0, j=s.size()-1;
        while(i<j) {
            while(!isalnum(s[i]) && i<j) {
                i++;
            }
            while(!isalnum(s[j]) && i<j) {
                j--;
            }
            if(i<j && tolower(s[i])!=tolower(s[j])) return 0;
            i++;
            j--;
        } 
        return 1;
    }
};