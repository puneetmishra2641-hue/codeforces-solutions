#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n, k;
    cin >> n >> k;
 
    vector<int> a(n);
 
    for (int i = 0; i < n; i++)
        cin >> a[i];
 
    if (k == 4)
    {
        int a4 = 1e8;
        int count = 0;
 
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 4 == 0)
            {
                a4 = 0;
                break;
            }
 
            a4 = min(a4, 4 - (a[i] % 4));
        }
 
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
                count++;
        }
 
        if (count >= 2)
            cout << 0 << endl;
        else
        {
            int ans;
 
            if (count == 0)
                ans = min(a4, 2);
            else
                ans = min(a4, 1);
 
            cout << ans << endl;
        }
    }
    else
    {
        int ans = 1e8;
 
        for (int i = 0; i < n; i++)
        {
            int p = a[i] % k;
 
            if (p == 0)
            {
                ans = 0;
                break;
            }
 
            ans = min(ans, k - p);
        }
 
        cout << ans << endl;
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--)
        solve();
 
    return 0;
}