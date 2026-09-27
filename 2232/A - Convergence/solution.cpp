#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    int n ;
    cin >> n ;
    vector<int>a(n);
 
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
 
    sort(a.begin(),a.end());
 
 
 
    int ans=LLONG_MAX;
 
    for(int i=0 ; i<n ; i++)
    {
        int t=i;
        int temp=a.end()-upper_bound(a.begin(),a.end(),a[i]);
        ans=min(ans,max(t,temp));
    }
 
    cout<<ans<<endl;
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