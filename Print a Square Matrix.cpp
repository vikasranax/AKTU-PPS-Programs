//C++ Program to Print aMatrix.



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

    return 0;
}
