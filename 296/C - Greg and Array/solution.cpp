#include <bits/stdc++.h>
using namespace std;
#define int long long 
 
signed main()
{
    int n, m, k;
    cin >> n >> m >> k;
 
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
 
    vector<vector<int>> ap(m + 1);
    for (int i = 1; i <= m; i++)
    {
        int l, r, d;
        cin >> l >> r >> d;
        vector<int> temp = {l, r, d};
        ap[i ] = temp;
    }
 
    vector<int> diff(m + 2, 0);
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
 
        diff[x]++;
        diff[y + 1]--;
    }
 
    vector<int> operation(m + 1, 0);
    int sum = 0;
    for (int i = 1; i <= m; i++)
    {
        sum += diff[i];
        operation[i] = sum;
    }
 
    vector<int>puneet(100002,0);
 
 
    for(int i=1 ; i<=m ; i++)
    {
        int val=operation[i];
        int d=val*ap[i][2];
        puneet[ap[i][0]]+=d;
        puneet[ap[i][1]+1]-=d;
    }
 
    vector<int>prefix_sum(100001,0);
    int sum1=0;
    for(int i=1 ; i< 100001; i++)
    {
        sum1+=puneet[i];
        prefix_sum[i]=sum1;
    }
 
    for(int i=0 ; i< n ; i++)
    {
        cout<<a[i]+prefix_sum[i+1]<<" ";
    }
 
    cout<<endl;
    return 0;
}