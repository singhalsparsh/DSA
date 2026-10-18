class Solution {
public:
    bool halvesAreAlike(string s) {
       int n = s.length();
       string str1 = ""; 
       string str2 = ""; 
       int j = n/2;
       int i = 0;
       while ((i < n/2) && (j < n)){
        char ch1 = s[i];
        char ch2 = s[j];
        str1.push_back(ch1);
        str2.push_back(ch2);
        i++;
        j++;
       }

       int vcount1 = 0;
       int vcount2 = 0;
       for(int i=0; i<n/2; i++){
        if(tolower(str1[i]) == 'a' || tolower(str1[i]) == 'e' || tolower(str1[i]) == 'i' || tolower(str1[i]) == 'o' || tolower(str1[i]) == 'u'){
            vcount1++;
        }
       }
       for(int i=0; i<n/2; i++){
        if(tolower(str2[i]) == 'a' || tolower(str2[i]) == 'e' || tolower(str2[i]) == 'i' || tolower(str2[i]) == 'o' || tolower(str2[i]) == 'u'){
            vcount2++;
        }
       }

       return vcount1 == vcount2;
    }
};