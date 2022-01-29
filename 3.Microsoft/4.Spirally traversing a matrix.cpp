#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c)
    {
        // code here
        vector<int> ans;
        int i, j, k;

        int top = 0;
        int bottom = r - 1;
        int right = c - 1;
        int left = 0;

        int count = 0;

        while (top <= bottom && left <= right)
        {
            if (count == 0)
            {
                for (i = left; i <= right; i++)
                {
                    ans.push_back(matrix[top][i]);
                }
                top++;
                count = 1;
            }
            else if (count == 1)
            {
                for (i = top; i <= bottom; i++)
                {
                    ans.push_back(matrix[i][right]);
                }
                right--;
                count = 2;
            }
            else if (count == 2)
            {
                for (i = right; i >= left; i--)
                {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
                count = 3;
            }
            else if (count == 3)
            {
                for (i = bottom; i >= top; i--)
                {
                    ans.push_back(matrix[i][left]);
                }
                left++;
                count = 0;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int r, c;
        cin >> r >> c;
        vector<vector<int> > matrix(r);

        for (int i = 0; i < r; i++)
        {
            matrix[i].assign(c, 0);
            for ( int j = 0; j < c; j++)
            {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
