//C++ Program to Find difference between diagonals of a square Matrix.



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m , sum1=0, sum2=0, dia1s, dia2s;
    cout<<"Enter the size of square matrix\n";
    cin>>m;
    cout<<"Enter Elements of Matrix\n";
    int arr[m][m];


    for(int i=0; i<m; i++)
        { for(int j=0; j<m; j++)
           {
                cin>>arr[i][j];
           }
        }
    cout<<"Matrix is : \n";
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(i==j)
            sum1+=arr[i][j];
        }
    }
    cout<<"Sum of Diagonal 1 = "<<sum1<<endl;
    for(int i=0; i<m*m; i++)
    {
        for(int j=0; j<m*m; j++)
        {
            if((i+j)==(m-1))
            sum2+=arr[i][j];
        }
    }
    cout<<"Sum of Diagonal 2 = "<<sum2<<endl;
    
    cout<<"Difference Between Both Diagonal is "<<abs(sum1-sum2);

    return 0;
}
