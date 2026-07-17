class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n<=2)    return n;
        int r=2,w=2;
        for(int i=2;i<n;i++){
            if(nums[r]!=nums[w-2]){
                nums[w]=nums[r];
                w++;
            }
            r++;
        }
        return w;
    }
};