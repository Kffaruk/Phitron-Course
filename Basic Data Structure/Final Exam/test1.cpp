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

    while (sum != 0)
    {
        if (sum > 0)
        {
            sum -= 1;
            md++;
        } else
        {
            sum += 1;
            md++;
        }
    }
    cout << md << endl;
    return 0;
}