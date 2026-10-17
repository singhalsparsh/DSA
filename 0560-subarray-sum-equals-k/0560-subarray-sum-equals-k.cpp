class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>f;
        f[0] = 1;
        int n = nums.size();
        int sum = 0;
        int result = 0;
        for(int i=0; i<n; i++){
            sum += nums[i];
            int prev = sum - k;
            result += f[prev]; 
            f[sum]++;
        }
        return result;
    }
};