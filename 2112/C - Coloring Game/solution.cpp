#include<bits/stdc++.h>
using namespace std;
#define int long long
 
void solve()
{
    int n;
    cin >> n ;
    vector<int>a(n);
 
    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i];
    }
 
    int temp=a[n-1];
    int ans=0;
 
    vector<std::vector<int>::iterator>vp;
    auto it2=a.begin();
 
    for(int i=0 ; i<=n ; i++)
    {
        vp.push_back(it2);
       if(i<n)  it2++;
    }
    
 
    for(int i=0 ; i<n ; i++)
    {
        for(int j=i+1; j<n ; j++)
        {
            int num1=a[i];
            int num2=a[j];
            int puneet=max(num2,temp-num1-num2+1);
            int puneet2=num1+num2;
 
            auto m1=lower_bound(a.begin(),a.end(),puneet);
            auto m2=lower_bound(a.begin(),a.end(),puneet2);
            m1=max(m1,vp[j+1]);
            m2--;
            if(m1==a.end()) continue;
 
           if(m2 < m1)
           {
            continue;
           }
 
           ans+=(m2-m1+1);
 
 
 
        }
    }
 
    cout<<ans<<endl;
}
 
signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}