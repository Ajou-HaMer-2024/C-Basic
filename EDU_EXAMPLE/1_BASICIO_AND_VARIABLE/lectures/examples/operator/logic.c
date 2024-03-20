#include <stdio.h>

int main() {
    // 참고: C언어에서 '참'은 1, '거짓'은 0입니다.

    int a = 4;
    int b = 10;

    printf( "%d\n", a > b ); // 출력: 0
    printf( "%d\n", a >= b ); // 출력: 0
    printf( "%d\n", a < b ); // 출력: 1
    printf( "%d\n", a <= b ); // 출력: 1
    printf( "%d\n", a == b ); // 출력: 0
    printf( "%d\n", a != b ); // 출력: 1

    a = 0; // a값을 0으로 변경
    printf( "%d\n", !a ); // 출력: 1
    printf( "%d\n", !b ); // 출력: 0
    // '이 값이 아니다!'라는 의미로 해석되므로,
    // 0인 경우 '거짓'으로 인식되어 반대인 1,
    // 다른숫자인 경우 '참'으로 인식되어 반대인 0이 출력됩니다

    return 0;
}