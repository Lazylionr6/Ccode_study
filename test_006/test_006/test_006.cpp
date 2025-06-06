﻿// test_006.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
int main(void)
{
	int x;
	int n;
	int sum = 0;

	scanf("%d", &n);

	for (x = 1;x <= n;x++) {		//1<=x<=n
		sum += x;
	}
	printf("%d", sum);
	return 0;
}

int main(void)
{
	int x;
	int N = 0;

	scanf("%d", &N);

	for (x = 1;x <= 9;x++) {

		printf("%d * %d = %d\n", N, x, N * x);
	}
	return 0;
}*/


// 영수증 가격 비교 문제

int main(void)
{
	int x;
	int a, b;		//a = 가격, b = 개수
	int N = 0;		//물품 종류
	int sum = 0;
	int X = 0;			//최종가격

	printf("물품 종류의 수 ");
	scanf("%d", &N);

	for (x = 1;x <= N;x++) {
		
		printf("물품 가격, 개수 ");
		scanf("%d %d", &a, &b);

		sum += a * b;
	}
	
	printf("최종가격 ");
	scanf("%d", &X);

	if (X == sum) {
		printf("Yes");
	}
	else {
		printf("No");
	}
	return 0;
}


// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
