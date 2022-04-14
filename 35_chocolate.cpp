#include <bits/stdc++.h>
using namespace std;

int findMinDiff(int arr[],int n,int m )//n=number of packets,m=chosen number of packets
{
    if(n==0 || m==0)
    
        return 0;
    sort(arr,arr +n);
    
    if(n<m) 
        return -1;
    
 int min_diff = INT_MAX;
 // Find the subarray of size m such that
    // difference between last (maximum in case
    // of sorted) and first (minimum in case of
    // sorted) elements of subarray is minimum.
 
 for (int i = 0;  i+m-1<n; i++)
 {
     int diff = arr[i+m-1]-arr[i];
     if (min_diff>diff)
     {
         min_diff = diff;
     }
     return min_diff;
     

 }
 
}
int main()
{
    int arr[]={7,2,3,4,9,12,56};
    int m = 3; // Number of students
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum difference is "
         << findMinDiff(arr, n, m);


return 0;
}