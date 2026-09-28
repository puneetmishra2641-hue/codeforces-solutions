#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    int n ,k;
    cin >> n >>k;
    vector<int>a(n);
    for(int i=0 ; i<n ;  i++)
    {
        cin >> a[i];
    }
 
    if(k>1)
    {
        sort(a.rbegin(),a.rend());
        cout<<accumulate(a.begin(),a.begin()+k+1,0LL)<<endl;
        return;
 
    }
 
    if(n>2)
    {
        cout<<max(a[0]+a[n-1],max(a[0],a[n-1])+*max_element(a.begin()+1,a.end()-1))<<endl;
        return;
    }
 
    cout<<a[0]+a[1]<<endl;
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