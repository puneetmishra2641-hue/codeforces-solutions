#include<bits/stdc++.h>
using namespace std;
 
int ask(int a,int b)
{
    cout<<"? "<<a+1<<" "<<b+1<<endl;
    int x;
    cin>>x;
    return x;
}
 
int same(pair<int,int> a,pair<int,int> b)
{
    if(a.first==b.first || a.first==b.second)
        return a.first;
    return a.second;
}
 
int get(pair<int,int> a,int x)
{
    if(a.first==x)
        return a.second;
    return a.first;
}
 
void solve()
{
    vector<int>a={4,8,15,16,23,42};
 
    map<int,pair<int,int>>mp;
 
    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            mp[a[i]*a[j]]={a[i],a[j]};
        }
    }
 
    vector<int>ans(6);
 
    int x=ask(0,1);
    int y=ask(1,2);
 
    pair<int,int>p=mp[x];
    pair<int,int>q=mp[y];
 
    ans[1]=same(p,q);
    ans[0]=get(p,ans[1]);
    ans[2]=get(q,ans[1]);
 
    x=ask(3,4);
    y=ask(4,5);
 
    p=mp[x];
    q=mp[y];
 
    ans[4]=same(p,q);
    ans[3]=get(p,ans[4]);
    ans[5]=get(q,ans[4]);
 
    cout<<"! ";
 
    for(int i=0;i<6;i++)
    {
        cout<<ans[i]<<" ";
    }
 
    cout<<endl;
}
 
int main()
{
    solve();
    return 0;
}
 