#include<bits/stdc++.h>
using namespace std;
int arr[2020],a[9][9], Max = 0,temp;
//vecor
int test(int a ,int b){
    for(int i = 1; i < a ;i++)
        if(arr[i] == b || abs(i-a) == abs(arr[i] - b) )
            return 0;
    return 1;
}
void process(int i){
    for(int j = 1; j<=8; j++){
        if(test(i,j)){
            arr[i] = j;
            if(i==8){
            	temp = 0;
                for ( int x = 1; x<=8; x++){
                 temp+=a[arr[x]][x];
				}
				if(temp>Max) Max=temp;
            }
            else  
                process(i+1);
        }
    }
}
int main(){
    int t;
    cin >> t;
	while(t--){
		int temp = 0;
		for ( int i = 1; i<=8; i++)
			for ( int j = 1; j<=8; j++) 
				cin >> a[i][j]; 
		process(1);
		cout << Max  << endl;
		Max = 0;
	}
}
