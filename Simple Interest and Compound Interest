//C++ Program to calculate Simple interest and compound interest.



#include<bits/stdc++.h>
using namespace std;
int main()
{
    double principle,rate,time;
    cout<<"Enter Principle Amount, Rate Of Interest and Time\n";
    cin>>principle>>rate>>time;
    
   double SI= (principle*rate*time)/100;
   cout<<"Simple Interset is : "<<SI<<endl;
   
   double A= principle * (pow((1+rate/100),time));
   double CI= A - principle;
   
   cout<<"Compound Interest is : "<<CI;
   return 0;
}
