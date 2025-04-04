﻿// test_033.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//문자 반복입력하여 출력하기
int main(void)
{
	char S[20] = { 0 };
	char P[1000][160] = { 0 };	//[T][l*R]
	int T;				//테스트 케이스
	int	R;				//반복 회수
	int l = 0;			//문자의 길이
	int i, j, k;

	scanf("%d", &T);

	for (i = 0;i < T;i++) {
		scanf("%d %s", &R, &S);
		l = strlen(S);						//문자 길이 구하기
		for (j = 0;j < l;j++) {
			for (k = 0;k < R;k++) {			//문자를 R만큼 반복시키기
				P[i][j * R + k] = S[j];
			}
		}
	}

	for (i = 0;i < T;i++) {
		for (j = 0;j < 160;j++) {
			printf("%c", P[i][j]);
		}
		printf("\n");
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
