﻿// test_031.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>

/*int main(void)
{
	char alpha;

	scanf("%c", &alpha);

	printf("%d", alpha);

	return 0;
}*/

int main(void)
{
	char S[100];
	int Alpha[26];				//알파벳 개수 : 26개 (65 ~ 90)
	int i, l, n;				//l: 문자의 길이  n: 알파벳 순서


	scanf("%s", &S);			//문자 대입

	l = strlen(S);				//문자 길이

	for (i = 0; i < 26;i++) {	//배열 초기값 조정
		Alpha[i] = -1;
	}

	for (i = 0;i < l;i++) {
		n = S[i] - 'a';			//알바벳 순서 맞추기

		if (Alpha[n] == -1) {
			Alpha[n] = i;			//등장 순서 조정
		}
	}

	for (i = 0;i < 26;i++) {
		printf("%d ", Alpha[i]);
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
