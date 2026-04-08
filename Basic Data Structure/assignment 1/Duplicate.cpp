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

    bool flag = false;

    for(int i = 0; i < N; i++)
    {
        for(int j = i + 1; j < N; j++) 
        {
            if(A[i] == A[j]) 
            {
                flag = true;
                break;
            }
        }
        if(flag)
         break;
    }

    if(flag)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}