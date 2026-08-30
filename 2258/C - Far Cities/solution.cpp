#include<bits/stdc++.h>
using namespace std;
 
int ask(int u,int v,int d)
{
    cout<<"? "<<u<<" "<<v<<" "<<d<<endl;
    cout.flush();
 
    int m;
    cin >> m;
 
    if(m == -1)
    {
        exit(0);
    }
 
    return m;
}
 
void solve()
{
    int n;
    cin >> n;    
 
    int curr=2;
    int dis=1;
 
    int store=1;
   
    while(curr <= n && dis<=n-1)
    {
        int temp=ask(1,curr,dis);
 
        if(temp && dis==n-1)
        {
            cout<<"! "<<1<<" "<<curr<<" "<<n-1<<endl;
            cout.flush();
            return;
        }
 
        if(temp==1)
        {
            store=curr;
            dis++;
            continue;
        }
        else
        {
            curr++;
            continue;
        }
    }
 
    curr=1;
    dis--;
    int store2=1;
 
    while(curr <= n && dis<=n-1)
    {
        int temp=ask(store,curr,dis);
 
        if(temp && dis==n-1)
        {
            cout<<"! "<<store<<" "<<curr<<" "<<n-1<<endl;
            cout.flush();
            return;
        }
 
        if(temp==1)
        {
            store2=curr;
            dis++;
            continue;
        }
        else
        {
            curr++;
            if(curr==store) curr++;
            continue;
        }
    }
 
    cout<<"! "<<store<<" "<<store2<<" "<<dis-1<<endl;
    cout.flush();
}
 
int main()
{
    int t;
    cin >> t;
 
    while(t--)
    {
        solve();
    }
 
    return 0;
}