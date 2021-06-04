#include<bits/stdc++.h>
using namespace std;
void swap(int &x, int &y){
	int temp = x;
	x = y;
	y = temp;
}
int main(){
	int n;
	cin >> n;
	int a[n];
	for ( int i = 0; i<n; i++)	cin >> a[i];
	for (int i = n-1; i>=0; i--){
		bool ok = false;
		for ( int j = 1; j<=i; j++){
			if(a[j-1] > a[j]) {
				swap(a[j-1], a[j]);
				ok = true;
			}
		}
		if(!ok) continue;
			cout << "Buoc "<<n-i<<": ";
			for ( int j = 0; j<n; j++){
				cout << a[j] << " ";
			}
			cout << endl;
		
	}
	
}

