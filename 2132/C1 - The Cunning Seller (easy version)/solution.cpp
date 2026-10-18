#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    int n;
    cin>>n;
 
    int cost=0;
 
    while(n)
    {
 
        int x=1;
        int cnt=0;
        while((x*3)<=n)
        {
            x*=3;
            cnt++;
        }
 
        n-=x;
 
        if(cnt==0)
        {
            cost+=(3);
            continue;
        }
 
        int temp=1;
        for(int i=0 ; i<=cnt;i++) temp*=3;
 
        cost+=temp;
        cost+=(cnt*(temp/(3*3)));
 
 
    }
 
    cout<<cost<<endl;
 
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