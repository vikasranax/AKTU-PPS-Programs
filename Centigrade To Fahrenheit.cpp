//C++ Program to convert Centigrade into Fahrenheit


#include<bits/stdc++.h>
using namespace std;
int main()
{
    float centigrade;
    cout<<"Enter the temperature in Centigrade\n";
    cin>>centigrade;
    
    float fahrenheit = (centigrade*9/5)+32;
    cout<<"Temperature in Fahrenheit : "<<fahrenheit;
    return 0;
}
