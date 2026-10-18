class Solution {
public:
    void f(vector<int>&nums, vector<vector<int>>&ans,int idx, int n){
       if(idx == nums.size()){
        ans.push_back(nums);
        return;
       }

       for(int i = idx; i<n; i++ ){
        swap(nums[i], nums[idx]);
        f(nums,ans,idx+1,n);
        swap(nums[i], nums[idx]);
       }


    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>ans;
        f(nums,ans,0,n);
        return ans;
    }
};