#include<bits/stdc++.h>
using namespace std;
long long chuyen(string a){
    long long res = 0; 
    long long base = 1; 
    int p = a.length()-1;
    while (p>=0) { 
        int x = a[p]-'0'; 
        p--;
        res += x * base; 
        base = base * 2; 
    } 
    return res; 
}

void solve(){
	string a,b;
	cin >> a >> b;
	cout << chuyen(a)*chuyen(b) << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than



