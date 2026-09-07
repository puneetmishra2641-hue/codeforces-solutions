#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n,k;
    cin >> n >> k ;
 
    string s;
    cin >> s ;
 
    int cnt=0;
 
    for(int i=0 ; i< k ; i++)
    {
        if(s[i]=='W') cnt++;
    }
 
    int ans=cnt;
 
    for(int i=1 ; i+k-1 < n ; i++)
    {
        if(s[i-1]=='W') cnt--;
        if(s[i+k-1] == 'W') cnt++;
        ans=min(ans,cnt);
    }
 
    cout<<ans<<endl;
}
 
int  main()
{
    int t;
    cin >> t;
 
    while(t--)
    {
        solve();
 
    }
 
}