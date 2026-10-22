#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
template <typename T>
using ordered_multiset = tree<
    T,
    null_type,
    less_equal<T>,
    rb_tree_tag,
    tree_order_statistics_node_update
>;
 
#define int long long
 
void solve() {
    
    int n ;
    cin>>n;
    vector<int>a(n),b(n);
 
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
 
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
 
    vector<int>temp;
    int ans=0;
 
    ordered_multiset<int>os;
 
    for(int i=0; i< n ; i++)
    {
        int val=a[i]-b[i];
 
       ans+=os.order_of_key(val);
       os.insert(b[i]-a[i]);
 
 
 
 
    }
 
    cout<<ans<<endl;
   
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   solve();
 
    return 0;
}