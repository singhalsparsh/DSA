class Solution {
public:
    bool isDivisible(int n, int dig){
        if(dig%n == 0){
            return true;
        }
        return false;
    }
    int countDigits(int num) {
        int count = 0;
        int copy = num;

        while(num > 0){
            int dig = num % 10;
            if(isDivisible(dig,copy)){
                count++;
            }
            num = num/10;
        }
        return count;
    }
};