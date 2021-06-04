#include <bits/stdc++.h>
using namespace std;
int n, k;
void solve(){
	cin >> n >> k;
	vector<string> res;
	vector<string> sinhnp[100];
	bool oke = false;
	string s;
	int count = 0;
	for ( int i = 1; i<=n; i++) s[i] = 'A';
	int  x = 0;
	while(!oke){
		string m;
		int i = n;
		while(i>0 && s[i] == 'B') i--;
		s[i] = 'B';
		if(i>0){
			int check = 0;
			for ( int j = i+1; j<=n; j++){
				s[j] = 'A';
			}
			for ( int i = 1; i<= n; i++) {
				m[i] = s[i];
			}
			int max = 0, dem = 0;
			for(int i = 1; i<=n; i++) {
				if(s[i]=='A')	dem++;
				else			dem = 0;
				if(dem>max) 	max = dem;  
			}
			if(max == k) count++;
		}else oke = true; 
	}
	cout << count << endl;
	oke = false;
	for ( int i = 1; i<=n; i++) s[i] = 'A';
	while(!oke){
		string m;
		int i = n;
		while(i>0 && s[i] == 'B') i--;
		s[i] = 'B';
		if(i>0){
			int check = 0;
			for ( int j = i+1; j<=n; j++){
				s[j] = 'A';
			}
			for ( int i = 1; i<= n; i++) {
				m[i] = s[i];
			}
			int max = 0, dem = 0;
			for(int i = 1; i<=n; i++) {
				if(s[i]=='A')	dem++;
				else{
					dem = 0;
				}
				if(dem>max) max = dem;  
			}
			if(max == k) {
				for ( int i = 1;i<=n; i++) cout << s[i];
				cout << endl;
			}
		}else oke = true; 
	}
	
}

int main(){
		solve();
}
// NV Than
