#include <bits/stdc++.h>
using namespace std;

int a[20][20];
bool b[20];
int kq[50], Min=1e9, cost = 0, n;
void Try(int i){
    if(i==n){
        if(cost+a[kq[i-1]][kq[0]]<Min){
            Min=cost+a[kq[i-1]][kq[0]];
        }
    }
    else
    {
        for(int j=0;j<n;j++){
            if(b[j]==false && cost+a[kq[i-1]][j] < Min){
                kq[i]=j;
                b[j]=true;
                cost+=a[kq[i-1]][j];
                Try(i+1);
                b[j]=false;
                cost-=a[kq[i-1]][j];
            }
        }
    }
}
int main(){ 
    cin >> n;
    for(int i = 0; i < n; i++)
    	for(int j = 0; j < n; j++) 
			cin >> a[i][j];
    kq[0] = 0;
    b[0] = true;
    Try(1);
    cout << Min;
} 
