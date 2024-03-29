class Solution
{
public:
    int getAns(vector<int> &prices, int n, int ind, int buy, int cap, vector<vector<vector<int>>> &dp)
    {
        if (ind == n || cap == 0)
            return 0; // base case
        if (dp[ind][buy][cap] != -1)
            return dp[ind][buy][cap];
        int profit;
        if (buy == 0)
        { // We can buy the stock
            profit = max(0 + getAns(prices, n, ind + 1, 0, cap, dp), -prices[ind] + getAns(prices, n, ind + 1, 1, cap, dp));
        }
        if (buy == 1)
        { // We can sell the stock
            profit = max(0 + getAns(prices, n, ind + 1, 1, cap, dp), prices[ind] + getAns(prices, n, ind + 1, 0, cap - 1, dp));
        }
        return dp[ind][buy][cap] = profit;
    }
    int maxProfit(int k, vector<int> &prices)
    {
        int n = prices.size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(k + 1, -1)));
        return getAns(prices, n, 0, 0, k, dp);
    }
};

/*
Intuition:
Every day, we will have two choices, either to do nothing and move to the next day or to buy/sell (based on the last transaction and the number of transactions left) and find out the profit. Therefore we need to generate all the choices in order to compare the profit. As we need to try out all the possible choices, we will use recursion and then further optimize it using Dp because of overlapping sub-problems.
Recursive Solution:
Approach:(Recursion)
Step 1:

Express the problem in terms of indexes.
We need to think in the terms of the number of days, therefore one variable will be the array index( say ind).
Next, we need to keep in mind the condition that we can’t buy a stock again, that is we need to first sell a stock, and then we can buy that again. Therefore we need a second variable ‘buy’ which tells us on a particular day whether we can buy or sell the stock.
And Lastly, we have a cap on the number of transactions that we can make.
Here the initial cap is K.We need to always keep in mind this constraint.
So the function is something like - f(ind,buy,cap)
Step 2:
We need to try out all possible choices at a given index.
Every day we have two choices either to buy/sell(keeping in mind the cap) or do nothing and move to the next day.
When buy==0, we can buy a stock.
Now if we have the choice to buy that means again we have two choices either we buy the stock i.e {-prices[i] + f(ind+1,1, cap)} or we do nothing and move to the next day i,e {0+f(ind+1,0, cap)}
When buy==1, we can sell a stock.
Now if we have the choice to sell that means again we have two choices eitherwe sell the stock i.e {prices[i] + f(ind+1,0, cap)} or we do nothing and move to the next day i,e {0+f(ind+1,1, cap)}
Step 3:
As we are looking to maximize the profit earned, we will return the maximum value in both cases.
*/