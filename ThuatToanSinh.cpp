#include <iostream>
using namespace std;
int a[100], n; 
void inKQ(int a[],int n){
	for(int i=1;i<=n;i++)	cout << a[i] << "                      ";
	cout<<endl;
}
void Try(int i){
	for(int j=0;j<=1;j++){//duyet tat ca ket qua co the thu
		a[i]=j;
		if(i==n)	{
			int check = 0, l = 1, r = n;
			while(l<r){
				if(a[l]!=a[r]) check = 1;
				l++; r--;
			}
			if(!check) inKQ(a,n);
		}//truyen vao (a,n)
		else		Try(i+1);
	}
}
int main(){
	cin>>n;
	Try(1);
}
//NV Than
