// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    
	    vector< long long int>  v(n + 1);
	    
	    long long int two=0,three=0,five=0;
	    v[0]=1;
	    for(int i=1;i<=n;i++)
	    {
	        v[i]=min({2*v[two],3*v[three],5*v[five]});
	        
	        if(v[i]==2*v[two]){
	            two++;
	        }
	        if(v[i]==3*v[three]){
	            three++;
	        }
	        if(v[i]==5*v[five]){
	            five++;
	        }
	        
	    }
	    return v[n-1];
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
