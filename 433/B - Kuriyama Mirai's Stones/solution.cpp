#include<bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n;
    cin >> n ;
    vector<int>v(n),u;
 
    for(int i =0  ; i<n ; i++)
    {
        cin >> v[i];
    }
    u=v;
    sort(u.begin(),u.end());
 
    vector<int>prefix_sum1(n+1),prefix_sum2(n+1);
 
    for(int i=0 ; i<n ; i++)
    {
        prefix_sum1[i+1]=prefix_sum1[i]+v[i];
        prefix_sum2[i+1]=prefix_sum2[i]+u[i];
    }
 
    int m;
    cin >> m ;
    for(int i=0 ; i<m ; i++)
    {
        int temp;
        cin >> temp;
         int l,r;
            cin >> l >>r;
        if(temp==1)
         {
 
            cout<<prefix_sum1[r]-prefix_sum1[l-1]<<endl;
 
        }
 
        else  cout<<prefix_sum2[r]-prefix_sum2[l-1]<<endl;
 
    }
 
    
 
}
 
signed main()
{
    solve();
 
    return 0;
}