class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        vector<bool>ispresent(n+1,false);
        for(int i=0; i<n; i++){
            if(nums[i] > 0 && nums[i] <=n)
             ispresent[nums[i]] = true;
        }

        for(int i=1; i<ispresent.size(); i++){
            if(!ispresent[i]){
                return i;
            }
        }
        return ispresent.size();
    }
};