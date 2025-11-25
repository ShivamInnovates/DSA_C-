#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  m=4, n=4;

    int graph[m+1][m+1] = {0};

    //Adjacency matrix
    // for(int i =1; i<=n; i++)
    // {
    //     int s,e;
    //     cin>>s>>e;
    //     graph[s][e] = 1;
    //     graph[e][s] = 1;
    // }

    // cout<<"Adjacency Matrix is :"<<endl;
    // for(int i =0; i<=m; i++)
    // {
    //     for(int j =0; j<=m; j++)
    //     {
    //         cout<<graph[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    vector<int> graphlist[n+1];
    for(int i =0;i<n;i++)
    {
        int s,e;
        cin>>s>>e;
        graphlist[s].push_back(e);
        graphlist[e].push_back(s);
    }

    cout<<"Adjacency list: \n";
    for(int i =1;i<=n;i++)
    {
        cout<<i<<"->";
        for(auto x:graphlist[i])
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}