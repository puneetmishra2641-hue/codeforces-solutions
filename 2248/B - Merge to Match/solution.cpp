#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
void solve()
{
    int n ,m;
    cin >> n >> m;
 
    vector<int> a(n) , b(m);
 
    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i];
    }
 
    for(int i=0 ; i<m ; i++)
    {
        cin >> b[i];
    }
 
    if(n < 2*m)
    {
        cout << "NO" << endl;
        return;
    }
 
    sort(a.begin() , a.end());
    sort(b.begin() , b.end());
 
    for(int i=0 ; i<m ; i++)
    {
        if(a[i] >= b[i])
        {
            cout << "NO" << endl;
            return;
        }
    }
 
    int j = m;
 
    for(int i=0 ; i<m ; i++)
    {
        while(j<n && a[j] <= b[i])
        {
            j++;
        }
 
        if(j == n)
        {
            cout << "NO" << endl;
            return;
        }
 
        j++;
    }
 
    cout << "YES" << endl;
}
 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while(t--)
    {
        solve();
    }
 
    return 0;
}