#include <bits/stdc++.h>
using namespace std;

void addEdgeU(vector<int> a[], int u, int v)
{
    a[u].push_back(v);
    a[v].push_back(u);
}

void addEdgeD(vector<int> a[], int u, int v)
{
    a[u].push_back(v);
}

void dfs(vector<int> a[], int u, bool visited[])
{
    visited[u] = true;
    cout << u << " ";

    vector<int>::iterator it;

    for (it = a[u].begin(); it < a[u].end(); it++)
    {
        if (!visited[*it])
        {
            dfs(a, *it, visited);
        }
    }
}

int main()
{
    int n;
    cout << "Enter the no. of vertices : ";
    cin >> n;

    vector<int> a[n];

    int x;
    cout << "--FOR Undirect press 1 else press 2--- : ";
    cin >> x;

    if (x == 1)
    {
        addEdgeU(a, 0, 1);
        addEdgeU(a, 1, 2);
        addEdgeU(a, 2, 3);
        addEdgeU(a, 3, 4);
    }

    else if (x == 2)
    {
        addEdgeD(a, 0, 1);
        addEdgeD(a, 1, 2);
        addEdgeD(a, 2, 3);
        addEdgeD(a, 3, 4);
    }
    bool visited[n];

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
            dfs(a, i, visited);
    }
}
