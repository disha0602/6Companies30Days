// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maxProfit(int K, int N, int prices[]) {
        int i, j;

        //O(n^3) code

        int dp[K + 1][N];
        //Initialisation
        for (i = 0; i < N ; i++)
        {
            dp[0][i] = 0;
        }
        for (i = 0; i <= K ; i++)
        {
            dp[i][0] = 0;
        }

        //code
        for (int trans = 1; trans <= K ; trans++)
        {
            int max = INT_MIN;
            for (int days = 1; days < N ; days++)
            {
                if (dp[trans - 1][days - 1] - prices[days - 1] > max)
                {
                    max = dp[trans - 1][days - 1] - prices[days - 1];
                }

                if (max + prices[days] > dp[trans][days - 1])
                {
                    dp[trans][days] = max + prices[days];
                }
                else
                {
                    dp[trans][days] = dp[trans][days - 1];
                }
            }
        }

        return dp[K][N - 1];
    
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) cin >> A[i];

        Solution ob;
        cout << ob.maxProfit(K, N, A) << endl;
    }
    return 0;
}  // } Driver Code Ends
