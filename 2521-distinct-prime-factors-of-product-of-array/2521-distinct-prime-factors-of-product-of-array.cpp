class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        set<int>st;
        for(int num: nums){
            for(int i=2; i*i<=num; i++){
                if(num%i == 0){
                    st.insert(i);
                    while(num%i == 0){
                    num = num/i;
                }
                }
                
            }
            if(num >= 2) st.insert(num);
        }
        return st.size();
    }
};