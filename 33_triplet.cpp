#include <iostream>
using namespace std;

bool find3num(int A[],int arr_size,int sum)
{
    for (int i = 0; i < arr_size -2; i++)
    {
        for (int j = i + 1; j < arr_size-1; j++)
        {
            for (int k = j + 1 ; k < arr_size ; k++)
            {
                if (A[i]+A[j]+A[k]==sum)
                {
                    cout<<"The triplet is "<<A[i]<<","<<A[j]<<","<<A[k];
                    return true;
                
                }
                
            }
            
        }
        
    }
    return false;
     
}


int main(){
    int A[]={3,5,1,7,9,};
    int sum = 13;
    int arr_size = sizeof(A) / sizeof(A[0]);
    find3num(A, arr_size, sum);

return 0;
}