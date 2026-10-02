class Solution {
public:
    bool desc(vector<int> nums) {
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) {
                return false;
            }
        }
        return true;
    }

    bool asc(vector<int> nums) {
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < nums[i - 1]) {
                return false;
            }
        }
        return true;
    }
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        bool ans;
        if (nums[0] >= nums[n - 1]) {
            ans = desc(nums);
        } else {
            ans = asc(nums);
        }
        return ans;
    }
};