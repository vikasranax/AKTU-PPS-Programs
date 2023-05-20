#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a1, a2, a3, b1, b2, b3, c1, c2, c3, p1, p2, p3;

    cout << "enter marks for student 1 for P C M" << endl;
    cin >> a1 >> a2 >> a3;
    cout << "enter marks for student 2 for P C M" << endl;
    cin >> b1 >> b2 >> b3;
    cout << "enter marks for student 3 for P C M" << endl;
    cin >> c1 >> c2 >> c3;

    p1 = ((a1 + a2 + a3) / 300) * 100;
    p2 = ((b1 + b2 + b3) / 300) * 100;
    p3 = ((c1 + c2 + c3) / 300) * 100;

    if (p1 > p2 && p1 > p3)
    {
        cout << "p1";
    }
    else if (p2 > p1 && p2 > p3)
    {
        cout << "p2";
    }
    else
    {
        cout << "p3";
    }
}