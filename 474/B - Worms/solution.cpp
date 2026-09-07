#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n ;
    vector<int>a(n);
 
    vector<int>ps(n+1);
 
    for(int i=0 ; i<n ; i++)
    {
        cin >> a[i];
        ps[i+1]=ps[i]+a[i];
    }
 
    int m;
    cin >> m ;
 
    for(int i=0 ; i<m ; i++)
    {
        int temp;
        cin >> temp;
 
        int start=0;
        int end=n;
        int ans=0;
 
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(ps[mid] < temp)
            {
                start=mid+1;
                continue;
            }
 
            ans=mid;
            end=mid-1;
            
        }
 
        cout<<ans<<endl;
    }
 
 
}
 
int main()
{
 
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}