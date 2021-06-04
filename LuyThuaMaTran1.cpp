#include <bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;
long long n;
struct Matrix{
	long long m[11][11];
};
Matrix operator * (Matrix a, Matrix b){
    Matrix res;
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
        {
            res.m[i][j] = 0;
            for (int k=0; k<n; k++)
                res.m[i][j] = (res.m[i][j]+a.m[i][k]*b.m[k][j])%M;
        } 
    return res;
}

Matrix Solve (Matrix a, long long tmp)
{
    if (tmp==1)
        return a;
    if (tmp%2!=0)
        return Solve(a,tmp-1)*a;
    Matrix temp = Solve(a,tmp/2);
    return temp*temp;
}

int main (){
    int T;
    cin>>T;
    while(T--){
        long long k;
		cin >> n >> k;
		Matrix a;
        for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++){
            cin >> a.m[i][j];
        }
		Matrix result = Solve(a, k);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++)
		    cout<<result.m[i][j]<<" ";
            cout<<endl;
        }
        
   }
}
