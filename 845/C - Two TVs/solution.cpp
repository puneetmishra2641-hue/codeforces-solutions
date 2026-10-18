#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    
    int n;
    cin>>n;
    vector<pair<int,int>>vp(n);
    for(int i=0 ; i<n;i++) cin>>vp[i].first>>vp[i].second;
 
    sort(vp.begin(),vp.end());
 
    int first=-1,second=-1;
 
    for(int i=0 ; i<(n-1) ;i++)
    {
        if((vp[i+1].first <= vp[i].second)|| (vp[i+1].first == ((vp[i].second))))
        {
            first=i;
            second=i+1;
            break;
        }
 
    }
 
    if(first==-1)
    {
        cout<<"YES"<<endl;
        return;
    }
 
 
    int l1=vp[first].second;
    int l2=vp[second].second;
 
    for(int i=second+1 ; i<n;i++)
    {
        pair<int,int>temp=vp[i];
 
        if(temp.first >(l1))
        {
            l1=temp.second;
            continue;
        }
 
        if(temp.first >(l2))
        {
            l2=temp.second;
            continue;
        }
 
        cout<<"NO"<<endl;
        return;
    }
 
    cout<<"YES"<<endl;
 
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   
  solve();
    return 0;
}