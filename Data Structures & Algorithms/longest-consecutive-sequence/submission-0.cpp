class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxi=0;
        unordered_set<int> st(nums.begin(),nums.end());
        for (int num : st){
            if (st.find(num-1) == st.end()){
                int current = num;
                int cnt = 1;
                while (st.find(current + 1) != st.end()) {
                    current++;
                    cnt++;
                }
                maxi = max(maxi, cnt);
            }
        }
        return maxi;
    }
};
