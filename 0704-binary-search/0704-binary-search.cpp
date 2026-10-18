class Solution {
public:
int f(vector<int>& nums, int target, int low, int high){
    int mid = low + (high-low)/2;
    if(low > high) return -1;
    if(nums[mid] == target) return mid;
    else if(nums[mid] < target) return f(nums,target,mid+1,high);
    else return f(nums,target,low,mid-1);
}
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        return f(nums,target,0,n-1);
    }
};