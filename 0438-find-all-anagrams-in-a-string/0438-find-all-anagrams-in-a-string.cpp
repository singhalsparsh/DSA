class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        int i = 0;
        int j = 0;
        int m = (int)s.size();
        int n = (int)p.size();
        if(n > m) return {};
        for(char ch: p){
            mp1[ch]++;
        }
        vector<int>ans;
        while(j < m){
            mp2[s[j]]++;
            if(j-i+1 == n){
                if(mp1 == mp2){
                    ans.push_back(i);
                }

                mp2[s[i]]--;
                if(mp2[s[i]] == 0){
                    mp2.erase(s[i]);
                }
                i++;
            }
            j++;
        }
        return ans;
    }
};