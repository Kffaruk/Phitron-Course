#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string S;
        cin >> S;

        stack<char> St;

        for (char C : S)
        {
            if (!St.empty() && St.top() != C)
            {
            St.pop();  
            } else {
                St.push(C);
            }
        }
        if (St.empty())
        {
            cout << "YES" << endl;
        } else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}