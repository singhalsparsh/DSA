class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        vector<int>pre(n,0);
        vector<int>suff(n,0);
        pre[0] = nums[0]; //hard code to prevent pre[i-1] to break
        for(int i=1; i<n; i++){
            pre[i] = nums[i] + pre[i-1];
        }

        suff[n-1] = nums[n-1];
        for(int i=n-2 ; i>=0 ;i--){
            suff[i] = suff[i+1] + nums[i];
        }
        int cnt = 0;
        for(int i=0; i<n-1; i++){
            if(abs(pre[i] - suff[i+1]) % 2 == 0)cnt++;
        }
        return cnt;
    }
};