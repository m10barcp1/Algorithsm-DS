#include <bits/stdc++.h>
using namespace std;
char a[1005][1005];
int k,n,m;
string Dict[100005];
int Check[1005][1005]={{0}};
string s;
int kt = 0;

int sol(int i, int j){
    Check[i][j]=1;
    s = s+a[i][j];
    for(int l = 0; l < k; l++){
        if(s.compare(Dict[l]) == 0) {
			cout<<s<<" "; 
			kt = 1;
		}
    }
    for(int h = i-1; h < m; h++){
        if(h > i+1){
            h--;
            break;
        } 
        for(int c = j-1; c < n; c++){
            if(c > j+1){
                c--;
                break;
            }
            if(h >= 0 && c >= 0 && Check[h][c] == 0){
                sol(h,c);
            }
        }
    }
    Check[i][j] = 0;
    s.erase(s.length()-1);
}

int main (){
    int T;
    cin>>T;
    while(T--){
        cin>>k>>m>>n;
        kt = 0;
        for(int i = 0; i < k; i++){
            cin>>Dict[i];
            cin.ignore();
        } 
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cin>>a[i][j];
                cin.ignore();
                Check[i][j] = 0;
            }
        }
        s="";
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                sol(i,j);
            }
        }
        if(kt == 0) cout<<"-1";
        cout<<endl;
    }
}
