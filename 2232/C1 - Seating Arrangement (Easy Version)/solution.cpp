#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n, s, x;
    cin >> n >> s >> x;
    string u;
    cin >> u;
 
    int cnt = 0;
    for (auto it : u)
    {
        if (it == 'A')
            cnt++;
    }
 
    int ans = 0;
 
    for (int i = 0; i <= cnt; i++)
    {
        int temp = 0;
 
        int spaces = 0;
        int curr = 0;
 
        int chairs = s;
        for (auto it : u)
        {
            if (it == 'E')
            {
                if (spaces == 0)
                    continue;
                spaces--;
                curr++;
                continue;
            }
            if (it == 'I')
            {
                if (chairs == 0)
                    continue;
                chairs--;
                curr++;
                spaces += x;
                spaces--;
                continue;
            }
            if (it == 'A')
            {
                if (temp < i)
                {
                    if (chairs == 0)
                        continue;
                    chairs--;
                    curr++;
                    spaces += x;
                    spaces--;
                    temp++;
                    continue;
                }
 
                if (spaces == 0)
                    continue;
                spaces--;
                curr++;
            }
        }
 
        ans = max(ans, curr);
    }
 
    cout << ans << endl;
    return;
}
 
int main()
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