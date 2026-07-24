class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum=0,leftSum=0,rightSum=0;
        for(int i=0;i<nums.size();i++){
            totalSum+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            rightSum=totalSum-leftSum-nums[i];
            if(leftSum==rightSum)   return i;
            leftSum+=nums[i];
            rightSum=0;
        }
        return -1;
    }
};