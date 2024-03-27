#include <stdio.h>

long factorial( long v ) {
    if ( v == 1 ) return 1;
    return v * factorial( v-1 );
}

int main() {
    int i;
    scanf( "%d", &i );
    printf( "%d!을 계산한 값은 %ld입니다\n", i, factorial( i ) );
    return 0;
}