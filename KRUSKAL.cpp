#include<bits/stdc++.h>
using namespace std;
int cha[1005],n,m;
struct canh{
	int dau, cuoi, trongso;
};
int makeNode(int i){
	if(cha[i] == -1) return i;
	return makeNode(cha[i]);
}
void Union(int x, int y){
	int X = makeNode(x);
	int Y = makeNode(y);
	if(X!=Y) cha[X] = Y;
}

bool cycle(vector<canh> a){
	memset(cha, -1, sizeof(cha));
	for ( int i = 0; i<a.size(); i++){
		int c = makeNode(a[i].dau);
		int d = makeNode(a[i].cuoi);
		if(d==c) return true;
		Union(c,d);
	}
	return false;
}
bool cmp(canh a, canh b){
	return a.trongso < b.trongso;
}

void Kruskal(canh *a){
	vector<canh> cay;
	sort(a,a+m,cmp);
	cay.push_back(a[0]);
	int u = a[0].trongso;
	for ( int i = 1; i<m; i++){
		cay.push_back(a[i]);
		if(!cycle(cay) ) u+=a[i].trongso;
		else{
			cay.pop_back();
			continue;
		}
		if(cay.size()>n-1) break;
	}
	cout << u << endl;
}



void solve(){
	cin >> n >> m;
	canh a[m];
	for ( int i = 0; i<m; i++){
		cin >> a[i].dau >> a[i].cuoi >> a[i].trongso;
	}
	Kruskal(a);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than



