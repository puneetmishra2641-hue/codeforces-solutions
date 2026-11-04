#include <bits/stdc++.h>
using namespace std;
 
 
 
void dfs(int node,vector<int>&vis,vector<vector<int>>&adj,set<int>&st)
{
    st.insert(node);
 
    vis[node]=1;
 
    for(auto &it:adj[node])
    {
        if(vis[it]==0)
        {
            dfs(it,vis,adj,st);
        }
    }
    
}
 
 
 
bool isgray(int x, int k, int n, vector<vector<int>>&adj)
{
     vector<int>vis(n+1,0);
    vis[x]=1;
 
    for(int s : adj[x])
    {
 
 
        set<int>st;
       
        dfs(s,vis,adj,st);
 
 
 
        for(int i :st)
        {
            int j=k-i;
            if(j<1) continue;
            if(j>n) continue;
            if(j==i) continue;
            if(st.count(j)==0) return true;
        }
    }
    return false;
 
}
 
void solve() {
    int n;
    cin>>n;
 
    vector<vector<int>>adj(n+1);
    for(int i=1 ; i<n ; i++) 
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
 
    if(n%2==0)
    {
        cout<<n+1<<endl;
        return;
    }
 
    if(adj[n].size()!=1 && isgray(n,n,n,adj))
    {
        cout<<n<<endl;
        return;
    }
 
    int puneet=n+1;
    puneet/=2;
 
 
 
 
    if(adj[puneet].size()!=1 && isgray(puneet,n+1,n,adj))
    {
        cout<<n+1<<endl;
        return;
    }
 
    if(adj[1].size()!=1 && isgray(1,n+2,n,adj))
    {
        cout<<n+2<<endl;
        return;
    }
 
    
 
    cout<<n<<endl;
    return;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}