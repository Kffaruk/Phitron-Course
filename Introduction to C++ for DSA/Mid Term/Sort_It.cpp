#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++) 
        cin >> A[i];
    sort(A, A + n);

    for (int i = 0; i < n; i++) 
        cout << A[i] << " ";
    cout << "\n";

    for (int j = n - 1; j >= 0; j--) 
        cout << A[j] << " ";
    cout << "\n";
    return 0;
}