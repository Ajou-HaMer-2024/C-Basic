#include <stdio.h>

int fibonacci( int n ) {
    if ( n == 0 ) return 0;
    if ( n == 1 || n == 2 ) return 1;
    return fibonacci( n-1 ) + fibonacci( n-2 );
}

int main() {
    int i;
    scanf( "%d", &i );
    printf("%d\n", fibonacci( i ));
    return 0;
}