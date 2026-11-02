#include <bits/stdc++.h>
using namespace std;
#define int long long
 
vector<pair<int,int>> normalize(vector<int>& a, int m)
{
    vector<pair<int,int>> v;
 
    for(int x : a)
    {
        int cnt = 1;
 
        while(x % m == 0)
        {
            x /= m;
            cnt *= m;
        }
 
        if(!v.empty() && v.back().first == x)
        {
            v.back().second += cnt;
        }
        else
        {
            v.push_back({x, cnt});
        }
    }
 
    return v;
}
 
void solve()
{
    int n,m;
    cin >> n >> m;
 
    vector<int> a(n);
 
    for(int i = 0; i < n; i++)
        cin >> a[i];
 
    int k;
    cin >> k;
 
    vector<int> b(k);
 
    for(int i = 0; i < k; i++)
        cin >> b[i];
 
    auto A = normalize(a,m);
    auto B = normalize(b,m);
 
    if(A == B)
        cout << "Yes
";
    else
        cout << "No
";
}
 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while(t--)
        solve();
 
    return 0;
}