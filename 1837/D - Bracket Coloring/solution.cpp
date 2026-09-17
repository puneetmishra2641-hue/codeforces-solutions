#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    vector<int> a(n);
 
    a[0] = (s[0] == '(' ? 1 : -1);
 
    for (int i = 1; i < n; i++)
    {
        a[i] = a[i - 1] + (s[i] == '(' ? 1 : -1);
    }
 
    if (a[n - 1] != 0)
    {
        cout << -1 <<endl;
        return;
    }
 
    if (*min_element(a.begin(), a.end()) == 0)
    {
        cout << 1 <<endl;
 
        for (int i = 0; i < n; i++)
            cout << 1 << ' ';
 
        cout <<endl;
        return;
    }
 
    if (*max_element(a.begin(), a.end()) == 0)
    {
        cout << 1 <<endl;
 
        for (int i = 0; i < n; i++)
            cout << 1 << ' ';
 
        cout <<endl;
        return;
    }
 
    vector<int> ans(n);
 
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
            ans[i] = 1;
        else if (a[i] < 0)
            ans[i] = 2;
        else
            ans[i] = (a[i - 1] > 0 ? 1 : 2);
    }
 
    cout << 2 << endl;
 
    for (int i = 0; i < n; i++)
        cout << ans[i] << ' ';
 
    cout << endl;
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