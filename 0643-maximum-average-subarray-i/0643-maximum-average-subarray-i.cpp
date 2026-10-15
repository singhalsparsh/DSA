class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        int n = nums.size();
        double sum = 0;
        double avg = INT_MIN;
        double max_avg = avg;
        while(j < n){
            sum += nums[j];
            if(j-i+1 == k){
                avg = sum/k;
                max_avg = max(max_avg,avg);
                sum = sum - nums[i];
                i++;
            }
            j++;
        }
        return max_avg;
    }
};