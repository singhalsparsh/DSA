class Solution {
public:
    void f(vector<int>& nums,vector<vector<int>>& ans,int i,vector<int>curr,int n){
        if(i==n){
            ans.push_back(curr);
            return;
        }
        curr.push_back(nums[i]);
        f(nums,ans,i+1,curr,n);
        curr.pop_back();
        f(nums,ans,i+1,curr,n);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>curr;
        int n = nums.size();
        f(nums,ans,0,curr,n);
        return ans;
    }
};