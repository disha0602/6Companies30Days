// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  //Your code here 
  string encodedstr="";
  int i=0;
  int count=1;
  while(src[i] != '\0')
  {
      if(src[i]==src[i+1])
      count++;
      else
      {
          encodedstr=encodedstr+src[i]+to_string(count);
          count=1;
          
      }
      i++;
  }
  return encodedstr;
}     
 

