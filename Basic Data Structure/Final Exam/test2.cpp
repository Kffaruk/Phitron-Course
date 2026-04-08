#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> a(N);
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    int md = 0;

    for (int i = 0; i < N && sum != 0; i++)
    {
        if (sum > 0 && a[i] == 1)
        {
            if (sum >= 2)
            {
                a[i] = -1;
                sum -= 2;
            }
            else
            {
                a[i] = 0;
                sum -= 1;
            }
            md++;
        }
        else if (sum < 0 && a[i] == -1)
        {
            if (sum <= -2)
            {
                a[i] = 1;
                sum += 2;
            }
            else
            {
                a[i] = 0;
                sum += 1;
            }
            md++;
        }
    }
    cout << md << endl;
    return 0;
}
