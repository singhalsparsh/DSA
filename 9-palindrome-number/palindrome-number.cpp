class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        long long copy = x;
        long long sum = 0;
        while(x > 0 ){
            int dig = x%10;
            sum = (sum*10) + dig;
            x = x/10;
        }

        return sum==copy;
    }
};