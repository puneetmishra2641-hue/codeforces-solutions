#include<bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int s, k, m;
    cin >> s >> k >> m;
 
    if (s <= k)
    {
        cout << max(0LL, s - m % k) << endl;
    }
    else
    {
        int temp = m % (2 * k);
 
        if (temp < k)
            cout << s - temp << endl;
        else
            cout << 2 * k - temp << endl;
    }
}
 
signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}