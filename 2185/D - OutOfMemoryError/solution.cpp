#include<bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n,m,h;
    cin >> n >> m >> h;
 
    vector<int>a(n);
    for(int i=0 ; i< n ;i++) cin >>a[i];
 
    unordered_map<int,int>ump;
 
    for(int i=0 ; i< m ; i++)
    {
        int x,y;
        cin >> x >> y;
 
        int extra=0;
        if(ump.count(x)) extra=ump[x];
        if(extra+y+a[x-1] >h)
        {
           ump.clear();
           continue;
        }
        ump[x]+=y;
    }
 
    for(auto i:ump)
    {
        a[i.first-1]+=i.second;
    }
 
    for(auto i :a) cout<<i<<" ";
    cout<<endl;
 
 
 
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