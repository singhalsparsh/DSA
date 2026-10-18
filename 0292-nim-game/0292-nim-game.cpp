class Solution {
public:
    bool canWinNim(int n) {
       if(n%4 == 0){
        return false;
       } 
       return true;

    //    explaination:
    //     n = 1 - win
    //     n = 2 - win 
    //     n = 3 - win 
    //     n = 4 - lost
    //     n = 5 - win
    //     n = 6 - win
    //     n = 7 - win
    //     n = 8 - lost 
    //     whenever the n is a multiple of 4 we are loosing
    }
};