#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n,m,q;
    cin>>n>>m>>q;
 
    string s,t;
    cin>>s>>t;
 
vector<int>idx;
 
    for(int i=0 ; i < (n-m+1);i++)
    {
        bool puneet=true;
 
        for(int j=0 ; j<m;j++)
        {
            if(s[j+i]!=t[j])
            {
                puneet=false;
                break;
            }
        }
 
        if(puneet)
        {
            idx.push_back(i);
        }
 
    }
 
 
 
 
    for(int i=0 ; i<q;i++)
    {
        int l,r;
        cin>>l>>r;
 
        if((r-l+1) <m)
        {
            cout<<0<<endl;
           continue;
        }
 
        l--;
        r--;
 
        auto it=lower_bound(idx.begin(),idx.end(),l);
        int val=r-m+1;
        auto it2=upper_bound(idx.begin(),idx.end(),val);
        it2--;
 
        cout<<(it2-it)+1<<endl;
 
 
 
      
 
 
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
  solve();
    return 0;
}