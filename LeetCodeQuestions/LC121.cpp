/**
 * Buy and sell stock problem:
 * 
 * You are given an array prices where prices[i] is the price of a given stock on the ith day.
 * You want to maximize your profit by choosing a single day to buy one stock and choosing a 
 * different day in the future to sell that stock.
 * Buy must be before Sell
 * Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
 * 
 * Soln: Imagine everyday as selling day
 * Compare previous days to calc minimum buy and the maximum profit
 * 
 * from current index compare all previous days and find the minimum price day
 */

#include <iostream>
#include <vector> // or #include <bits/c++.h>, not advised, to prevent namespace conflicts

using namespace std;

int main()
{
    vector <int> prices= {7,1,5,3,6,4};

    int maxprofit =0, bestBuy=prices[0];

        for(int i=1; i<prices.size(); i++)
        {
            if(prices[i] > bestBuy)
                maxprofit = max(maxprofit, prices[i]- bestBuy);
            bestBuy =min (bestBuy, prices[i]);
        }
    cout << maxprofit << endl;
    return 0;
}


