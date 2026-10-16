class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int i = 0;
        int j = 0;
        int n = s.length();
        int len = 0;
        int maxlen = 0;
        while(j < n) {
            while(st.contains(s[j])) {
                st.erase(s[i]);
                i++;
            }
            st.insert(s[j]);
            len = j - i + 1;
            maxlen = max(maxlen, len);
            j++;
        }
        return maxlen;
    }
};