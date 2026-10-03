class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<bool> allowedChar(26, false);
        int count = 0;
        for (char ch : allowed) {
            allowedChar[ch - 'a'] = true;
        }

        for (string word : words) {
            bool ok = true;
            for (char ch : word) {
                if (!allowedChar[ch - 'a']) {
                    ok = false;
                    break;
                }
            }
            if (ok)
                count++;
        }
        return count;
    }
};