#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n,k;
    cin >> n >>k ;
    string s;
    cin >> s;
 
    int ans=0;
 
    for(int i=0 ; i<n ; i+=k)
    {
        bool temp=false;;
        for(int j=i; j <(i+k) ; j++)
        {
            if(s[j]=='0') temp=true;
        }
        if(!temp) ans++;
    }
 
    cout<<ans<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}