class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minS=INT_MAX,r=0,l=0,sum=0;
        for(r=0;r<nums.size();r++){
            sum+=nums[r];
            while(sum>=target){
                minS=min(r-l+1,minS);
                sum-=nums[l];
                l++;
            }
        }
        return (minS==INT_MAX)? 0 : minS;
    }
};