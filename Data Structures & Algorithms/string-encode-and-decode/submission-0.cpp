class Solution {
public:

    string encode(vector<string>& strs) {
        string encStr="";
        for(int i=0;i<strs.size();i++){
            encStr+=to_string(strs[i].size())+"#"+strs[i];
        }
        return encStr;
    }

    vector<string> decode(string s) {
        vector<string> decStr;
        string num="";
        int indexS,i,j;
        for(i=0;i<s.size();i++){
            if(isdigit(s[i]))
                num+=s[i];
            else if(s[i]=='#'){
                int n=stoi(num);
                string sChild="";
                for(j=1;j<=n;j++){
                    sChild+=s[i+j];
                }
                decStr.push_back(sChild);
                i=i+n;
                num="";
            }
            else    continue;
        }
        return decStr;
    }
};
