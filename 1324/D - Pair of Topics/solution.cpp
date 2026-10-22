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
 
    vector<int>c;
    for(int i=0 ; i<n ; i++)
    {
        c.push_back(a[i]-b[i]);
    }
 
    sort(c.begin(),c.end());
 
 
 
    int ans=0;
    for(int i=0 ; i<n ; i++)
    {
        int val=c[i]*(-1);
 
        auto it=upper_bound(c.begin()+i+1,c.end(),val);
        int idx=it-c.begin();
        ans+=(n-idx);
 
 
 
      
      
 
 
        
    }
 
    cout<<ans<<endl;
 
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
 
 
    return 0;
}