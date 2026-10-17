class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
         vector<int>prefixarr(n,0);
         vector<int>suffixarr(n,0);
         for(int i=1; i<n; i++){
            prefixarr[i] = prefixarr[i-1] + nums[i-1];
         }

         for(int i = n-2; i>=0; i--){
            suffixarr[i] = suffixarr[i+1] + nums[i+1];
         }
        for(int i=0; i<n; i++){
            if(suffixarr[i] == prefixarr[i]){
                return i;
            }
        }
        return -1;
    }
};