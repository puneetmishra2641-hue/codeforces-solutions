#include <bits/stdc++.h>
using namespace std;
 
bool check(int x, vector<int> a, vector<int> b)
{
    while (x--)
    {
        a.pop_back();
        b.pop_back();
    }
 
    reverse(b.begin(), b.end());
 
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] >= b[i])
            return false;
    }
 
    return true;
}
 
void solve()
{
    int n, m;
    cin >> n >> m;
 
    vector<int> a(n), b(n);
 
    a[0] = 1;
 
    for (int i = 1; i < n; i++)
        cin >> a[i];
 
    for (int i = 0; i < n; i++)
        cin >> b[i];
 
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());
 
    int l = 0, r = n;
 
    while (l < r)
    {
        int mid = (l + r) / 2;
 
        if (check(mid, a, b))
            r = mid;
        else
            l = mid + 1;
    }
 
    cout << l << endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--)
        solve();
}