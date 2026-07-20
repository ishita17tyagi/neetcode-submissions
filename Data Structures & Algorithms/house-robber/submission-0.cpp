class Solution {
public:
    int maxRob(int i, vector<int>& nums, vector<int>& dp){
        if(i<0) return 0;
        if(i==0)    return nums[0];
        if(i==1)    return max(nums[0],nums[1]);
        if(dp[i]==-1)
            dp[i]=max((nums[i]+maxRob(i-2,nums,dp)),maxRob(i-1,nums,dp));
        return dp[i];
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return maxRob(nums.size()-1,nums,dp);
    }
};
