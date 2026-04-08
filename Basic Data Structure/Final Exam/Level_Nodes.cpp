#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int V)
    {
        val = V;
        left = right = NULL;
    }
};

void print_level(Node *root, int level, bool &found)
{
    if (root == NULL)
        return;
    queue<Node *> Q;
    Q.push(root);

    int currt_Level = 0;
    while (!Q.empty())
    {
        int levelsize = Q.size();

        if (currt_Level == level)
        {
            for (int i = 0; i < levelsize; i++)
            {
                Node *curr = Q.front();
                Q.pop();
                cout << curr->val << " ";
            }
            found = true;
            return;
        }
        for (int i = 0; i < levelsize; i++)
        {
            Node *curr = Q.front();
            Q.pop();

            if (curr->left  != NULL) Q.push(curr->left);
            if (curr->right != NULL) Q.push(curr->right);
        }
        currt_Level++;
    }
}

int main()
{
    vector<int> Arr;
    int X;
    vector<int> input;
    while (cin >> X)
        input.push_back(X);

    if (input.size() < 2)
    {
        cout << "Invalid";
        return 0;
    }
    int L = input.back();
    input.pop_back();
    Arr = input;

    if (Arr.empty() || Arr[0] == -1)
    {
        cout << "Invalid";
        return 0;
    }

    Node *root = new Node(Arr[0]);
    queue<Node *> q;
    q.push(root);

    int i = 1;
    while (!q.empty() && i < Arr.size())
    {
        Node *curr = q.front();
        q.pop();

        if (Arr[i] != -1)
        {
            curr->left = new Node(Arr[i]);
            q.push(curr->left);
        }
        i++;

        if (i < Arr.size() && Arr[i] != -1)
        {
            curr->right = new Node(Arr[i]);
            q.push(curr->right);
        }
        i++;
    }

    bool found = false;
    print_level(root, L, found);

    if (!found)
        cout << "Invalid";

    return 0;
}