#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    
    int n ;
    cin>>n;
    vector<int>a(n);
 
    for(int i=0 ; i<n ; i++) cin>>a[i];
 
 
    sort(a.begin(),a.end());
 
    int ans=0;
    int op=0;
 
for(int i=0 ; (i+1 )<n ; i++)
{
    if(i<(n/2))
    {
        ans+=((a[i+1]-a[i])*(i+1));
        op+=(a[i+1]-a[i]);
        continue;
    }
 
    ans+=((a[i+1]-a[i])*(n-i-1));
       op+=(a[i+1]-a[i]);
}
 
    
    cout<<ans<<" ";
    cout<<op<<endl;
 
 
 
 
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}