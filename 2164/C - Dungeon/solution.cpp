#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n, m;
    cin >> n >> m;
 
    vector<int> b(m), c(m);
    vector<pair<int, int>> puneet;
    priority_queue<int, vector<int>, greater<int>> pq;
 
    for (int i = 0; i < n; i++)
    {
        int te;
        cin >> te;
        pq.push(te);
    }
 
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        puneet.push_back({b[i], i});
    }
 
    for (int i = 0; i < m; i++)
    {
        cin >> c[i];
    }
 
    sort(puneet.begin(), puneet.end());
 
    int cnt = 0;
    int idx = 0;
    priority_queue<int>pq1;
 
    while (cnt < m && !pq.empty())
    {
        int temp = pq.top();
        while (idx < m)
        {
            if (puneet[idx].first <= temp)
            {
                int i = puneet[idx].second;
               pq1.push(c[i]);
                idx++;
            }
 
            else
                break;
        }
 
        if (pq1.empty())
        {
            pq.pop();
            continue;
        }
 
        cnt++;
        int val=pq1.top();
        if (val > 0)
            pq.push(max(temp, val));
        pq.pop();
        pq1.pop();
    }
 
    cout << cnt << endl;
}
 
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
 
    return 0;
}