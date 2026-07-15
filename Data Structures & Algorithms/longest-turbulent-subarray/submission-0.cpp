class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int curr=1;
        int maxi=1;
        int n=arr.size();
        if(n>=2){
            if(arr[0]==arr[1])  curr=1;
            else    curr=2;
            maxi=max(curr,maxi);
        }
        for(int i=2;i<n;i++){
            if(arr[i]==arr[i-1]){
                curr=1;
            }
            else if((arr[i-2]>arr[i-1] && arr[i-1]<arr[i]) || (arr[i-2]<arr[i-1] && arr[i-1]>arr[i])){
                curr++;
            }
            else{
                curr=2;
            }
            maxi=max(curr,maxi);
        }
        return maxi;
    }
};