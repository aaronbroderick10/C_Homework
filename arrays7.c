#include <stdio.h>

int main(){
    int m1[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
    int m2[3][3] = { {4,3,2}, {8,7,6}, {2,1,0} };
    int m3[3][3];
    int n = sizeof(m1)/sizeof(m1[0]);
    int i;
    for(i=0; i<n; i++){
	int j;
	for(j=0; j<n; j++){
	    int sum = 0;
	    int k;
	    for(k=0; k<n; k++){
                sum += m1[i][k]*m2[k][j];
	    }
	    m3[i][j] = sum;
	}
    }
    printf("Matrix multiplication complete!\n");
    return 0;
}
