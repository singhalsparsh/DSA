class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> consonants;
        unordered_map<char,int> vowel;

        for(char ch : s){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                vowel[ch]++;
            } else {
                consonants[ch]++;
            }
        }

        int max_consonants = 0;
        for(auto it : consonants){
            max_consonants = max(max_consonants, it.second);
        }

        int max_vowel = 0;
        for(auto it : vowel){
            max_vowel = max(max_vowel, it.second);  
        }

        return max_vowel + max_consonants;
    }
};