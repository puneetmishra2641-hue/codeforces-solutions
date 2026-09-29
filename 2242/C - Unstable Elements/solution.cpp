#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n ,k;
    cin >> n >>k ;
    vector<int>a(n);
    map<int,int>mp;
    for(int i=0 ; i<n ; i++) 
    {
        cin >>a[i];
         mp[a[i]]++;
    }
 
    int ans=0;
    bool temp=true;
set<int>ans1;
    if(n<=k)
    {
        if((k-n)%mp.size()==0) 
        ans1.insert(mp.size());
        
    }
    int x=0;
 
 
 
while(!mp.empty())
{
    bool puneet = false;
 
    for(auto it = mp.begin(); it != mp.end(); )
    {
        it->second--;
        x++;
 
        if(it->second == 0)
        {
            it = mp.erase(it);
            temp=false;
            puneet = true;
        }
        else
        {
            ++it;
        }
    }
 
   
        if(k >= (n-x))
        {
            if(!mp.empty() && (k-n+x)%mp.size()==0){
                ans1.insert(mp.size());
                
            }
        }
    
}
    cout<<ans1.size()<<endl;
 
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