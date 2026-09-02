#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n,m,c;
    cin >> n >> m >> c;
    vector<int>a(n),b(n);
    for(int i=0 ; i< n ; i++)
    {
        cin >> a[i];
    }
 
     for(int i=0 ; i< n ; i++)
    {
        cin >> b[i];
    }
 
    int start=0;
    int end=n-m;
 
 
    vector<int>diff(n+1,0);
    int puneet=0;
 
    while(end<n)
    {
        diff[start]+=b[puneet];
        diff[end+1]-=b[puneet];
        start++;
        end++;
        puneet++;
    }
 
    vector<int>prefix_sum(n+1,0);
    for(int i=0 ; i<n ; i++)
    {
        prefix_sum[i+1]=prefix_sum[i]+diff[i];
    }
 
    for(int i=0 ; i< n ; i++)
    {
        a[i]+=prefix_sum[i+1];
        a[i]%=c;
    }
 
    for(auto it : a)  cout<<it<<" ";
    cout<<endl;
    return ;
}
 
int main()
{
    solve();
 
    return 0;
}