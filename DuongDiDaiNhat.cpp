#include <bits/stdc++.h>
using namespace std;
int n,m;
int matrix[100][100];
int sol[100][100];
int res;

void Try(int i,int temp){
    res=max(temp,res);
    for(int j=0;j<n;j++){
        if(matrix[i][j] == 1 && sol[i][j] == 0){
            sol[i][j]=1;
            sol[j][i]=1;
            Try(j,temp+1);
            sol[i][j]=0;
            sol[j][i]=0;
        }
    }  
}
void solve(){
		res=0;
		cin>>n>>m;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++) {
				matrix[i][j]=0; 
				sol[i][j]=0;
			}
		}
		int x,y;
		for(int i=0;i<m;i++){
			cin>>x>>y;
			matrix[x][y]=1;
			matrix[y][x]=1;
		}
		for(int k=0;k<n;k++){
        	Try(k,0);
   		}
		cout<<res<<endl;
}
int main (){
    int T;
    cin>>T;
    while(T--){
        solve();
	}
}
