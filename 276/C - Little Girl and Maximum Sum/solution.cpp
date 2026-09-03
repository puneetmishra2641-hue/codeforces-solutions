#include <bits/stdc++.h>
using namespace std;
#define int long long
 
signed main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
 
    vector<int> dp(n + 2, 0);
 
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
 
        dp[l]++;
        dp[r + 1]--;
    }
 
    vector<int> ps(n + 1, 0);
    int sum = 0;
 
    for (int i = 1; i <= n; i++)
    {
        sum += dp[i];
        ps[i] = sum;
    }
 
    sort(ps.rbegin(), ps.rend());
 
    sort(a.rbegin(), a.rend());
 
    int ans = 0;
 
    for (int i = 0; i < n; i++)
    {
        ans += (a[i] * ps[i]);
    }
 
    cout << ans << endl;
    return 0;
}