#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
 
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
 
    vector<int> an(n, LLONG_MAX);
 
    map<int, int> mp;
 
    for (int i = 0; i < (n - 4); i++)
    {
 
        int sum = a[i] + a[i + 2] - a[i + 4];
 
        an[i] = sum;
 
        
    }
 
    int ans = 0;
 
    
    for(int i=0 ; i<(n-4) ;i++)
    {
        int cnt=0;
 
        if(mp.count(an[i])) cnt=mp[an[i]];
 
        if((i-2)>=0 && an[i-2]==an[i]) cnt--;
        if((i-4)>=0 && an[i-4]==an[i]) cnt--;
 
        ans+=cnt;
 
 
 
 
        mp[an[i]]++;
 
 
    }
 
    cout << ans << endl;
}
 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}