//C++ Program to take marks of 5 subjects of a Student and find its total marks and percentage.


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s1,s2,s3,s4,s5,total;
    float percentage;
    cout<<"Enter Marks of 5 Subjects : "<<endl;
    cin>>s1>>s2>>s3>>s4>>s5;
    total=s1+s2+s3+s4+s5;
    cout<<"Total Marks Obtained : "<<total<<endl;
    percentage=(total*100)/500;
    cout<<"Perccentage Scored : "<<percentage;
    return 0;
}
