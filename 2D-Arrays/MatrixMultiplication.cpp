#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> matrixProduct(vector<vector<int>> arrA,vector<vector<int>> arrB){
    int rowA = arrA.size(),colA=arrA[0].size();
    int rowB = arrB.size(),colB=arrB[0].size();


    if(rowA!=colB){
        return {{}};
    }

    vector<vector<int>> result(rowA,vector<int>(colB));

    for(int i=0;i<rowA;i++){
        for(int j=0;j<colB;j++){

            //result[i][j]=0;

            for(int k=0;k<colA;k++){
                result[i][j] += arrA[i][k]*arrB[k][j];
            }

        }
    }

    return result;

}
int main(void){
    
    int row,col;

    cin>>row>>col;

    vector<vector<int>> arr1(row,vector<int>(col));

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr1[i][j];
        }
    }

    cin>>row>>col;

    vector<vector<int>> arr2(row,vector<int>(col));

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr2[i][j];
        }
    }

    vector<vector<int>> product = matrixProduct(arr1,arr2);

    cout<<"The Product of Matrices is : \n";

    for(int i=0;i<product.size();i++){
        for(int j=0;j<product[i].size();j++){
            cout<<product[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;   
}