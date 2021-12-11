#include <iostream>
#include <vector>

using namespace std;

// bool canReach(vector<int> &arr, int start)
// {
//     cout<<"Start -> "<<start<<"\n";
//     if (arr[start] == 0)
//     {
//         return true;
//     }

//     if (arr[start] + start < arr.size())
//     {

//         if (arr[arr[start] + start] != 0 && arr[arr[start] + start]==start)
//         {   
//             cout<<"Called 01\n";
//             return false;
//         }
//         else
//         {
//             return canReach(arr, arr[start] + start);
//         }
//     }
//     else if (abs(arr[start] - start) >= 0)
//     {
//         if (arr[abs(arr[start] - start)] != 0 &&  arr[abs(arr[start] - start)]==start)
//         {   
//             cout<<"Called 02\n";
//             return false;
//         }
//         else
//         {
//             return canReach(arr, abs(arr[start] - start));
//         }
//     }
//     else    
//     {   
//         cout<<"Called 03\n";
//         return false;
//     }
// }

bool canReach(vector<int> &arr, int start)
{
    if(start>=0 && start<arr.size() && arr[start]>=0){
        if(arr[start]==0){
            return true;
        }

        arr[start]=-arr[start];

        return canReach(arr,start+arr[start]) || canReach(arr,start-arr[start]);

    }
    else{
        return false;
    }
}
int main(void)
{   
    vector<int> data{3,0,2,1,2};//2
    // vector<int> data{4,2,3,0,3,1,2};//5
    // vector<int> data{4,2,3,0,3,1,2};//0


    cout<<canReach(data,2)<<"\n";

    return 0;
}