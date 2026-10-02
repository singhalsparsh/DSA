class Solution {
public:
    vector<string> ans;
    void f(int n, string curr) {

        //base case
        if(curr.size() == n){
            ans.push_back(curr);
            return;
        }

        //always add 1
        f(n,curr + '1');
        //if its the first char you can add one of the 0, or if the last (right most) is not 0, it has to be 1, or it will become 00.
        if(curr.empty() || curr.back() == '1'){
            f(n, curr + '0');
        }
    }
    vector<string> validStrings(int n) {
        f(n, "");
        return ans;
    }
};