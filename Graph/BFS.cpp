// TC OF BFS = O(E+V) { using adj. list}
// TC OF BFS = O(V^2) {using adj matrix}
// SC = O(V)
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void AddEdge(vector<int>a[], int u, int v)
{
    a[u].push_back(v);
    a[v].push_back(u);
}

void bfs(vector<int>a[], int u , bool visited[])
{
    queue<int>q;

    q.push(u);
    visited[u]=true;

    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        cout<<x<<" ";
    
        for(auto it:a[u])
        {
            if(!visited[it])
            {
                q.push(it);
                visited[it]=true;
            }
        }
    }

}

int main()
{
    int n;
    cout<<"Enter the no. of vertices"<<endl;
    cin>>n;

    vector<int> a[n];

    AddEdge(a,0,1);
    AddEdge(a,1,2);
    AddEdge(a,2,3);

    // int SV;
    // cout<<"Enter the source vertex"<<endl;
    // cin>>SV;

    bool visited[n];

    for(int i=0 ; i<n; i++)
    {
        if(!visited[i])
        bfs(a,i,visited);
    }

    // bfs(a,SV,n);
}
