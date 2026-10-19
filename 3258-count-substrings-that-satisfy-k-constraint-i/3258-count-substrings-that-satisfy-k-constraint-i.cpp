class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int n = s.length();
        int i = 0;
        int ans = 0;
        int zeros = 0;
        int ones = 0;
        for(int j = 0; j<n; j++){
            if(s[j] == '0'){
                zeros++;
            }else{
                ones++;
            }
            while(zeros > k && ones > k){
                if(s[i] == '0'){
                    zeros--;
                }
                else{
                    ones--;
                }
                i++;
            }
            ans += j - i + 1;
        }
        return ans;
    }
};