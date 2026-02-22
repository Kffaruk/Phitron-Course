#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string S, X;
        cin >> S >> X;
        string ch = "";
        int idx = 0;
        while (true)
        {
            int fnd = S.find(X, idx);
            if (fnd == -1)
            {
                ch += S.substr(idx);
                break;
            }
            ch += S.substr(idx, fnd - idx);
            ch += "#";
            idx = fnd + X.length();
        }
        cout << ch << endl;
    }
    
    return 0;
}