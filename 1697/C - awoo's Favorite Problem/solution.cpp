#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n ;
    cin>>n;
    string s,t;
    cin>>s>>t;
 
    map<char,set<int>>mp;
 
    for(int i=0 ; i<n ; i++)
    {
        mp[s[i]].insert(i);
    }
 
    string ds=t;
    sort(ds.begin(),ds.end());
    sort(s.begin(),s.end());
 
    if(ds!=s)
    {
        cout<<"NO"<<endl;
        return;
    }
 
 
    for(int i=0 ; i<n ; i++)
    {
        char temp=t[i];
        if(temp=='a')
        {
            int idx=*mp['a'].begin();
 
            if(mp['b'].size() && *mp['b'].begin()<idx) 
            {
                cout<<"NO"<<endl;
                return;
            }
 
              if(mp['c'].size() && *mp['c'].begin()<idx) 
            {
                cout<<"NO"<<endl;
                return;
            }
            mp['a'].erase(idx);
            continue;
 
        }
 
        if(temp=='b')
        {
             int idx=*mp['b'].begin();
              if(mp['c'].size() && *mp['c'].begin()<idx) 
            {
                cout<<"NO"<<endl;
                return;
            }
            mp['b'].erase(idx);
            continue;
 
 
        }
 
         int idx=*mp['c'].begin();
 
            if(mp['a'].size() && *mp['a'].begin()<idx) 
            {
                cout<<"NO"<<endl;
                return;
            }
 
            mp['c'].erase(idx);
 
 
 
    }
 
    cout<<"YES"<<endl;
 
   
 
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