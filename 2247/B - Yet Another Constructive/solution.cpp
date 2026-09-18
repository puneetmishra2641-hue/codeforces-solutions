#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    
    int n , k ,m;
    cin >> n >> k >> m ;
 
    if(k > m )
    {
        cout<<"NO"<<endl;
        return ;
    }
 
    cout<<"YES"<<endl;
    int a= m -k;
 
    for(int i=0 ; i<n ; i++)
    {
        if(i<(k-1))
        {
            cout<<1<<" ";
        }
       else if(i==k-1)
        {
            cout<<a+1<<" ";
        }
 
        else cout<<1<<" ";
 
    }
 
    cout<<endl;
}
 
signed  main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}