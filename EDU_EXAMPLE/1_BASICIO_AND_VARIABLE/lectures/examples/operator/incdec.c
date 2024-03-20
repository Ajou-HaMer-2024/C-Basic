#include <stdio.h>

int main() {

    int a = 4;

    printf("%d\n", a++); // 후치 증가 연산자 => 출력: 4
    printf("%d\n", a); // 출력: 5
    a = 4;

    printf("%d\n", ++a); // 전치 증가 연산자 => 출력: 5
    printf("%d\n", a); // 출력: 5


    int b = 10;

    printf("%d\n", b--); // 후치 감소 연산자 => 출력: 10
    printf("%d\n", b); // 출력: 9
    b = 10;

    printf("%d\n", --b); // 전치 증가 연산자 => 출력: 9
    printf("%d\n", b); // 출력: 9

    return 0;
}