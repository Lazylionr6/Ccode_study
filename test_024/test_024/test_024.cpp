﻿// test_024.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//바구니 번호 부분 역순으로 만들기
int main(void)
{
	int n[100] = { 0 };
	int N, M;			//바구니 개수, 시행 회수
	int i, j;			//바구니 번호 = index+1
	int T[100] = { 0 };			//임시저장배열
	int a, b, c;

	scanf("%d %d", &N, &M);

	for (a = 0;a < N;a++) {		//배열 설정
		n[a] = 1 + a;
	}
	for (a = 0;a < M;a++) {
		scanf("%d %d", &i, &j);	//범위 설정

		for (b = i - 1;b < j;b++) {		//다른 배열에 임시 저장
			T[b] = n[b];
		}
		for (c = i - 1;c < j;c++) {		//기존 배열에 역순으로 기입
			n[c] = T[b - 1];			//이전 for문 마무리 이후 저장된 b값은 j
			b--;
		}
	}
	
	for (i = 0;i < N;i++) {
		printf("%d", n[i]);
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
