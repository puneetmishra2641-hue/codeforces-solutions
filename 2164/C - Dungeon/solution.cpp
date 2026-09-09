#include<bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n,m;
    cin >> n >> m;
 
    vector<int>a(n),b(m),c(m);
    vector<pair<int,int>>puneet;
    priority_queue<int,vector<int>,greater<int>>pq;
 
    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i];
       pq.push(a[i]);
    }
 
    for(int i= 0 ; i<m ; i++)
    {
        cin >> b[i];
        puneet.push_back({b[i],i});
    }
 
    for(int i=0 ; i< m ; i++)
    {
        cin >> c[i];
    }
 
    sort(a.begin(),a.end());
    sort(puneet.begin(),puneet.end());
 
    int cnt=0;
    int idx=0;
    set<pair<int,int>>st;
 
    while(cnt < m && !pq.empty())
    {
        int temp=pq.top();
        while(idx<m)
        {
            if(puneet[idx].first <= temp)
            {
                int i=puneet[idx].second;
                st.insert({c[i],i});
                idx++;
            }
 
            else break;
        }
 
        if(st.empty())
        {
            pq.pop();
            continue;
        }
 
        cnt++;
        auto it=st.end();
        it--;
       if(it->first  > 0) pq.push(max(temp,it->first));
       pq.pop();
        st.erase(it);
      
 
    }
 
 
 
    cout<<cnt<<endl;
 
 
 
    
 
}
 
signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
 
    return 0;
}