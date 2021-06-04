#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s1,s2;
    cin >> s1 ;
   	s2=s1;
   	for(int i=0;i<s1.length();i++){
   		s2[s1.length()-i-1]=s1[i];
   	}
    s1='a'+s1;
    s2='a'+s2;
    int n=s1.length(),m=s2.length();
    int f[n+1][m+1];
    for(int i=0;i<n;i++)
    	f[i][0]=0;
    for(int i=0;i<m;i++)
    	f[0][i]=0;
    for(int i=1;i<n;i++){
    	for(int j=1;j<m;j++){
    		if(s1[i]==s2[j])
    			f[i][j]=f[i-1][j-1]+1;
    		else
    			f[i][j]=max(f[i-1][j],f[i][j-1]);
		} 
	}
	cout <<n-1- f[n-1][m-1]<< endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than



