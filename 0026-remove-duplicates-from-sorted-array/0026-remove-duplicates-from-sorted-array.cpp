class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0; //pointing to the first unique
        int j = 1; //will find next unique 
        int n = nums.size();
        int index = 0;
        while(j < n){
            if(nums[i] != nums[j]){
                i++;
                nums[i] = nums[j];
            }
            j++;
        }

        return i +1;
    }
};
