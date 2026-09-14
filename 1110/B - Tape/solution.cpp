#include <bits/stdc++.h>
using namespace std;
#define int long long 
 
void solve() {
    int n , m ,k ;
    cin >> n >> m >>k;
    vector<int>a(n);
    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i];
    }
 
    multiset<int>st;
 
    for(int i=1 ; i<n ; i++)
    {
        st.insert(a[i]-a[i-1]);
    }
 
    int ans=n;
    int temp=n-k;
 
    if(temp<=0)
    {
        cout<<ans<<endl;
        return ;
    }
 
 
    while(temp)
    {
        ans+=(*st.begin() -1);
 
        st.erase(st.begin());
 
        temp--;
    }
 
 
    cout<<ans<<endl;
 
 
 
 
 
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   solve();
    return 0;
}