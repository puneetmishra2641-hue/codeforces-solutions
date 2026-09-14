#include<bits/stdc++.h>
using namespace std;
 
#define int long long 
 
void solve()
{
    int a , b , x;
    cin >> a >> b >> x ;
 
    if(a==b)
    {
        cout<<0<<endl;
        return ;
    }
 
    int ans=abs(a-b);
    int cnt=0;
 
    while(a!=b)
    {
 
     
        if(a < b )  swap(a,b);
        a/=x;
        cnt++;
        ans=min(ans,abs(a-b)+cnt);
 
 
 
    }
 
    cout<<ans << endl;
}
 
signed main()
{
    int t;
    cin >> t;
 
    while(t--)
    {
        solve();
    }
}