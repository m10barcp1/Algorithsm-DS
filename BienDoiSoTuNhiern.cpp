#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	set <int> s;
    queue<pair <int, int> > q;
    s.insert(n);
    q.push({n,0});
    long long res = 0;
    while(!q.empty()){
        pair<int, int> x = q.front(); q.pop();
        if(x.first == 1){
        	int res = x.second;
        	break;
		}
        if(x.first - 1 == 1){
        	res = x.second + 1;
        	break;
		}
        if(s.find(x.first - 1) == s.end()){
            s.insert(x.first - 1);
            q.push({x.first - 1, x.second + 1});
        }
        for(int i = 2 ; i * i <= x.first ; i++){
            if(x.first % i == 0){
                if(s.find(x.first / i) == s.end()){
                    q.push({x.first / i, x.second + 1});
                    s.insert(x.first / i);
                }
            }
        }
    }
    cout << res << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than



