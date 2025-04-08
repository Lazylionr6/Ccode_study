// test_036.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//문자를 숫자로 전환
int main(void)
{
	char text[15] = { 0 };
	int N[15] = { 0 };
	int time = 0, l;
	int i;

	scanf("%s", &text);

	l = strlen(text);

	for (i = 0;i < l;i++) {		//문자를 숫자로 전환
		switch (text[i]) {
		case 'A':
		case 'B':
		case 'C':
			N[i] = 2;
			break;
		case 'D':
		case 'E':
		case 'F':
			N[i] = 3;
			break;
		case 'G':
		case 'H':
		case 'I':
			N[i] = 4;
			break;
		case 'j':
		case 'k':
		case 'L':
			N[i] = 5;
			break;
		case 'M':
		case 'N':
		case 'O':
			N[i] = 6;
			break;
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
			N[i] = 7;
			break;
		case 'T':
		case 'U':
		case 'V':
			N[i] = 8;
			break;
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
			N[i] = 9;
			break;
		}
	}

	for (i = 0;i < l;i++) {
		time += (N[i] + 1);
	}
	printf("%d", time);

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
