// test_039.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//1차원 배열의 내용을 2차원 배열에 옮겨쓰기

#define N 10
#define swap(a, b) {int c = a; a = b;b = c;}

void sort(int n[], int **t);

int main(void)
{
	int num[N] = { 0 };
	int* text[10];
	int i, j;

	for (i = 1;i < N;i++) {
		scanf("%d", &num[i]);
	}

	sort(num, text);

	for (i = 1;i < N;i++) {
		for (j = 0;j < N;j++) {
			printf("%d", text[i][j]);
		}
		printf("\n");
	}

	return 0;
}
void sort(int n[], int** t)
{
	int* p[10];								//각각의 n진행도를 저장할 메모리 영역을 지정한 주소에 대한 배열을 설정
	int i, j, k;

	for (i = 1;i < N;i++) {
		for (j = 0;j < N - i;j++) {
			if (n[j] < n[j + 1]) {
				swap(n[j], n[j + 1]);
			}
		}
		t[i] = n;
	}
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
		