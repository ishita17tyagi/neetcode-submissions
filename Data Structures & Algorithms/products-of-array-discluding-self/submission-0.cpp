class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;

        int prod = 1;
        int zeroCount = 0;

        // Calculate product of all non-zero elements
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                zeroCount++;
            } else {
                prod *= nums[i];
            }
        }

        for (int i = 0; i < nums.size(); i++) {

            if (zeroCount > 1) {
                ans.push_back(0);
            }

            else if (zeroCount == 1) {
                if (nums[i] == 0)
                    ans.push_back(prod);
                else
                    ans.push_back(0);
            }

            else { // zeroCount == 0
                ans.push_back(prod / nums[i]);
            }
        }

        return ans;
    }
};