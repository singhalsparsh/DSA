class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int undcount = 0;
        int Lcount = 0;
        int Rcount = 0;
        for(char ch: moves){
            if(ch == 'L') Lcount++;
            else if(ch == 'R') Rcount++;
            else undcount++;
        }
        return abs(Rcount - Lcount) + undcount;
    }
};