#include <bits/stdc++.h>
using namespace std;
#define int long long 
 
void solve() {
    int n ,k;
    cin >> n >>k ;
    vector<int>a(n),b(n);
 
    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i];
    }
 
    for(int i=0 ; i<n ; i++)
    {
        cin >> b[i];
    }
 
    vector<pair<int,int>>vp;
 
    for(int i=0 ; i<n ; i++)
    {
        int mini=min(a[i],b[i]);
        int maxi=max(a[i],b[i]);
 
        vp.push_back({mini,maxi});
    }
 
 
    sort(vp.begin(),vp.end());
 
 
    int extra =LLONG_MAX;
 
    for(int i=0 ; i<n-1 ; i++)
    {
        int a1 = vp[i].first;
        int a2=vp[i].second;
        int a3=vp[i+1].first;
        int a4=vp[i+1].second;
 
        int val=abs(a1-a2)+abs(a3-a4);
 
        int val2=abs(a1-a3)+abs(a4-a2);
        int val3=abs(a1-a4)+abs(a3-a2);
 
        int temp=max(val2,val3);
        temp=max(val,temp);
        extra=min(extra,temp-val);
 
    }
 
 
    int total=0;
 
    for(int i=0 ; i<n ; i++)
    {
        total+=abs(a[i]-b[i]);
    }
 
    cout<<total+extra<<endl;
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