class Solution {
public:
    vector<int> buildLPS(vector<int>& pattern) {
        int n = pattern.size();
        vector<int> lps(n, 0);
        int len = 0;
        int i = 1;
        while (i < n) {
            if (pattern[i] == pattern[len]) {
                len++;
                lps[i] = len;
                i++;
            } 
            else {
                if (len != 0) {
                    len = lps[len - 1];
                } 
                else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
        return lps;
    }

    bool KMP(vector<int>& pattern, vector<int>& text) {
        vector<int> lps = buildLPS(pattern);
        int i = 0, j = 0;
        while (i < text.size()) {
            if (pattern[j] == text[i]) {
                i++;
                j++;
            }
            if (j == pattern.size()) {
                return true;
            } 
            else if (i < text.size() && pattern[j] != text[i]) {
                if (j != 0) {
                    j = lps[j - 1];
                } 
                else {
                    i++;
                }
            }
        }
        return false;
    }

    bool isRotateable(vector<int>& vector1, vector<int>& vector2) {
        vector<int> newVec = vector1;

        newVec.insert(
            newVec.end(),
            vector1.begin(),
            vector1.end()
        );

        return KMP(vector2, newVec);
    }

    int sortableIntegers(vector<int>& nums) {
        int n = nums.size();
        vector<int> sortedvec = nums;
        sort(sortedvec.begin(), sortedvec.end());
        int ans = 0;
        for (int k = 1; k <= n; k++) {
            if (n % k != 0) continue;
            bool flag = true;

            for (int j = 0; j < n; j += k) {
                vector<int> vector1(
                    nums.begin() + j,
                    nums.begin() + j + k
                );
                vector<int> vector2(
                    sortedvec.begin() + j,
                    sortedvec.begin() + j + k
                );

                if (!isRotateable(vector1, vector2)) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                ans += k;
            }
        }
        return ans;
    }
};