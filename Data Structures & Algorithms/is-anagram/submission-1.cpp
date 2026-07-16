class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char,int> cnt;
        for (int i=0;i<s.size();i++){
            cnt[s[i]]++;
        }
        for (int i=0;i<t.size();i++){
            if(cnt.find(t[i]) == cnt.end() || cnt[t[i]] == 0){
                return false;
            }
            else {
                cnt[t[i]]--;
                continue;
            }
        }
        return true;
    }
};
