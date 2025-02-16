class Solution {
public:
    int candy(vector<int>& ratings) {
       //write the code here..
        int n = ratings.size();
        vector<int> candies(n, 1);

        // Traverse from left to right
        for (int i = 1; i < n; ++i) {
            if (ratings[i] > ratings[i - 1]) {
                candies[i] = candies[i - 1] + 1;
            }
        }

        // Traverse from right to left
        for (int i = n - 2; i >= 0; --i) {
            if (ratings[i] > ratings[i + 1]) {
                candies[i] = max(candies[i], candies[i + 1] + 1);
            }
        }

        // Sum up the candies
        int totalCandies = 0;
        for (int i = 0; i < n; ++i) {
            totalCandies += candies[i];
        }

        return totalCandies;
    }
};