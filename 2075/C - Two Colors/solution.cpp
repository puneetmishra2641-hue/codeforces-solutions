#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    int n ,m;
    cin >> n >>m ;
    vector<int>a(m);
    for(int i=0 ; i<m ; i++)
    {
        cin >> a[i];
        a[i]=min(a[i],n-1);
    }
 
    sort(a.begin(),a.end());
 
    int total=0;
    vector<int>ps(m+1,0);
    for(int i=0 ; i<m ; i++)
    {
        ps[i+1]=ps[i]+a[i];
    }
 
    for(int i=1 ; i<m ; i++)
    {
       int temp=n-a[i];
       temp=max(temp,1LL);
       auto idx=lower_bound(a.begin(),a.end(),temp);
       int id=idx-a.begin();
       if(id>=i) continue;
       int temp2=ps[i]-ps[id];
       temp2-=(temp*(i-id));
       temp2+=(i-id);
       temp2*=2;
       total+=temp2;
    }
 
    cout<<total<<endl;
    return;
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