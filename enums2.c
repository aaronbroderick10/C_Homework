#include <stdio.h>

enum ErrorCode {
    SUCCESS = 0,
    FILE_NOT_FOUND,
    PERMISSION_DENIED,
    UNKNOWN_ERROR
};
int main(){
    enum ErrorCode operation = SUCCESS;
    switch(operation) {
        case 0: printf("SUCCESS\n"); break;
        case 1: printf("FILE NOT FOUND\n"); break;
        case 2: printf("PERMISSION DENIED\n"); break;
	case 3:("UNKNOWN ERROR\n"); break;
    }    
    return 0;
}
