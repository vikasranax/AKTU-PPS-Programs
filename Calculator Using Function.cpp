#include<bits/stdc++.h>
using namespace std;

int Add(long a , long b){
    return a+b;
}

int Subtract(long a , long b){
    return a-b;
}

int Multiply(long a , long b){
    return a*b;
}

int Divide(long a , long b){
    if(b!=0){
        return a/b;
    }
    else{
        cout<<"NOT POSSIBLE.";
    }
}


int main(){
    long result , a , b;
    char op;
    cout<<"Enter First number :";
    cin>>a;
    cout<<"Enter Operator ('+' , '-' , '*' , '/') : ";
    cin>>op;
    cout<<"Enter Second Number :";
    cin>>b;
    
    switch(op){

    case '+':
        result = Add(a , b);
        break;

    case '-':
        result = Subtract(a , b);
        break;

    case '*':
        result = Multiply(a ,b);
        break;

    case '/':
        result = Divide(a , b);
        break;

    default :
        cout<<"INVALID INPUT" ;               
    }

    cout<<a<<op<<b<<"="<<result;

    return 0;
}
