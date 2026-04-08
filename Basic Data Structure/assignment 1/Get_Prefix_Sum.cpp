#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;

    vector<long long> A(N);
    for(int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for(int i = 1; i < N; i++)
    {
        A[i] = A[i] + A[i - 1];
    }
    for(int i = N - 1; i >= 0; i--) 
    {
        cout << A[i] << " ";
    }
    return 0;
}