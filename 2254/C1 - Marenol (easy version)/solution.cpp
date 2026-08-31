#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
void solve(){
ll n;
cin>>n;
string a,b;
cin>>a>>b;
 
if(n<=2 && a!=b)
{
    cout<<"NO"<<endl;
    return;
}
 
if(n<=2 && a==b)
{
    cout<<"YES"<<endl;
    return;
}
 
int even=0;
int odd=0;
 
for(int i=0 ; i<n ;i++)
{
    if(i%2==0 && a[i]=='1')
    {
        even++;
        
    }
    if(i%2!=0 && a[i]=='1')
    {
        odd++;
    }
}
 
int even1=0;
int odd1=0;
for(int i=0 ; i<n ;i++)
{
    if(i%2==0 && b[i]=='1')
    {
        even1++;
        
    }
    if(i%2!=0 && b[i]=='1')
    {
        odd1++;
    }
}
 
 
if((even+odd == even1+odd1)  && (even==even1) )
{
    cout<<"YES"<<endl;
    return;
    
}
 
cout<<"NO"<<endl;
 
 
 
    
}
int main() {
	
	
	int t;
	cin>>t;
 
	while(t--){
	    solve();
	}
 
}