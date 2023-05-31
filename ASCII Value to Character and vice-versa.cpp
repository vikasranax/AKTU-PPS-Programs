#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    char ch,b;
    cout<<"What Do You Want?"<<endl;
    cout<<"(1) ASCII Value from Charcter."<<endl<<"(2) Character from ASCII Value."<<endl;
    cin>>ch;

    switch (ch)
    {
        case '1':
        {
           cout<<"Enter a Character."<<endl;
           cin>>b;
           cout<<"ASCII Value of "<<b<<" is "<<int(b);
           break; 
        }

        case '2':
        {
            cout<<"Enter a Number."<<endl;
            cin>>a;
            cout<<"Character Value of "<<a<<" is "<<char(a);
            break;
        }
        
        default :
        cout<<"INVALID !!!!";    
    }    
    return 0;
}
