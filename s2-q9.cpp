// 9)You are given an array of prices where prices[i] is the price of a given stock on an ith day. You
// want to maximize your profit by choosing a single day to buy one stock and choosing a
// different day in the future to sell that stock. Return the maximum profit you can achieve from
// this transaction. If you cannot achieve any profit, return 0
// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5

#include <iostream>
using namespace std;

int maxProfit(int prices[], int n) {
    if (n == 0) return 0; 
    int minPrice = prices[0];  
    int maxProfit = 0;         

    
    for (int i = 1; i < n; i++) {
        
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }

        
        int profit = prices[i] - minPrice;

        
        if (profit > maxProfit) {
            maxProfit = profit;
        }
    }

    return maxProfit;
}

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(prices[0]);

    int result = maxProfit(prices, n);
    cout << "Maximum profit: " << result << endl;

    return 0;
}
