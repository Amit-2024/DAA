#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> a[], int u, int v)
{
    a[u].push_back(v);
    a[v].push_back(u);
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

    addEdge(a, 0, 1);
    addEdge(a, 1, 2);
    addEdge(a, 2, 3);
    addEdge(a, 3, 4);

    bool visited[n];

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
            dfs(a, i, visited);
    }
}
