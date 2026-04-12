#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        string s;
        cin >> N >> s;

        int fst = -1;
        for (int i = 0; i < N; i++)
        {
            if (s[i] == 'B')
            {
                fst = i;
                break;
            }
        }
        int lst = -1;
        for (int i = N - 1; i >= 0; i--)
        {
            if (s[i] == 'B') {
                lst = i;
                break;
            }
        }
        cout << lst - fst + 1 << endl;
    }
    return 0;
}
