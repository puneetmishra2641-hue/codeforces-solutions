#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n,k;
    cin >> n >> k;
    vector<int>h(n);
 
    for(int i=0 ; i<n ; i++)
    {
        cin >> h[i];
    }
 
 
    int sum=0;
 
    for(int i=0 ; i<k ;i++)
    {
        sum+=h[i];
    }
 
    int minans=sum;
    int minidx=k-1;
 
    for(int i = k ;i<n ; i++)
    {
        sum-=h[i-k];
        sum+=h[i];
 
        if(sum < minans)
        {
            minans=sum;
            minidx=i;
        }
    }
 
   cout<<minidx-k+2<<endl;
   return ;
}
 
int main()
{
    solve();
    return 0;
}