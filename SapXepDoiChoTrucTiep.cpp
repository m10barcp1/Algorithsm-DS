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
	for ( int i = 0; i<n; i++) cin >> a[i];
	for ( int i = 0; i<n; i++){
		bool ok = false;
		for ( int j = i+1; j<n; j++){
			if(a[i]>a[j])	{
				swap(a[i],a[j]);
				ok = true;
			}
		}
		if(!ok) break;
		cout << "Buoc "<<i+1 <<": ";
		for ( int j = 0; j<n; j++){
			cout << a[j] << " ";
		}
		cout << endl;
	}

}
