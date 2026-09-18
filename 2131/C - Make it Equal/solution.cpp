#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n, k;
    cin >> n >> k;
 
    vector<int> a1(n), a2(n);
 
    for (int i = 0; i < n; i++)
    {
        cin >> a1[i];
        a1[i] = ((a1[i] % k) + k) % k;
        a1[i] = min(a1[i], (k - a1[i]) % k);
    }
 
    for (int i = 0; i < n; i++)
    {
        cin >> a2[i];
        a2[i] = ((a2[i] % k) + k) % k;
        a2[i] = min(a2[i], (k - a2[i]) % k);
    }
 
    sort(a1.begin(), a1.end());
    sort(a2.begin(), a2.end());
 
    if (a1 == a2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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