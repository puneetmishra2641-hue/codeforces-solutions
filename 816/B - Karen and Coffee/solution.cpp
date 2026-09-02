#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,k,q;
    cin >> n >> k >>q ;
 
   
 
    vector<int>diff(200002,0);
 
    for(int i=0 ; i< n ; i++)
    {
        int l,r;
        cin >> l >> r;
       
        diff[l]++;
        diff[r+1]--;
 
    }
 
    vector<int>puneet(200002,0);
    int sum=0;
 
    for(int i=0 ; i< 200002 ; i++)
    {
        sum+=diff[i];
        puneet[i]=sum;
        if(puneet[i]>=k) puneet[i]=1;
        else puneet[i]=0;
    }
 
    vector<int>prefix_sum(200003,0);
    for(int i=0 ; i< 200002 ; i++)
    {
        prefix_sum[i+1]=prefix_sum[i]+puneet[i];
    }
    for(int i=0 ; i< q ; i++)
    {
        int a,b;
        cin >> a >> b;
 
        cout<<prefix_sum[b+1]-prefix_sum[a]<<endl;
 
    }
 
    return 0;
 
}