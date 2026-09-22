#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
   
    int n ;
    cin >> n ;
    vector<int>a(n);
    int sum=0;
    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i];
       
    }
 
    for(int i=0 ; i<n ; i++)
    {
        sum+=a[i];
        int temp=i+1;
        if(sum< (temp*(temp+1))/2)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
 
    cout<<"YES"<<endl;
 
 
 
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