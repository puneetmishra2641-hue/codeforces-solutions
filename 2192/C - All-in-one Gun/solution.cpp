#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    
    int n ,h,k;
    cin>>n>>h>>k;
    vector<int>a(n);
    int total=0;
    for(int i=0 ; i<n ; i++)
    {
        cin >>a[i];
        total+=a[i];
    }
 
    int m=h/total;
    int x=h%total;
    int ans=(m*n);
    if(x==0)
    {
        cout<<ans+(m-1)*k<<endl;
        return;
    }
 
    ans+=(m*k);
 
    int start=1;
    int end=n;
    int ans2=LLONG_MAX;
 
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        int sum=accumulate(a.begin(),a.begin()+mid,0LL);
       
        if(mid!=n)
        { int mini=*min_element(a.begin(),a.begin()+mid);
        int maxi=*max_element(a.begin()+mid,a.end());
        
        if(mini < maxi )
        {
            sum-=mini;
        sum+=maxi;
        }}
        if(sum>=x)
        {
            ans2=mid;
            end=mid-1;
            continue;
        }
 
        start=mid+1;
    }
 
    ans+=ans2;
 
    cout<<ans<<endl;
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