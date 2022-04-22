#include <iostream>
using namespace std;
//find duplicate numbers given in the string
int main()
{
    char s[]={"2355688"};
    int count;
    int i=0;
   for(i=0;i<=8;i++)
   {
       count=1;
       for (int j = i+1; j <=8; j++)
       {
           if (s[i]==s[j])
           {
               count=count+1;
            
           }
           else
           {
               count==1;
           }
              
       }
       if (count>1)
       {
           cout<<s[i]<<endl;
       }
     
   }
  
   
    return 0;
}