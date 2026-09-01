#include <bits/stdc++.h>
using namespace std;
#define int long long
int s(int n ){
    int sum=0;
    while(n>0){
         sum+=(n%10);
        n=n/10;
    
   
}
 return sum;
    }
       
signed main() {
	int t;
	cin>>t;
	while(t--){
	    int y;
	    int count=0;
	    cin>>y;
	    for(int i=y+1;i<=y+81;i++){
	        if(i-s(i)==y)count++;
	    }
	    cout<<count<<endl;
 
	}
 
}