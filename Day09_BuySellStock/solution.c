/*
 * Problem: Best Time to Buy and Sell Stock (LeetCode 121)
 * Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 * Description: You are given an array prices where prices[i] is the price 
 * of a given stock on the ith day. Return the maximum profit you can achieve.
 */
int maxProfit(int* prices, int pricesSize) {
    if (pricesSize == 0) return 0;

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < pricesSize; i++) {
        // If we find a lower price, update our minimum
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } 
        // Otherwise, check if selling today yields a better profit
        else if (prices[i] - minPrice > maxProfit) {
            maxProfit = prices[i] - minPrice;
        }
    }

    return maxProfit;
}