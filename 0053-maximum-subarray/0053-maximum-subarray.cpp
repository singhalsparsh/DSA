class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int curr_sum = 0;
        int maxsum = INT_MIN;
        for(int i=0; i<n; i++){
            curr_sum += nums[i];
            maxsum = max(maxsum, curr_sum);
            if(curr_sum < 0){
                curr_sum = 0;
            }
        }
        return maxsum;
    }
};