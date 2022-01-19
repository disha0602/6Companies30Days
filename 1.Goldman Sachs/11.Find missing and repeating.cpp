// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        sort(arr,arr+n);
        int *ans = new int[2];
        ans[0]=0;
        ans[1]=0;
        int i,idx=0;
        for(i=1;i<n;i++)
        {
            if(arr[i]==arr[i-1])
            {
                ans[0]=arr[i];
                arr[i]=0;
            }
        }
        i=1;
        while(i<=n && idx<n)
        {
            if(arr[idx]==0)
            {
                idx++;
                
            }
            else if(i!= arr[idx])
            {
                ans[1]=i;
                break;
            }
            else
            {
                idx++;
                i++;
                
            }
            
        }
        if(ans[1] == 0)
              ans[1]=i;
            return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends
