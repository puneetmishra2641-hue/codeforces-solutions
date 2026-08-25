#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
 
        if(n==2) 
        {
            cout<<2<<endl;
            continue;
        }
        if(n==3)
        {
            cout<<3<<endl;
            continue;
        }
 
      if(n%2==0)
      {
         cout<<0<<endl;
         continue;
      }
 
       cout<<1<<endl;
 
 
    }
}