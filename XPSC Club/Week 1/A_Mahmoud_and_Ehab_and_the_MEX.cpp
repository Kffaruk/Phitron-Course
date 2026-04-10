#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, X;
    cin >> N >> X;

    set<int> s;
    for (int i = 0; i < N; i++)
    {
        int val;
        cin >> val;
        s.insert(val);
    }
    int opt = 0;
    for (int i = 0; i < X; i++)
    {
        if (s.find(i) == s.end())
        {
            opt++;
        }
    }
    if (s.find(X) != s.end())
    {
        opt++;
    }
    cout << opt << endl;
    return 0;
}