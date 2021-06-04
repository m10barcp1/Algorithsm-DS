#include <bits/stdc++.h>
using namespace std;
long long n, sol = 1e18, dem, nu;
long long SNT[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
long long tmp[15];
long long temp;

void PrimeDeco(long long n){
	while (n != 1){
		if (n % dem == 0){
			nu++;
			n = n/dem;
			continue;
		}
		dem++;
	}
}
void solve(int index){
	long long r = 1, iSNT = 0, iTmp = 0;
	for (int i = 0; i <= index; i++){
		r = r * pow(SNT[iSNT++], tmp[i] - 1);
		if (r >= sol || r <= 0){
			return;
		}
	}
	if (r < sol){
		sol = r;
	}
}

void Try(int i){
	for (int j = 1; j <= n / temp; j++){
		tmp[i] = j + 1;
		temp = temp * (j + 1);
		if (temp > n){
			temp = temp / (j + 1);
			return;
		}
		if (temp == n){
			solve(i);
		} else {
			Try(i + 1);
		}
		temp = temp / (j + 1);
	}
}
int main(){
	int T;
	cin>>T;
	while(T--){
        dem = 2;
        temp = 1;
        sol = 1e18;
		cin >> n;
		if (n == 1){
			cout <<"1"<<endl;
		}
        else{
            PrimeDeco(n);
            Try(0);
            cout << sol << endl;
        }
	}
}
