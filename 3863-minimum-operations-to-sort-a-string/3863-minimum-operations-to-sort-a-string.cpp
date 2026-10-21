class Solution {
public:
    int minOperations(string s) {
        int n = s.length();
        bool flag = true;
        for (int i = 0; i < n; i++) {
            if (i > 0 && s[i] < s[i - 1]) {
                flag = false;
                break;
            }
        }
        if (flag)
            return 0;
        if (n == 2)
            return -1;
        char minchar = *min_element(s.begin(), s.end());
        char maxchar = *max_element(s.begin(), s.end());
        if (minchar == s[0] || maxchar == s[n - 1]) {
            return 1;
        }
        for (int i = 1; i < n - 1; i++) {
            if (s[i] == minchar || s[i] == maxchar) {
                return 2;
            }
        }
        return 3;
    }
};