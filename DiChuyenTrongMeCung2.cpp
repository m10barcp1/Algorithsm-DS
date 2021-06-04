#include <bits/stdc++.h>
#include <string.h>
#include <string>

#define pb push_back
#define FOR(i,n) for(i = 0; i < n; i++)
using namespace std;
int t,n,kt = 0;
int	a[100][100],test[100][100];
string x[10000];
int l1[10],l2[10];
void sol(int i, int j, int all) {
    if (i == n && j == n ) {
        kt = 1;
        for (int k = 1; k <= all-1; k++) cout<<x[k];
        cout<<" ";
    }
    else {
        int i1,j1;
        for (int r = 1; r <= 4; r++) { 
            i1 = i + l1[r];
            j1 = j + l2[r];
            if (1 <= i1 && i1 <= n && 1 <= j1 && j1 <= n &&  a[i1][j1] == 1 && test[i1][j1] != 1) {
                if (r == 1) x[all] = "D";
                else if(r == 2) x[all] = "L";
                else if(r==3) x[all] = "R";
                else x[all] = "U";
                test[i1][j1] = 1;
                sol(i1,j1,all+1);
                test[i1][j1] = 0;
            }
        }
    }
}

int main(){
    l1[1] = 1; l1[2] = 0; l1[3] = 0; l1[4] = -1;
    l2[1] = 0; l2[2] = -1; l2[3] = 1; l2[4] = 0;
    cin>>t;
    while (t--){
        cin>>n;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++) cin>>a[i][j];
        if(a[1][1] == 0) cout<<"-1"<<endl;
        // else if
        else{
            test[1][1]=1;
            sol(1,1,1);
            if(kt == 0) cout<<"-1"<<endl;
            else cout<<endl;
            kt = 0;
        }
        
    }
}
