class Solution {
public:
    bool checkString(string s) {
        string str = s;
        sort(s.begin(), s.end());
        return str == s;
    }
};