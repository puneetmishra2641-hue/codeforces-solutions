#include <bits/stdc++.h>
using namespace std;
#define int long long 
 
void solve() {
    int n ;
    cin >> n ;
    string a , b;
    cin >> a >> b;
 
    set<int>st1,st2,st3,st4;
 
    for(int i=0 ; i<n ; i++)
    {
        if(a[i]=='1' && i%2==0) st1.insert(i);
        if(a[i]=='1' && i%2!=0) st2.insert(i);
        if(b[i]=='1' && i%2==0) st3.insert(i);
        if(b[i]=='1' && i%2!=0) st4.insert(i);   
    }
 
    if(st1.size()!=st3.size()  || st2.size()!=st4.size())
 
    {
        cout<<-1<<endl;
        return;
    }
 
    int ans=0;
 
    while(st1.size())
    {
        ans+=((abs(*st1.begin()- *st3.begin()))/2);
        st1.erase(st1.begin());
        st3.erase(st3.begin());
 
    }
 
     while(st2.size())
    {
        ans+=((abs(*st2.begin()- *st4.begin()))/2);
        st2.erase(st2.begin());
        st4.erase(st4.begin());
 
    }
 
 
    cout<<ans<<endl;
 
 
 
 
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