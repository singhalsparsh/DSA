class Solution {
public:
    bool isUnique(int num){
        if(num <= 10) return true;
        bool seen[10] = {false};
        int original = num;
        int digitCount = 0;
        while(num > 0){
            int dig = num%10;
            if(seen[dig]) return false;
            seen[dig] = true;
            num = num/10;
        }
        return true;
    }
    int countNumbersWithUniqueDigits(int n) {
        int limit = 1;
        for(int i = 0; i < n; i++) {
            limit *= 10;
        }
        int count = 0;
        for(int i=0; i<limit; i++){
            if(isUnique(i)) count++;
        }
        return count;
    }
};