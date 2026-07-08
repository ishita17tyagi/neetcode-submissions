class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxS=nums[0];
        int currS=0;
        for(int i=0;i<nums.size();i++){
            currS=max(currS,0);
            currS+=nums[i];
            maxS=max(currS,maxS);
        }
        return maxS;
    }
};
