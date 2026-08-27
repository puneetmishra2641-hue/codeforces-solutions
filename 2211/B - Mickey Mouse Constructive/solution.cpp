#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int x,y;
    cin >> x>> y;
 
    if(x==0 || y==0)
    {
        int p=max(x,y);
        int k=0;
        for(int i=1 ; i<=p ;i++)
        {
            if(p%i==0) k++;
        }
 
        cout<<k<<endl;
 
        if(x)
        {
            for(int i=0 ; i<x ; i++) cout<<1<<" ";
            cout<<endl;
            return;
        }
 
        for(int i=0 ; i<y ; i++) cout<<-1<<" ";
        cout<<endl;
        return;
    }
 
    if(x==y)
    {
        cout<<1<<endl;
        while(x)
        {
            cout<<1<<" ";
            x--;
        }
        while(y)
        {
            cout<<-1<<" ";
            y--;
        }
        cout<<endl;
        return;
    }
 
    int a=min(x,y);
    int b=max(x,y);
    int temp=b-a;
    int count=0;
    for(int i=1 ; i<=temp;i++)
    {
        if(temp%i==0 ) count++;
    }
 
   cout<<count<<endl;
   while(x)
   {
    cout<<1<<" ";
    x--;
   }
 
   while(y)
   {
    cout<<-1<<" ";
    y--;
   }
 
   cout<<endl;
 
 
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}