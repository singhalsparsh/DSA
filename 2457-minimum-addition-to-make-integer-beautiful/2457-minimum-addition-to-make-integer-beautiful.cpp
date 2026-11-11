class Solution {
public:

    long long calcsum(long long n){
        long long sum  = 0;
        while(n > 0){
            int dig = n % 10;
            sum += dig;
            n = n/10;
        }
        return sum;
    }
    long long makeIntegerBeautiful(long long n, int target) {
        long long res = 0;
        for(long long mul = 1; calcsum(n) > target; mul *= 10){
            res += mul * (10 - n % 10);
            n = n/10 + 1;
        }
        return res;
    }
};