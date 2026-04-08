#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    
    stack<int> St;
    for(int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        St.push(x);
    }
    queue<int> Q;
    for(int i = 0; i < M; i++)
    {
        int x;
        cin >> x;
        Q.push(x);
    }
    if(N != M)
    {
        cout << "NO" << endl;
        return 0;
    }
    bool same = true;
    while(!St.empty() && !Q.empty())
    {
        if(St.top() != Q.front())
        {
            same = false;
            break;
        }
        St.pop();
        Q.pop();  
    }
    if(same) cout << "YES" << endl;
    else     cout << "NO"  << endl; 
    return 0;
}