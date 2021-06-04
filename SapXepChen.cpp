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
	for ( int i = 1; i<n; i++){
		int min = a[i];
		int j = i-1;
		cout << "Buoc "<<i-1<<": ";
		for ( int j = 0; j<i; j++){
			cout << a[j] << " ";
		}
		cout << endl;
		while((j>=0 )&& a[j]>min){
			a[j+1] = a[j]; 
			j--;
		}
		a[j+1] = min;
		
	}
	cout << "Buoc "<<n-1<<": ";
	for ( int i = 0;i <n; i++) cout << a[i] << " ";

}
