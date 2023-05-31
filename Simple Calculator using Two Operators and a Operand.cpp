//C++ Program to make simple calculator.



#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a,b;
    cout<<"Enter First number"<<endl;
    cin>>a;
    cout<<"Ente Second number"<<endl;
    cin>>b;
    char op;
    cout<<"Enter Operator : + , - , * , / , %  "<<endl;
    cin>>op;

    switch(op)
    {
      case '+':
              cout<<a<<"+"<<b<<"="<<a+b;
      break;
      
      case '-':
              cout<<a<<"-"<<b<<"="<<a-b;
      break;
      
      case '*':
              cout<<a<<"*"<<b<<"="<<a*b;
      break;
      
      case '/':
              cout<<a<<"/"<<b<<"="<<a/b;
      break;
      
      case '%':
              cout<<a<<"%"<<b<<"="<<a%b;
      break;
      
      default :
              cout<<"INVALID OPERAND.";
      break;
    }
    
    return 0;
}
