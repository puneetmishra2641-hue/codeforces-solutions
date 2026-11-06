#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    
    int k,n;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0 ; i<n ; i++)  cin>>a[i];
 
    sort(a.begin(),a.end());
 
    if(k==n)
    {
        cout<<"YES"<<endl;
    for(auto it:a) cout<<it<<" ";
    cout<<endl;
    return;
    }
 
 
    int idx=n-k;
 
    int val=a[idx-1];
    bool puneet=false;
    for(int i=idx; i<n ; i++)
    {
        if(a[i]!=val) puneet=true;
    }
 
    if(puneet==false)
    {
        cout<<"NO"<<endl;
        return;
    }
 
 
    cout<<"YES"<<endl;
    for(int i=idx ; i<n ; i++)  cout<<a[i]<<" ";
 
    for(int i=idx-1; i>=0; i--)  cout<<a[i]<<" ";
    cout<<endl;
    
 
    
 
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