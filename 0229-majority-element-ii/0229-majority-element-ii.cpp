class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        if(nums.size() == 1) return {nums[0]};
        int n = nums.size();
        int count = n/3;
        unordered_map<int,int>freq;
        for(int x:nums){
            freq[x]++;
        }
        for(auto it: freq){
            if(it.second > n/3){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};