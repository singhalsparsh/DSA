class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = indices.size();
       string str(n, ' ');
       for(int i=0; i<n; i++){
        int idx = indices[i];
        char ch = s[i];
        str[idx] = ch;
       }
       return str;
    }
};