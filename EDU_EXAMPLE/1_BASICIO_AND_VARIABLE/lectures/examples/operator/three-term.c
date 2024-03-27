#include <stdio.h>

int main() {
    
    int a = 10;
    printf( 
        ( a > 5 ) ? 
        "a는 5보다 큰 수 입니다" : 
        "a는 5보다 작거나 같은 수 입니다" 
    );

    return 0;
}