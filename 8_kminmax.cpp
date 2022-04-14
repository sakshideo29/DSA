#include <algorithm>
#include<iostream>
using namespace std;
int kthsmallest(int arr[],int n,int k)
{
    sort(arr,arr+n);
    return arr[k - 1];
}


int main()
{
    int arr[]={3,5,39,6,24};
    int n = sizeof(arr) / sizeof(arr[0]),k=3;
    cout<<"kth smallest element :"<<kthsmallest(arr,n,k);
    return 0;
    
}
