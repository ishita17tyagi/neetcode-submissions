class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right=heights.size()-1;
        int maxi=0;
        while(left<right){
            int width=right-left;
            int maxHeight=min(heights[left],heights[right]);
            int area=width*maxHeight;
            maxi=max(maxi,area);
            if(heights[left]<heights[right]) left++;
            else right--;
        }
        return maxi;
    }
};
