#include<bits/stdc++.h>
using namespace std;
int arr[2020];
int test(int a ,int b){
    for(int i = 1; i < a ;i++)
        if(arr[i] == b || abs(i-a) == abs(arr[i] - b) )
            return 0;
    return 1;
}
void process(int i,int n, int &temp){
    for(int j = 1; j<=n; j++){
        if(test(i,j)){
            arr[i] = j;
            if(i==n){
                temp++;
            }
            else  
                process(i+1,n,temp);
        }
    }
}
int main(){
    int t;
    cin >> t;
	while(t--){
		int temp = 0;
		int n;
		cin >> n;
		process(1,n,temp);
		cout << temp << endl;
	}
}
