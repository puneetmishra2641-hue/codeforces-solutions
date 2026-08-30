#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    int a,b;
    cin >> a >> b;
 
    if(a%2==0 )
    {
        if(b%2!=0)
        {
            cout<<-1<<endl;
            return ;
        }
 
        a*=(b/2);
        a+=2;
        cout<<a<<endl;
        return ;
    }
 
    if(b%2 != 0)
    {
        cout<<a*b +1 << endl;
        return;
    }
 
    if(b%4 != 0)
    {
        cout<<-1<<endl;
        return;
    }
 
    cout<<(a*b)/2 +2<<endl;
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