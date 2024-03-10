#include <stdio.h>

int add_value( int v ) {
    v += 10;
    printf( "add_value함수: %d\n", v );
    return v;
}

int main() {
    int a = 10;
    add_value( a );
    printf("main함수: %d\n", a);
}

// int main() {

    // for ( 초기식; 조건식; 증감식 ) {
    //     반복해서_실행할_명령문_입력
        
    //     if ( 조건식은_true인데_특정_조건이_만족되면 ) {
    //         break; // for문 탈출
    //     }
    // }

    // for ( int i = 0; i < 10; i++ ) {
    //     printf( "이번 실행순서는 %d번째 입니다\n", i );
    // }

    // while ( 조건식 ) {
    //     반복해서_실행할_명령문_입력
        
    //     if ( 조건식은_true인데_특정_조건이_만족되면 ) {
    //         break; // while문 탈출
    //     }
    // }

    // int i = 0;
    // while ( i < 10 ) {
    //     printf( "이번 실행순서는 %d번째 입니다\n", i );
    //     i++; // 증감식 작성위치가 없으므로, 내부에 작성
    // }

    // do {
    //     반복해서_실행할_명령문_입력

    //     if ( 조건식은_true인데_특정_조건이_만족되면 ) {
    //         break; // while문 탈출
    //     }
    // } while ( 조건문 );

    // int i = 0;
    // do {
    //     printf( "이번 실행순서는 %d번째 입니다\n", i );
    //     i++;
    // } while ( i < 10 );

//     return 0;
// }


// return_자료형 함수명( 매개변수1_자료형 매개변수1, 매개변수2_자료형 매개변수2, ... ) {
//     실행할_명령문_입력
// }

int add( int a, int b ) {
    return a + b;
}

void print_hex( int value ) {
    printf( "%X\n", value );
}

// int main() {
//     print_log();
// }

// int print_log() {
//     int a = 0;
//     printf("로깅을 시작합니다\n");
//     a += 10;
    
//     printf("첫번째 연산결과는 다음과 같습니다: %d\n", a);
//     return 1;

//     a += 20;
//     printf("두번째 연산결과는 다음과 같습니다: %d\n", a);
//     return 0;
// }