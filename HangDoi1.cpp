#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin >> n;
	vector<int> a;
	while(n--){
		int z;
		cin >> z;
		if(z==1){
			cout << a.size() << endl;
		}else if(z==2){
			if(!a.empty()) cout << "NO";
			else cout << "YES";
			cout << endl;
		}else if(z==3){
			int k;
			cin >> k;
			a.push_back(k);
		}else if(z==4){
			if(!a.empty())
			a.erase(a.begin());
		}else if(z==5){
			if (!a.empty()){
				cout << a.front();
			}else cout << "-1";
			cout << endl;
		}else if(z==6){
			if(!a.empty()){
				cout << a.back();
			}else cout << "-1";
			cout << endl;
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
//NV Than

