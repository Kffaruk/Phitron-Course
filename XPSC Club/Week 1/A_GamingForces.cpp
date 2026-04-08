#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    
    while (T--)
    {
        int N;
        cin >> N;
        int cnt = 0;
        int cnt1 = 0;

        for (int i = 0; i < N; i++)
        {
            int h;
            cin >> h;
            if (h == 1)
            {
                cnt++;
            } else {
                cnt1++;
            }
        }
        int rslt = (cnt + 1) / 2 + cnt1;
        cout << rslt << endl;
    }
    return 0;
}