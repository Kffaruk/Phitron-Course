#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    long long tlSum = (long long)N * (N + 1) / 2;
    long long Sum = 0;
    for (int i = 0; i < N - 1; i++)
    {
        int x;
        cin >> x;
        Sum += x;
    }
    cout << tlSum - Sum << endl;
    return 0;
}