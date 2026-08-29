#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    int n;
    cin >> n;
 
    int a=0,b=0;
    for(int i=0 ; i< n ;i++)
    {
        int temp;
        cin >> temp;
        if(i==0) a=temp;
        if(i==n-1) b=temp;
    }
 
    cout<<__gcd(a,b)<<endl;
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