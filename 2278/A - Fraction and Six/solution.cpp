#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n ,m;
    cin>>n>>m;
 
    string s ,p;
    cin>>s>>p;
 
    map<char,int>mp1,mp2;
 
    for(int i=0 ; i<n ; i++)
    {
        mp1[s[i]]++;
    }
 
    for(int i=0; i<m ; i++)
    {
        mp2[p[i]]++;
    }
 
 
    for(auto it:mp2)
    {
        char f=it.first;
        int val=it.second;
 
 
        if(mp1.count(f)==0  || (mp1[f]<val))
        {
            cout<<"NO"<<endl;
            return;
        }
 
        mp1[f]-=val;
 
 
        if(mp1[f]==0)
        {
            mp1.erase(f);
        }
    }
 
    if(mp1.size()!=3)
    {
        cout<<"NO"<<endl;
        return;
    }
 
    string as;
 
 
    for(auto it:mp1)
    {
 
        if(it.second!=1)
        {
            cout<<"NO"<<endl;
            return;
        }
 
        as.push_back(it.first);
 
    }
  
 
    sort(as.begin(),as.end());
 
    if(as=="isx")
    {
        cout<<"YES"<<endl;
        return;
    }
 
    cout<<"NO"<<endl;
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