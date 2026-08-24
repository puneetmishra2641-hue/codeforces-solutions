#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
 
    for (int i = 0; i < n; i++)
        cin >> a[i];
 
    unordered_set<int> st(a.begin(), a.end());
    int temp = n;
 
    for (int i = 0; i <= n; i++)
    {
        if (!st.count(i))
        {
            temp = i;
            break;
        }
    }
 
    unordered_set<int> us;
    int start = 0;
    int end = 0;
    vector<pair<int, int>> vp;
 
    for (int i = 0; i < n; i++)
    {
        if (a[i] < temp)
        {
            us.insert(a[i]);
        }
        if (us.size() == (temp))
        {
            vp.push_back({start, end});
            start = end + 1;
            us.clear();
        }
        end++;
    }
    vp[vp.size()-1].second=n-1;
 
    if (vp.size() < 2)
    {
        cout << -1 << endl;
        return;
    }
 
    cout << vp.size() << endl;
    for (auto &i : vp)
        cout << i.first+1 << " " << i.second+1 << endl;
    return;
}
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}