class Solution {
public:
    int sumofarray(vector<int> nums) {
        int sum = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }
        return sum;
    }
    int sumofdigs(int n) {
        if (n < 10) {
            return n;
        }
        int sum = 0;
        while (n > 0) {
            int dig = n % 10;
            sum += dig;
            n = n / 10;
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) {
        int sum_array = sumofarray(nums);
        int sum_of_digs = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            sum_of_digs += sumofdigs(nums[i]);
        }

        return abs(sum_array - sum_of_digs); //returns the ans
    }
};