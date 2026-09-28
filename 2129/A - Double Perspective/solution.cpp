#include <bits/stdc++.h>
using namespace std;
 
void dfs(vector<vector<int>>&adj,int node,vector<bool>&vis,vector<pair<int,int>>&ans,int x)
{
    vis[node]=true;
 
    for(auto it:adj[node])
    {
        if(it==x) continue;
        if(vis[it])
        {
            ans.push_back({min(node,it),max(node,it)});
            continue;
        }
        dfs(adj,it,vis,ans,node);
    }
 
 
}
void solve() {
    int n ;
    cin >> n ;
    vector<pair<int,int>>vp(n);
     vector<vector<int>>adj((2*n)+1);
    for(int i=0 ; i<n ; i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        vp[i].first=a;
        vp[i].second=b;
 
    }
 
 
 
  vector<bool>vis(2*n+1,false);
  vector<pair<int,int>>ans;
 
  for(int i=0 ; i<n ; i++)
  {
    if( vis[vp[i].first]==false)
    {
        dfs(adj,vp[i].first,vis,ans,0);
    }
 
  }
 
  set<pair<int,int>>st(ans.begin(),ans.end());
 
  cout<<n-(int)st.size()<<endl;
 
 
  for(int i=0 ; i<n ; i++)
  {
    if(st.count(vp[i])) continue;
    cout<<i+1<<" ";
  }
 
  cout<<endl;
 
 
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