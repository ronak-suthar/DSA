// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

/*  Function to calculate the largest consecutive ones
*   x: given input to calculate the largest consecutive ones
*/
int maxConsecutiveOnes(int n)
{
 
    // Your code here
    int count=0;

    while(n>0){
	    n = (n & (n<<1));
	    count++;
    }

    return count;
    
    
}



// { Driver Code Starts.

// Driver Code
int main() {
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n;
		cin>>n;//input n
		
		//calling maxConsecutiveOnes() function
		cout<<maxConsecutiveOnes(n)<<endl;
	}
	return 0;
}  // } Driver Code Ends
