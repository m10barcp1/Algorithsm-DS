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
		if(s=="PUSHFRONT"){
			int t;
			cin >> t;
			a.insert(a.begin(),t);
		}else if(s=="PRINTFRONT"){
			if(!a.empty()) cout << a.front();
			else cout << "NONE";
			cout << endl;
		}else if(s=="PRINTBACK"){
			if(!a.empty()) cout << a.back();
			else cout << "NONE";
			cout << endl;
		}else if(s=="PUSHBACK"){
			int t;
			cin >> t;
			a.push_back(t);
		}else if(s=="POPFRONT"){
			if(!a.empty()) a.erase(a.begin());
		}else if(s=="POPBACK"){
			if(!a.empty()) a.pop_back();
		}
		
		
	}
}
//NV Than

