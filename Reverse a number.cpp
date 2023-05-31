//C++ Program To Reverse a given Number.



#include<bits/stdc++.h>
using namespace std;
int main()
{
   int number , reversed_number = 0;
   cout<<"Enter a Number :"<<endl;
   cin>>number;
   
   while(number!=0)
   {
       int remainder = number%10;
       reversed_number = reversed_number*10 + remainder;
       number = number/10;
   }
   
   cout<<"Reversed Number is : "<<reversed_number;
   
   return 0;
}
