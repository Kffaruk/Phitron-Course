#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T; cin >> T;
    while(T--)
    {
        int N; cin >> N;
        int a[N];
        for(int i=0; i<N; i++) cin >> a[i];
        
        for(int i=0; i<N; i++)
        {
            cout << N + 1 - a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}