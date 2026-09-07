#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >>n ;
    vector<int>a(n);
    for(int i=0 ; i<n ; i++)
    {
        cin >>a[i];
    }
 
    vector<int>ans;
 
    
    for(int i=0 ; i<n ; i++)
    {
        for(int j =0 ; j< a[i] ; j++)
        {
            ans.push_back(i+1);
        }
    }
 
    int m;
    cin >>m;
    for(int i=0 ; i<m ;i++)
    {
        int temp;
        cin >> temp;
        cout<<ans[temp-1]<<endl;
    }
}
 
int main()
{
 
    solve();
}