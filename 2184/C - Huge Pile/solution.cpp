#include<bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n,k;
        cin >> n>>k;
        if(k>n)
        {
            cout<<-1<<endl;
           return ;
        }
 
        int ans=0;
 
        int cnt=0;
 
        int a=n,b=n;
        while(a>=k || b>=k)
        {
            if(a==k || b==k) break;
             a/=2;
             b=(b/2)+(b%2);
             cnt++;
             
        }
 
        if(a==k || b==k) 
 
        {
            cout<<cnt<<endl;
            return;
        }
 
        cout<<-1<<endl;
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