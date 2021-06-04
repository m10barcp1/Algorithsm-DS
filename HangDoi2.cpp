#include<bits/stdc++.h>
using namespace std;

void solve(){
	
}
int main(){
	int t; cin >> t;
	cin.ignore();
	vector<int> a;
	while(t--){
		string s;
		
		cin >> s;
		if(s=="PUSH"){
			int t;
			cin >> t;
			a.push_back(t);
		}else if(s=="PRINTFRONT"){
			if(!a.empty()) cout << a.front();
			else cout << "NONE";
			cout << endl;
		}else if(s=="POP"){
			if(!a.empty())
			a.erase(a.begin());
		}
	}
}
//NV Than

