//C++ Program for Fibbonacci Series.



#include<bits/stdc++.h>
using namespace std;
int main()
{
    long element,number1=0,number2=1,number3;
    cout<<"Enter Number of Elements in Series\n";
    cin>>element;

    for(int i=0; i<=element; i++)
    {
        if(i<element)
        {cout<<number1<<",";}
        else
        {cout<<number1;}
        number3=number1+number2;
        number1=number2;
        number2=number3;
    }

    return 0;
}
