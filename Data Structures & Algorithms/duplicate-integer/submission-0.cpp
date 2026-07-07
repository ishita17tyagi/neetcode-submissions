class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> arr;
        int i;
        for (i=0;i<nums.size();i++){
            if(arr.find(nums[i]) != arr.end()){
                return true;
            }
            else{
                arr[nums[i]]=nums[i];
                arr[nums[i]]++;
            }
        }
        return false;
    }
};