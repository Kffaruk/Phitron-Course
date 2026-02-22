#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};

int main()
{
    int N;
    cin >> N;

    Student a[N];

    for (int i = 0; i < N; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id;
    }

    int i = 0, j = N - 1;
    while (i < j)
    {
        swap(a[i].s, a[j].s);
        i++;
        j--;
    }

    for (int i = 0; i < N; i++)
    {
        cout << a[i].nm << " "
             << a[i].cls << " "
             << a[i].s << " "
             << a[i].id << endl;
    }

    return 0;
}
