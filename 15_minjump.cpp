#include <iostream>
using namespace std;
int minjump(int a[],int n)
{
    int maxR=a[0];//showing number of steps 
    int steps=a[0];
    int jump=1;//output 
    if (n==1)//array is of one element
    {
        return 0;
    }
    else if(a[0]==0)//If array at ith position is zero it means number of steps are zero
    {
        return -1;
    }
    else
    {
        for (int i = 1; i <n; i++)
        {
            if (i==n-1)//ith array is at last positions
            {
              return jump;  
            }
            maxR=max(maxR,i+a[i]);
            steps--;
            if (steps==0)
            {
                jump++;
                if (i>=maxR)
                {
                    return -1;
                }
                steps=maxR-i;
            }   
            
        }
        
    }
    return -1;
}

int main(){
    int a[]={1,3,5,8,9,2,6,7,6,7,6,8,9};
    int n=13;
    cout<<"No. of jumps: "<<minjump(a,n);
    
    

return 0;
}