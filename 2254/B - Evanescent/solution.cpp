#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
ll n;
cin>>n;
string s;
cin>>s;
ll cnt=1,u=0;
for(int i=1;i<n;i++){
    if(s[i]!=s[i-1])cnt++;
    if(i>1 && i<n && u<2){
        if(s[i]!=s[i-1]&&s[i-1]!=s[i-2]){
            u=1;
                    if(s[i]==s[i-2]){
            u=2;
        }
 
        }
    }
}
cnt-=u;
cout<<cnt<<endl;
 
 
 
 
    
}
int main() {
	// your code goes here
	
	int T;
	cin>>T;
 
	while(T--){
	    solve();
	}
 
}