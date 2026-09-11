#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve()
{
    ll n;
    cin>>n;
 
    vector<ll> a(n);
 
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
 
    ll x=a[0]%10;
    ll y=a[0]/10;
 
    bool ok=true;
 
    if(x==5)
    {
        for(ll i=1;i<n;i++)
        {
            if(a[i]!=a[0] && a[i]!=a[0]+5)
            {
                ok=false;
                break;
            }
        }
    }
    else if(x==0)
    {
        for(ll i=1;i<n;i++)
        {
            if(a[i]!=a[0] && a[i]!=a[0]-5)
            {
                ok=false;
                break;
            }
        }
    }
    else if(y%2==0)
    {
        if(x==1 || x==2 || x==4 || x==8)
        {
            for(ll i=1;i<n;i++)
            {
                ll p=a[i]%10;
 
                if(p==0 || p==5)
                {
                    ok=false;
                    break;
                }
 
                if((a[i]/10)%2==0 &&
                   (p==3 || p==6 || p==9 || p==7))
                {
                    ok=false;
                    break;
                }
 
                if((a[i]/10)%2!=0 &&
                   (p==1 || p==2 || p==4 || p==8))
                {
                    ok=false;
                    break;
                }
            }
        }
        else
        {
            for(ll i=1;i<n;i++)
            {
                ll p=a[i]%10;
 
                if(p==0 || p==5)
                {
                    ok=false;
                    break;
                }
 
                if((a[i]/10)%2==0 &&
                   (p==1 || p==2 || p==4 || p==8))
                {
                    ok=false;
                    break;
                }
 
                if((a[i]/10)%2!=0 &&
                   (p==3 || p==6 || p==9 || p==7))
                {
                    ok=false;
                    break;
                }
            }
        }
    }
    else
    {
        if(x==1 || x==2 || x==4 || x==8)
        {
            for(ll i=1;i<n;i++)
            {
                ll p=a[i]%10;
 
                if(p==0 || p==5)
                {
                    ok=false;
                    break;
                }
 
                if((a[i]/10)%2==0 &&
                   (p==1 || p==2 || p==4 || p==8))
                {
                    ok=false;
                    break;
                }
 
                if((a[i]/10)%2!=0 &&
                   (p==3 || p==6 || p==7 || p==9))
                {
                    ok=false;
                    break;
                }
            }
        }
        else
        {
            for(ll i=1;i<n;i++)
            {
                ll p=a[i]%10;
 
                if(p==0 || p==5)
                {
                    ok=false;
                    break;
                }
 
                if((a[i]/10)%2!=0 &&
                   (p==1 || p==2 || p==4 || p==8))
                {
                    ok=false;
                    break;
                }
 
                if((a[i]/10)%2==0 &&
                   (p==3 || p==6 || p==9 || p==7))
                {
                    ok=false;
                    break;
                }
            }
        }
    }
 
    if(ok)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll t;
    cin>>t;
 
    while(t--)
    {
        solve();
    }
 
    return 0;
}