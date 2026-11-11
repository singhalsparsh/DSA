class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>temp;
        int n = nums.size();
        temp = nums;
        for(int i = 0;i < n; i++){
            temp[(i+k)%n] = nums[i];
        }
        nums = temp;
    }
};