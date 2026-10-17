#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    int n ;
    cin>>n;
    vector<int>a(n),b(n);
 
    for(int i=0 ; i<n;i++) cin>>a[i];
    for(int i=0 ; i<n;i++) cin>>b[i];
 
    int fs=a[0];
    int fe=a[n-1];
    int ss=b[0];
    int se=b[n-1];
    
 
    int x,y,z,q;
 
   x =LLONG_MAX;
    y=LLONG_MAX;
   z =LLONG_MAX;
    q=LLONG_MAX;
 
 
    for(int i=0 ; i<n;i++)
    {
        x=min(x,abs(fs-b[i]));
 
    }
 
    for(int i=0 ; i<n;i++)
{
    y=min(y,abs(fe-b[i]));
 
}
 
    for(int i=0 ; i<n;i++)
{
 
    z=min(z,abs(ss-a[i]));
 
}
 
    for(int i=0 ; i<n;i++)
{
 
    q=min(q,abs(se-a[i]));
 
}
 
int ans=abs(fs-ss)+abs(fe-se);
ans=min(ans,abs(fs-se)+abs(fe-ss));
 
ans=min(ans,abs(fs-ss)+y+q);
ans=min(ans,abs(fs-se)+y+z);
ans=min(ans,abs(ss-fe)+x+q);
ans=min(ans,abs(fe-se)+x+z);
 
ans=min(ans,x+y+z+q);
 
 
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