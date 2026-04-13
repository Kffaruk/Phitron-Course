#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    set<string> bckt;
    for (int i = 0; i < N; i++)
    {
        string tre, clr;
        cin >> tre >> clr;
        string lef = tre + " " + clr;
        bckt.insert(lef);
    }
    cout << bckt.size() << endl;
    return 0;
}