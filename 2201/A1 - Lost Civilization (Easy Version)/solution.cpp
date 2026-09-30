#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    
    int n ;
    cin >> n ;
    vector<int>a(n);
    map<int,int>mp;
    for(int i=0 ; i<n ; i++) 
  {
    cin >>a[i];
    mp[i]=a[i];
  }
 
 
    int ans=0;
while(true)
{
    if(mp.size() <= 1) break; 
    
    bool y = false;
    auto it = mp.end();
    it--;
    
    for(auto i = it; i != mp.begin(); )
    {
        auto prev_it = i;
        prev_it--; 
        
        if(i->second == (prev_it->second + 1))
        {
            int temp = i->second;
            auto p = i;
         
            while(p != mp.end() && p->second == temp)
            {
                p = mp.erase(p);
                y = true;
            }
            i = prev_it; 
        }
        else
        {
            i--;
        }
    }
 
    if(!y || mp.size() <= 1) break;
}
 
    cout<<mp.size()<<endl;
 
 
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