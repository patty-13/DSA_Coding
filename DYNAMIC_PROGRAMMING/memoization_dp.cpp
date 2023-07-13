/**
 * IN SIMPLE WORDS, IT IS AN OPTIMIZATION OVER PLAIN RECURSION.
 * TWO WAYS WE CAN IMPLEMENT THE DYNAMIC PROGRAMMING
 * 1. MEMOIZATION
 * 2. TABULATION
 * APPLICATIONS
 * 1. BELLMEN FORD ALGORITHM
 * 2. FLOYD WARSHALL ALGORITHM
 * 3. DIFF UTILITY (VERSION CONTROL SYSTEM) (LONGEST COMMON SUBSEQUENCE)
 * 4. SEARCH CLOSET WORDS (EDIT DISTANCE)
 * 5. RESOURCE ALLOCATION (0 - 1 KNAPSACK)
*/
# include "bits/stdc++.h"
using namespace std;
class predict_answer
{
  public:
  
  int fib(int n, vector<int> &dp)
  {
    if(dp[n] != -1)
    {
    if( n == 0 || n == 1)
    {
      return n;
    }
    else
    {
      int res = fib(n-1, dp) + fib(n-2, dp);
      dp[n] = res;
    }
    }
  }
};
int main()
{
  predict_answer r;
  //using memoization
  int n;
  cin>>n;
  vector<int> dp(n + 1, -1);
  r.fib(n,dp);
}