class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double csum = 0;
        int n = nums.size();
        for(int i=0; i<k;i++){
            csum += nums[i];
        }
        double maxsum = csum;
        int i=0;
        int j = k;
        while( (i <= n-k)  && (j < n)){
            csum = csum - nums[i] + nums[j];
            maxsum = max(maxsum,csum);
            i++;
            j++;
        }
        return maxsum/k;
    }
};