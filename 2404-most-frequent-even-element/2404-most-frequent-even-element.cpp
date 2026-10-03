class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n = nums.size();
        vector<int> even_num;

        // store even numbers in a new array
        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 0) {
                even_num.push_back(nums[i]);
            }
        }

        // store the frequency of each even digit.
        unordered_map<int, int> freq;
        for (int x : even_num) {
            freq[x]++;
        }

        int maxfreq = 0; // to store the max frequency of the even num
        int ans = -1;    // to return -1 if there are no even number present
        for (auto it : freq) {
            if (it.second > maxfreq) { // if the frequency is greater then the
                                       // current maxfreq update it
                maxfreq = it.second; // store the freq
                ans = it.first;      // store the val
            } else if (it.second ==
                       maxfreq) { // if we found another num with same freq we
                                  // store the minimum num of them
                ans = min(ans, it.first);
            }
        }

        return ans;
    }
};