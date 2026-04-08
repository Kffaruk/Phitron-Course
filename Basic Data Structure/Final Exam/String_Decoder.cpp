#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;

        string ans = "";
        for (int i = 0; i < s.size(); i += 2)
        {
            char lettr = s[i];
            int  cnt  = s[i+1] - '0';

            for (int k = 0; k < cnt; k++)
            {
                ans += lettr;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
