// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends

class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        // code here
        
        int minRow=0,minCol=0,maxRow=n-1,maxCol=m-1;
        vector<int> result;
        
        //top row
        
        for(int i=minCol;i<=maxCol;i++){
            result.push_back(matrix[minRow][i]);
        }
        minRow+=1;
        
        
        //right col
        
        for(int j=minRow;j<=maxRow;j++){
            result.push_back(matrix[j][maxCol]);
        }
        maxCol-=1;
        
        
        //bottom row
        
        for(int k=maxCol;k>=minCol;k--){
            result.push_back(matrix[maxRow][k]);
        }
        maxRow-=1;
        
        //left row
        
        for(int l=maxRow;l>=minRow;l--){
            result.push_back(matrix[l][minCol]);
        }
        
        minCol+=1;
        
        return result;
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(m, 0);
            for( int j=0; j<m; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.boundaryTraversal(matrix, n, m);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends