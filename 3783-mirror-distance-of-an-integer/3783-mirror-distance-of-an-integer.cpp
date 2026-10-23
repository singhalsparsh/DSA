class Solution {
public:
     
    int mirrorDistance(int n) {
        int copy = n;
        int sum = 0;
        while(copy > 0){
            int dig = copy % 10;
            sum = (sum*10) + dig;
            copy = copy / 10;
        }
        return abs(n - sum);
    }
};