#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
int n, q;
string s;
int arr1[200005], arr2[200005];
int pref1[200005], pref2[200005];
 
void solve()
{
    cin >> n >> q >> s;
    s = " " + s;
 
    for (int i = 1; i <= n; i++)
    {
        arr1[i] = (s[i] == ((i % 2) + '0'));
        arr2[i] = (s[i] != ((i % 2) + '0'));
    }
 
    pref1[0] = 0;
    pref2[0] = 0;
 
    for (int i = 1; i <= n; i++)
    {
        pref1[i] = pref1[i - 1];
        pref2[i] = pref2[i - 1];
 
        if (arr1[i] == 1 && arr1[i] != arr1[i - 1])
        {
            pref1[i]++;
        }
        if (arr2[i] == 1 && arr2[i] != arr2[i - 1])
        {
            pref2[i]++;
        }
    }
 
    while (q--)
    {
        int l, r, k;
        cin >> l >> r >> k;
 
        int count1 = pref1[r] - pref1[l - 1] + (arr1[l] == 1 && arr1[l - 1] == 1);
        int count2 = pref2[r] - pref2[l - 1] + (arr2[l] == 1 && arr2[l - 1] == 1);
 
        if (min(count1, count2) <= k)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}
 
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}