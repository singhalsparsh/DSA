class Solution {
public:
    bool isODD(int n){
        if(n%2 == 0){
            return false;
        }
        return true;
    }
    int countOdds(int low, int high) {
        int cnt = 0;
        for(int i=low; i<=high; i++){
            if(isODD(i))cnt++;
        }
        return cnt;
    }
};