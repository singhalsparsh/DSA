class Solution {
public:
    int f(int n){
        int sum = 0;
        while(n > 0){
            int dig = n %10;
            sum += dig*dig;
            n = n / 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow = n;
        int fast = n;
        while(fast != 1){
            slow = f(slow);
            fast = f(fast);
            fast = f(fast);
            if(slow == fast && slow != 1){
                return false;
            }
        }
        return true;
    }
};