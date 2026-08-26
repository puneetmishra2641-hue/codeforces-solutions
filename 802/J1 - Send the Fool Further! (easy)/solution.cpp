#include <bits/stdc++.h>
using namespace std;
 
int answer(vector<vector<pair<int, int>>> &adj,int node,int papa)
{
    if(adj[node].size()==1 && adj[node][0].first==papa)
    {
        return 0;
    }
 
    int maxi=0;
 
    for(auto it:adj[node])
    {
        if(it.first==papa) continue;
        int temp=answer(adj,it.first,node);
        maxi=max(maxi,temp+it.second);
    }
 
    return maxi;
}
 
 
 
void solve()
{
    int n;
    cin >> n;
    vector<vector<pair<int, int>>> adj(n);
    for (int i = 1; i < n; i++)
    {
        int u,v,c;
        cin >> u >> v >>c;
        adj[u].push_back({v,c});
        adj[v].push_back({u,c});
    }
 
    int ans=answer(adj,0,-1);
    cout<<ans<<endl;
 
}
 
int main()
{
    solve();
}