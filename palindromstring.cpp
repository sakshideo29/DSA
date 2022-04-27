//Problem Statement:-Given a string S, check if it is palindrome or not.

// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <string.h>
#include <stdbool.h>


 // } Driver Code Ends
//User function Template for C

int isPalindrome(char s[])
{
    
    int i=0;
    int j=strlen(s)-1;
    while(i<j)
    {
        if(s[i]==s[j])
        {
            i++;
            j--;
            continue;
        
        }
        else
        {
            return 0;
        }
   
    }
    return 1;
   
}
  


// { Driver Code Starts.

int main() 
{
   	int t;
   	scanf("%d", &t);
   	while(t--)
   	{
   		char s[100000];
   		scanf("%s", s);


   		printf("%d\n", isPalindrome(s));
   	}

    return 0;
}  // } Driver Code Ends