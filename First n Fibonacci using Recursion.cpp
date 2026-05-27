#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// User function template for C++

class Solution {
  public:
    // Function to return list containing first n fibonacci numbers.
    int Solve(int n,vector<int> &dp)
    {
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return 1;
        }
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        dp[n]=Solve(n-1,dp)+Solve(n-2,dp);
        return dp[n];
    }
    vector<int> fibonacciNumbers(int n) {
        // code here
        vector<int> ans;
        vector<int> dp(n+1,-1);
        for(int i=0;i<n;i++)
        {
            ans.push_back(Solve(i,dp));
        }
        return ans;
    }
};