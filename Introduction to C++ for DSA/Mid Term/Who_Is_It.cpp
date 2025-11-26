#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
     {
        int id, top_id = 0, mrk, top_mrk = -1;
        string name, top_name, sct, top_sct;
        for (int i = 0; i < 3; i++)
         {
            cin >> id >> name >> sct >> mrk;
            
            if (mrk > top_mrk || (mrk == top_mrk && id < top_id))
            {
                top_mrk = mrk;
                top_id = id;
                top_name = name;
                top_sct = sct;
            }
        }
        cout << top_id << " " << top_name << " " << top_sct << " " << top_mrk << "\n";
    }
    return 0;
}
