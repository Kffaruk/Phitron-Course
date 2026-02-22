#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    getline(cin, S);

    string ch;
    stringstream ss(S);

    bool srch = false;

    while (ss >> ch) {
        if (ch == "Jessica") {
            srch = true;
            break;
        }
    }

    if (srch)
    {
        cout << "YES";
    } 

    else {
        cout << "NO";
    }

    return 0;
}