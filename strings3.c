#include <stdio.h>

int main(){
    char str[] = "abracadabra";
    int count[256] = {0};
    int i;
    for(i=0; str[i]!='\0'; i++){
	count[(unsigned char)str[i]]++;
    }
    int j;
    for(j=0; j<256; j++){
	if(count[j]!=0){
            printf("'%c' = %d\n", j, count[j]);
	}
    }
    return 0;
}
