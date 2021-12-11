#include <iostream>

using namespace std;

int firstOccurence(int *arr, int idx, int size, int query)
{

    if (idx == size)
    {
        return -1;
    }
    if (arr[idx] == query)
    {
        return idx;
    }
    else
    {
        return firstOccurence(arr, idx + 1, size, query);
    }
}

int lastOccurence(int *arr, int idx, int size, int query)
{
    if(idx==size){
        return -1;
    }

    int result = lastOccurence(arr,idx+1,size,query);

    if(result==-1){
        if(query==arr[idx]){
            return idx;
        }
        else{
            return -1;
        }
    }
    else{
        return result;
    }
}
int main(void)
{
    int arr[] = {10, 25, 30, 30, 16, 74, 52, 63, 52, 2, 6, 53};

    cout << "First Occurence Index : " << firstOccurence(arr, 0, sizeof(arr) / sizeof(arr[0]), 52) << "\n";
    cout << "Last Occurence Index : " << lastOccurence(arr, 0, sizeof(arr) / sizeof(arr[0]), 52) << "\n";

    return 0;
}