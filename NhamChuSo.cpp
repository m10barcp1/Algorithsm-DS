#include<bits/stdc++.h>
using namespace std;

void solve(){
	string a,b;
	cin >> a >> b;
	int max = 0, min = 0;
	for ( int i = a.length()-1; i>=0;i--){
		if(a[i]=='5' || a[i] == '6') {
			max+= 6*pow(10,a.length()-1-i);
			min+= 5*pow(10,a.length()-1-i);
		}else{
			max+= (a[i]-'0')*pow(10,a.length()-1-i);
			min+= (a[i]-'0')*pow(10,a.length()-1-i);
		}
	}
	for ( int i = b.length()-1; i>=0;i--){
		if(b[i]=='5' || b[i] == '6') {
			max+= 6*pow(10,b.length()-1-i);
			min+= 5*pow(10,b.length()-1-i);
		}else{
			max+= (b[i]-'0')*pow(10,b.length()-1-i);
			min+= (b[i]-'0')*pow(10,b.length()-1-i);
		}
	}
	cout << min <<" " << max << endl;
	
}

int main(){
		solve();
}


