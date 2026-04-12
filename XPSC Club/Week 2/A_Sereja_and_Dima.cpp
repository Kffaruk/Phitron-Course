#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int crd[N];
    for (int i = 0; i < N; i++)
    {
        cin >> crd[i];
    }
    int fst = 0;
    int lst = N - 1;
    int sereja = 0, dima = 0;
    bool sereja1 = true;

    while (fst <= lst)
    {
        int chn;
        if (crd[fst] > crd[lst])
        {
            chn = crd[fst];
            fst++;
        } else {
            chn = crd[lst];
            lst--;
        }
        if (sereja1)
        {
            sereja += chn;
        } else {
            dima += chn;
        }
        sereja1 = !sereja1;
    }
    cout << sereja << " " << dima << endl;
    return 0;
}