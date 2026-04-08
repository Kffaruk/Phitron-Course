#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    for (char c = 'a'; c <= 'z'; c++)
    {
        if (S.find(c) == string::npos)
        {
            cout << c << "\n";
            return 0;
        }
    }
    cout << "None" << "\n";
    return 0;
}