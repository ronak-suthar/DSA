// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends


//User function Template for C++

/*  Function to find the first position with different bits
*   This function returns the position with different bit
*/
int posOfRightMostDiffBit(int m, int n)
{
    
    // Your code here
    int pos=1;

    int exor= (m ^ n);
	
    while(exor>0){
	    if((exor & 1) == 1){
		    break;
	    }
	    else{
		    exor >>= 1;
		    pos++;
	    }

    }

    return pos;
    
    
}

// { Driver Code Starts.

// Driver Code
int main()
{   
    int t;
    cin>>t; //input number of testcases
    while(t--)
    {
         int m,n;
         cin>>m>>n; //input m and n
         cout << posOfRightMostDiffBit(m, n)<<endl;
    }
    return 0;     
}   // } Driver Code Ends
