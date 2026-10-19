#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    int n,k1,k2;
    cin>>n>>k1>>k2;
 
    vector<int>a(n),b(n);
    for(int i=0 ; i<n;i++) cin>>a[i];
    for(int i=0 ; i<n;i++) cin>>b[i];
 
    vector<int>temp;
    for(int i=0 ; i<n;i++)
    {
        temp.push_back(abs(a[i]-b[i]));
    }
 
    int op=k1+k2;
 
    priority_queue<int>pq(temp.begin(),temp.end());
 
 
 
    bool puneet=false;
    while(op)
    {
        int top=pq.top();
 
        if(top==0)
        {
            puneet=true;
             break;
        }
      
        pq.pop();
        op--;
        top--;
        pq.push(top);
    }
 
    if(puneet)
    {
      
        if(op%2==0) cout<<0<<endl;
        else cout<<1<<endl;
        return;
 
    }
 
 
 
 
    int ans=0;
 
 
 
    while(!pq.empty())
    {
        int top=pq.top();
        ans+=(top*top);
        pq.pop();
    }
 
 
 
    cout<<ans<<endl;
    return ;
 
 
 
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   solve();
    return 0;
}