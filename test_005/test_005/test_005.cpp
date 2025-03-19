// test_005.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//for 문제 1

int main(void)
{
    int x;
    int a;

    scanf("%d", &a);

    for (x = 1; x <= 9;x++) {

        printf("%d * %d = %d\n", a, x, a * x);
    }
    return 0;
}

//for 문제 2

int main(void)
{
    int x, T;
    int a, b;

    printf("테스트 케이스 ");
    scanf("%d", &T);

    printf("정수를 입력하시오 ");

    for (x = 1;x <= T;x++) {

        scanf("%d %d", &a, &b);
    }
    for (x = 1;x <= T;x++) {

        printf("%d\n", a + b);
    }
    return 0;
}

//for 문제3

int main(void)
{
    int x, n;

    scanf("%d", &n);

    for (x = 1;x <= n;x++) {

        x += x;

        printf("%d", x);
    }
    return 0;
}

//while,for 비교

int main(void)
{
    int x;

    for (x = 1;x <= 25;x++) {   //for는 변수 초기값이 ()안에 들어감

        printf("Pizzahut\n");
    }
    return 0;
}

int main(void)
{
    int x = 1;

    while (x <= 25) {       //while은 변수 초기값을 먼저 지정해 줘야함

        printf("Pizzahut\n");
    }
    return 0;
}

//for 문제 4

int main(void)
{
    int x;
    int T;
    scanf("%d", &T);

    for (x = 1;x <= T;x++) {
        printf("##\n");
    }
    return 0;
}

//for 문제 5 변수 증감 설정

int main(void)
{
    int x;
    int a = 0;
    for (x = 0;x < 10;x++) {        //변수가 증가함

        a = 10 - x;
        printf("%d\n", a);
    }
    return 0;
}

int main(void)
{
    int x;
    for (x = 10;x > 0;x--) {        //변수가 감소함

        printf("%d\n", x);
    }
    return 0;
}

//for 문제 6 연산자 응용

int main(void)
{
    int x;
    int a, b;

    scanf("%d %d", &a, &b);

    for (x = a;x <= b;x++)
    {
        printf("%d", a++);
    }
    return 0;
}


//for 문제 7

int main(void)
{
    int x;
    int T;

    scanf("%d", &T);

    for (x = T;x >= 0;x--) {

        printf("%d\n", x);

        if (x == 0) {
            printf("발사");
        }
    }
    return 0;
}