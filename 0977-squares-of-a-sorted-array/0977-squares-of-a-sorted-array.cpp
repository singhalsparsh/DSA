class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i = 0;
        int j = nums.size() - 1;
        int k = j;
        vector<int>ans(nums.size());
        while(i <= j){
            if(nums[j] * nums[j] > nums[i] * nums[i]){
                ans[k] = nums[j] * nums[j];
                k--;
                j--;
            }
            else{
                ans[k] = nums[i] * nums[i];
                i++;
                k--;
            }
        }
        return ans;
    }
};