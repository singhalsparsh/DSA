class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
       int cnt = 1;
       int ans = 0;
       for(int i=0; i<sentences.size(); i++){
        for(int j=0; j<sentences[i].length();j++){
            if(sentences[i][j] == ' '){
                cnt++;
            }
        }
        ans = max(ans,cnt);
        cnt = 1;
       } 
       return ans;
    }
};