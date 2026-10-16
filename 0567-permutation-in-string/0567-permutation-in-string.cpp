class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m = s1.length();
        int n = s2.length();
        if (m > n)
            return false;

        unordered_map<char, int> mp1;

        for (char ch : s1) {
            mp1[ch]++;
        }

        int i = 0;
        int j = 0;
        unordered_map<char,int>mp2;
        while(j < n){
            mp2[s2[j]]++;
            if(j-i+1 == m){
                if(mp1 == mp2){
                    return true;
                }
                mp2[s2[i]]--;
                if(mp2[s2[i]] == 0){
                    mp2.erase(s2[i]);
                }
                i++;
            }
            j++;
        }
        return false;
    }
};