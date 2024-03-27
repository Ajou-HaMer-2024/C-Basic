#include <stdio.h>

int main() {
    int cnt, i, j, is_down = 0;
    scanf("%d", &cnt);

    for ( i = 0; i < cnt; i++ ) {
        for ( j = 0; j <= i; j++ ) printf("*");
        printf("\n");
    }
    for ( i = cnt-1; i > 0; i-- ) {
        for ( j = 0; j < i; j++ ) printf("*");
        printf("\n");
    }

    return 0;
}