//C++ Program to check Prime Number.



#include<bits/stdc++.h>
using namespace std;
int main()
{
    long a , flag=1;
    cout<<"Enter a Number : \n";
    cin>>a;
    
    if(a==0 || a==1)
    {
        flag=0;
    }
    
    for(int i=2; i<a/2; i++)
    {
        if(a % i == 0)
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
       cout<<a<<" is not Prime Number"<<endl;
       
    else
       cout<<a<<" is Prime Number";
       
       
   return 0; 
}
