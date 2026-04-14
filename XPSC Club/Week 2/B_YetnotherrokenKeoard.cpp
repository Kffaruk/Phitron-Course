#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string line;
        getline(cin, line);

        string res = "";

        for (char c : line)
        {

            if (c == 'b')
            {
                for (int i = res.size() - 1; i >= 0; i--)
                {
                    if (islower(res[i]))
                    {
                        res.erase(i, 1);
                        break;
                    }
                }

            } else if (c == 'B')
            {
                for (int i = res.size() - 1; i >= 0; i--)
                {
                    if (isupper(res[i]))
                    {
                        res.erase(i, 1);
                        break;
                    }
                }
            } else
            {
                res += c;
            }
        }
        cout << res << endl;
    }
    return 0;
}