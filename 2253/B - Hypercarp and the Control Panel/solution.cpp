#include <bits/stdc++.h>
using namespace std;
 
void solve() {
	
    int n;
   cin >> n;
   vector<int> a(n + 2, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int num = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] != a[i + 1])
        {
            num++;
        }
    }
    int ans = num;
    for (int i = 1; i < n; i++)
    {
        int mx = num;
        if (a[i - 1] == a[i] && a[i + 1] == a[i + 2] && a[i] != a[i + 1])
        {
            mx += 2;
        }
        else if (a[i - 1] == a[i] && a[i + 1] != a[i + 2] && a[i] != a[i + 2] && a[i] != a[i + 1])
        {
            mx++;
        }
        else if (a[i + 1] != a[i] && a[i + 1] != a[i - 1] && a[i] != a[i + 2] && a[i + 1] == a[i + 2])
        {
            mx++;
        }
        ans = max(mx, ans);
    }
    cout << ans << endl;
}
 
int main() {
	int t = 0; 
	cin >> t;
	while (t--) 
	solve();
	return 0;
}