#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    string s;
    int id;
    int math;
    int eng;
};

bool cmp(Student a, Student b)
{
    int totalA = a.math + a.eng;
    int totalB = b.math + b.eng;

    if (totalA != totalB)
    {
        return totalA > totalB;  
    }
    else
    {
        return a.id < b.id;     
    }
}

int main()
{
    int N;
    cin >> N;

    Student a[N];

    for (int i = 0; i < N; i++)
    {
        cin >> a[i].name
            >> a[i].cls
            >> a[i].s
            >> a[i].id
            >> a[i].math
            >> a[i].eng;
    }

    sort(a, a + N, cmp);

    for (int i = 0; i < N; i++)
    {
        cout << a[i].name << " "
             << a[i].cls << " "
             << a[i].s << " "
             << a[i].id << " "
             << a[i].math << " "
             << a[i].eng << endl;
    }

    return 0;
}
