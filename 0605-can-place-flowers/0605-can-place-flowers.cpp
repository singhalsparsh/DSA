class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int m = flowerbed.size();
        if (n == 0) {
            return true;
        }
        for (int i = 0; i < m; i++) {
            if (flowerbed[i] == 0) {
                bool lefts = (i == 0) || (flowerbed[i - 1] == 0);
                bool rights =  (i == m - 1) || (flowerbed[i + 1] == 0);
                if (lefts && rights) {
                    flowerbed[i] = 1;
                    n--;
                    if (n == 0) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};