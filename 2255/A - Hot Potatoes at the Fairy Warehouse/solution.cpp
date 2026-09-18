#include <bits/stdc++.h>
using namespace std;
#define int long long
 
#define a s
 
void solve()
{
 
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
 
    int cnt1=0,cnt2=0;
 
    for(int i=0 ; i<2*n ; i++)
    {
       if(i==2*n-1)
       {
           if(a[i]=='1' && a[0]=='1') cnt1++;
           continue;
       }
 
       if(a[i]=='0'  || a[i+1]=='0') continue;
 
       if(i%2==0)  cnt2++;
       else cnt1++;
 
       
    }
 
    int pt1 = 0, pt2 = 0;
 
    for (int i = 0; i < 2*n; i++)
    {
        if (i == 2*n - 1)
        {
            if (s[i] == '1' && s[0] == '0')
            {
                pt2++;
                continue;
            }
        }
 
        if (s[i] == '1' && s[i + 1] == '0')
 
        {
            if (i % 2 != 0)
            {
                pt2++;
                continue;
            }
 
            pt1++;
        }
    }
 
    cout << pt1+cnt1 << " " << pt2+cnt2<< endl;
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