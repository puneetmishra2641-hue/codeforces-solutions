#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    
    int n,m;
    cin >> n >> m;
    vector<int>a(n);
    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i];
    }
 
    if(m==1)
    {
        cout<<*max_element(a.begin(),a.end())<<endl;
        return ;
    }
 
    priority_queue<int>pq;
 
    int sum=0;
 
    for(int i=0 ; i<m-1 ; i++)
    {
        sum+=a[i];
        pq.push(a[i]);     
    }
 
    int maxi=LLONG_MIN;
 
    for(int i=m-1 ; i <n ; i++)
    {
        int curr=a[i]*m;
 
 
        if((curr-sum) > maxi)
        {
            maxi=curr-sum;
        }
 
        int temp=pq.top();
 
        if(temp <= a[i]) continue;
 
        sum-=temp;
        sum+=a[i];
        pq.pop();
        pq.push(a[i]);
    } 
 
 
    cout<<maxi<<endl;
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