#include <iostream>
using namespace std;
int a[100],n,k;
void out(int a[],int n){
	for(int i=1;i<=k;i++){
		char s = a[i] + 'A' - 1;
		cout << s;
	}
	cout << endl;
}
void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){//duyet tat ca ket qua co the thu
		a[i]=j;
		if(i==k)	out(a,n);
		else		Try(i+1);// thu den khi nao bang n thi se in KQ
	}
}
int main(){
	cin >>n >> k;
	Try(1);
}

