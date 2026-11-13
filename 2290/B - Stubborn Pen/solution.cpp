#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n ;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
 
    int a=1;
 
    for(int i=0 ; i<n ; i++)
    {
        if(s[i]=='R' && a==1) 
        {
            a=0;
            continue;
        }
 
        if(s[i]=='B'  && a==0)
        {
            a=1;
            continue;
        }
 
        cnt++;
        
 
    }
 
    cout<<cnt<<endl;
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