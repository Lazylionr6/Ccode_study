// test_027.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <string>
#include <math.h>

int main(void)
{
	int A, B, C;
	char length[10];
	int N[10];		//multi 각 자리수 저장 배열
	int rest[10] = { 0 };	//나머지 수 배열
	int multi;
	int i, r, n, b = 0;			//r: 나머지 b: 정수의 길이

	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);

	multi = A * B * C;

	n = multi;
	while (n != 0) {			//정수의 자리수 계산
		n = n / 10;
		++b;
	}

	for (i = 0;i < 9;i++) {
		
		if (i == 0) {
			N[i] = multi / (int)pow(10, b-1);
		}
		else if (b - i <= 0) {
			break;
		}
		else if (i != 0) {
			N[i] = (multi % (int)pow(10, b - i)) / (int)pow(10, (b - 1 - i));
		}
	}

	for (i = 0;i < b;i++) {
		
		r = N[i] % 10;
		rest[r]++;
	}

	for (i = 0;i < 10;i++) {

		printf("%d", rest[i]);
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
