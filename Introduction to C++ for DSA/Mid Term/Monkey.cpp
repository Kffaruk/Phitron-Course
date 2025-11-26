#include <iostream>
using namespace std;
int main()
{
    char S[100001];
    while (cin.getline(S,100001))
     {
        for (char ch = 'a'; ch <= 'z'; ch++)
        {
            for (int j = 0; S[j]; j++)
            {
                if (S[j] == ch)
                    cout << ch;
            }
         }
        cout << "\n";
    }
    return 0;
}