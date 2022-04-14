#include<iostream>
using namespace std;
//For finding minimum array
int minimum(int arr[],int n)
{
    
    int min=arr[0];
    for (int i=0; i < n; i++)
    {
        if (arr[i]<min)
        min=arr[i];
        
    }
    return min;
}
int maximum(int arr[],int n)
{
    int i;
    int max=arr[0];
    for (int i=0; i < n; i++)
    {
        if (arr[i]>max)
        max=arr[i];
        
    }
    return max;
}
int main()
{
    int arr[]={3,5,58,12,9};
    int n = 5;
    
    cout<<"Maximum number in the array is:"<<maximum(arr,n)<<endl;
    cout<<"Minimum number in the array is:"<<minimum(arr,n)<<endl;
    return 0;
}

