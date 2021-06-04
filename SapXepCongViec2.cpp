#include<bits/stdc++.h>
using namespace std;

void solve(){
		vector < pair<int,int> > v;
        priority_queue<int , vector<int> ,greater<int> > res;
        int n;
        cin >> n;
        int jobID, deadLine, proFit;
        for(int i = 0; i < n; i++){
            cin >> jobID >> deadLine >> proFit;
        	v.push_back(make_pair(deadLine,proFit));
        }
        sort(v.begin(), v.end());
        int deadID = 1;
        res.push(v[0].second);
        int tong = 0;
        for(int i = 1; i < n; i++){
            while(deadID == v[i].first){
                if(v[i].second > res.top()){
                    res.pop();
                    res.push(v[i].second);
                }
                i++;
                if(i==n) break;
            }
            if(i==n) break;
            deadID++;
            res.push(v[i].second);
        }
        int dem = res.size();
        while(res.size() != 0){
            tong+=res.top();
            res.pop();
        }
        cout << dem << " " << tong << endl;
        v.clear();	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than



