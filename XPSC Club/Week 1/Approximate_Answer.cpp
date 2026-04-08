#include <bits/stdc++.h>
using namespace std;
int main()
{
    int X, Y, K;
    cin >> X >> Y >> K;
    int sub = X - Y;
    if (abs(sub) <= K)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}