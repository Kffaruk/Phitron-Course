#include<bits/stdc++.h>
using namespace std;
int main()
 {
    int T;
    cin >> T;   
    while (T--) {
        int N, S;
        cin >> N >> S;  
        int ar[100];     
        for (int i = 0; i < N; i++)
         {
            cin >> ar[i]; 
        }
        bool result = false;
        for (int i = 0; i < N; i++) {
            for (int k = i + 1; k < N; k++)
            {
                for (int j = k + 1; j < N; j++)
                {
                    if (ar[i] + ar[j] + ar[k] == S)
                     {
                        result = true;
                        break;
                    }
                }
                if (result) break;
            }
            if (result) break;
        }
        if (result)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}