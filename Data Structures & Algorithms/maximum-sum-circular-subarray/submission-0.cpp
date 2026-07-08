class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int totalSum = 0;

        int currMax = nums[0];
        int bestMax = nums[0];

        int currMin = nums[0];
        int bestMin = nums[0];

        for (int i = 0; i < nums.size(); i++) {

            totalSum += nums[i];

            if (i > 0) {
                currMax = max(nums[i], currMax + nums[i]);
                bestMax = max(bestMax, currMax);

                currMin = min(nums[i], currMin + nums[i]);
                bestMin = min(bestMin, currMin);
            }
        }
        
        if (bestMax < 0)
            return bestMax;

        return max(bestMax, totalSum - bestMin);
    }
};