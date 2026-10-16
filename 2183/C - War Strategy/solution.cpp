#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int start = 1;
    int end = n;
    int ans = 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int left = k - 1;
        int right = n - k;
        mid--;
        if (min(left, right) >= (((mid - 1) / 2) + 1))
        {
            int fleft = ((mid - 1) / 2) + 1;
            int fright = mid / 2;
            int tdays = 0;
            if (mid > 0)
                tdays = min(fleft, fright) + 2 * max(fleft, fright) - 1;
            mid++;
            if (tdays > m)
            {
                end = mid - 1;
                continue;
            }
            ans = mid;
            start = mid + 1;
            continue;
        }
        int left1 = min(left, right);
        int right1 = mid - left1;
        int tdays = 0;
        if (mid > 0)
            tdays = min(left1, right1) + 2 * max(left1, right1) - 1;
        if (tdays > m)
        {
            mid++;
            end = mid - 1;
            continue;
        }
        mid++;
        ans = mid;
        start = mid + 1;
        continue;
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