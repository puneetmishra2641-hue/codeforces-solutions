#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    
    int n ;
    cin>>n;
    vector<int>a(n),b(n);
 
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
 
    for(int i=0 ; i<n ; i++)
    {
        cin>>b[i];
    }
 
 
    map<pair<int,int>,int>mp;
      int ans=0;
      int ns=0;
      int y=0;
 
    for(int i=0 ; i<n ; i++)
    {
 
        if(a[i]==0)
        {
            if(b[i]==0) y++;
           
                continue;
            
        }
 
        if(b[i]==0) 
        {
            ns++;
            continue;
 
        }
        
        int temp=__gcd(a[i],b[i]);
        a[i]/=temp;
        b[i]/=temp;
 
        mp[{b[i],a[i]}]++;
 
    }
 
  
    for(auto it:mp)
    {
        ans=max(ans,it.second);
    }
 
    ans=max(ns,ans);
    ans+=y;
 
    cout<<ans<<endl;
    return ;
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
  solve();
 
  return 0 ;
 
 
}