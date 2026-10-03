class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        set<int> seenA;
        set<int> seenB;
        int count = 0;
        vector<int> ans;
        int n = A.size();
        for (int i = 0; i < n; i++) {
            if (seenA.count(B[i])) {
                count++;
            }

            if (seenB.count(A[i])) {
                count++;
            }

            if(A[i] == B[i]){
                count++;
            }
            seenA.insert(A[i]);
            seenB.insert(B[i]);

            ans.push_back(count);
        }
        return ans;
    }
};