#include <bits/stdc++.h>
using namespace std;

int main()
{
    int S, T;
    cin >> S >> T;

    int cnt = 0;
    for (int x = 0; x <= S; x++)
    {
        for (int y = 0; y <= S; y++)
        {
            for (int z = 0; z <= S; z++)
            {
                if (x + y + z <= S && x * y * z <= T)
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}