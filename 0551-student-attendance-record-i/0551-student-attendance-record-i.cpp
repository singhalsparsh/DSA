class Solution {
public:
    bool checkRecord(string s) {
        int a_count = 0;
        int latecount = 0;

        for (char ch : s) {
            if (ch == 'A') {
                a_count++;
            }

            if (ch == 'L') {
                latecount++;
            } else {
                latecount = 0;
            }

            if (a_count >= 2 || latecount >= 3) {
                return false;
            }
        }

        return true;
    }
};