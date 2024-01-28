#include <stdio.h>

int main() {
    int a, b;
    printf("저장할 첫번째 값을 입력해주세요: ");
    scanf("%d", &a);
    printf("저장할 두번째 값을 입력해주세요: ");
    scanf("%d", &b);

    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    float div = (float)a / b;
    
    printf( "\n첫번째 입력값 '%d'와 두번째 입력값 '%d'의 연산결과는 다음과 같습니다:\n덧셈: %d / 뺄셈: %d / 곱셈: %d / 나눗셈: %.5f\n", a, b, sum, sub, mul, div );
    return 0;
}