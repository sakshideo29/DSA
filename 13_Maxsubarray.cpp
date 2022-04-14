//Subarray-It is a part of main array.Main array itself can be subarray
//Brutforce Aproach

#include <iostream>
using namespace std;

int subarray(int arr[],int n)
{
    int max = INT_MIN;//INT_MIN specifies that an integer variable cannot store any value below this limit.
    int sum=0;
    for (int  i = 0; i<n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum= sum+arr[j];
            if ( max<sum)
            {
             max= sum;
            }
        
        }
    }
  return max; 
}
int main(){
    int arr[]={-5,4,6,-3,7,-1};
    int n=6;
    cout<<"Max sum:"<<subarray(arr,n);//Calling the function


return 0;
}
//Time complexity is O(n^2) To reduce this we are using Kadane's Algorithm

//Kadane's Algorithm
/*
int subarray(int arr[],int n)
{
    int max_so_far=INT_MIN;
    int max_ending_here=0;
    for (int i = 0; i < n; i++)
    {
        max_ending_here = max_ending_here + arr[i];
        if (max_so_far<max_ending_here)
        {
            max_so_far=max_ending_here;
        }
        if (max_ending_here<0)
        {
            max_ending_here=0;
        }
    }
    return max_so_far;
}
int main(){
    int arr[]={-5,4,6,-3,7,-1};
    int n=6;
    cout<<"Max sum:"<<subarray(arr,n);//Calling the function
return 0;
}
*/

//If all numbers are negative
/*
#include<iostream>
using namespace std;

int maxSubArraySum(int a[], int size)
{
int max_so_far = a[0];
int curr_max = a[0];

for (int i = 1; i < size; i++)
{
		curr_max = max(a[i], curr_max+a[i]);
		max_so_far = max(max_so_far, curr_max);
}
return max_so_far;
}


int main()
{
int a[] = {-5,4,6,-3,7,-1};
int n = sizeof(a)/sizeof(a[0]);
int max_sum = maxSubArraySum(a, n);
cout << "Maximum contiguous sum is " << max_sum;
return 0;
}
*/
