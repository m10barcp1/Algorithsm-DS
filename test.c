#include <stdio.h>
#include <math.h>
int a[20][20],b[20][20],n,c[100][100] = {0};
void nhanmt (){ 
	int i,j,k,l;
	
		
}
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for ( i = 0 ; i<n; i++){
		for ( j = 0; j<n; j++){
			scanf("%d",&a[i][j]);
		}
	}
	int k,l;
	for ( k = 0 ; k<n; k++){
		for ( l = 0; l<n; l++){
			scanf("%d",&b[k][l]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			for(k=0;k<n;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	int x, y;
	for(x=0;x<n;x++){
		for(y=0;y<n;y++){
			printf("%d ", c[x][y]);
		}
		printf("\n");
	}
}

	


