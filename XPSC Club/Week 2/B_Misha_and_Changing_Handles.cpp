#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string line;
        getline(cin, line);

        string res = "";  // final result

        for (char c : line) {

            if (c == 'b') {
                // res এর শেষ lowercase খুঁজে মুছো
                for (int i = res.size() - 1; i >= 0; i--) {
                    if (islower(res[i])) {
                        res.erase(i, 1);
                        break;
                    }
                }

            } else if (c == 'B') {
                // res এর শেষ uppercase খুঁজে মুছো
                for (int i = res.size() - 1; i >= 0; i--) {
                    if (isupper(res[i])) {
                        res.erase(i, 1);
                        break;
                    }
                }

            } else {
                // সাধারণ letter → যোগ করো
                res += c;
            }
        }

        cout << res << "\n";
    }

    return 0;
}