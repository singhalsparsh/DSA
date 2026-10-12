class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total = numBottles;
        int empty = numBottles;

        while (empty >= numExchange) {
            int bot = empty / numExchange;
            int rem = empty % numExchange;
            total += bot;
            empty = rem + bot;
        }

        return total;
    }
};
