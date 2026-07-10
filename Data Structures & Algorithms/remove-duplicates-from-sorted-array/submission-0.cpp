class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int w=0,r=1;
        while(r < nums.size()){
            if(nums[r]!=nums[w]){
                nums[w+1]=nums[r];
                w++;
            }
            else{
                r++;
            }
        }
        return w+1;
    }
};