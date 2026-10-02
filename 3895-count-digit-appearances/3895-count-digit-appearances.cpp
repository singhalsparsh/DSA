class Solution {
public:
    int f(int n, int target) {
        int cnt = 0;
        if (n < 10) {
            if (n == target) {
                cnt++;
                return cnt;

            } else {
                return cnt;
            }
        }
        while (n > 0) {
            int dig = n % 10;
            if (dig == target) {
                cnt++;
            }
            n = n / 10;
        }
        return cnt;
    }
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            count += f(nums[i], digit);
        }
        return count;
    }
};