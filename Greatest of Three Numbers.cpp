//C++ Program to find the greatest of three numbers.



#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    cout<<"Enter First Number\n";
    cin>>a;
    cout<<"Enter Second Number\n";
    cin>>b;
    cout<<"Enter Third Number\n";
    cin>>c;
    if((a>b)&&(a>c))
    {
        cout<<"First Number is the greatest of all three numbers : "<<a;
    }
    else if((b>a)&&(b>c))
    {
        cout<<"Second Number is the greatest of all three numbers : "<<b;
    }
    else
        cout<<"Third Number is the greatest of all three numbers : "<<c;
        
    return 0;    
}
