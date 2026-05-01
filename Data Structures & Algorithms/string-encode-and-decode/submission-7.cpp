class Solution {
public:

    string encode(vector<string>& strs) {
        string msg;
        for(const auto& s:strs) {
            msg+=to_string(s.size())+'@'+s;
        }       
        return msg; 
    }

    vector<string> decode(string s) {
        vector<string> rs;
        for(int i=0; i<s.size(); i++) {
            string numm;
            while(s[i]!='@') {
                numm+=s[i];
                i++;
            }
            i++;
            int numSize=stoi(numm);
            rs.push_back(s.substr(i, numSize));
            i+=numSize;
            i--;
        }
        return rs;
    }
};
