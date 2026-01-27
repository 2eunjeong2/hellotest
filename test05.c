#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 연습문제 1-5

// 다음의 main 함수와 실행결과를 참고하여 함수를 추가하고 프로그램을 완성합니다.

//실행결과
//1. 볶음짬뽕
//2. 콩나물국밥
//3. 바지락칼국수
//
//#메뉴를 선택하세요 : 2 (Enter)
//선택된 메뉴는 2번입니다.

int dicp_menu(int sel_menu);


int main(void)
{
	int sel = 0;					// 변수 초기화
	char sel_menu;					// 입력 받은 메뉴를 저장할 변수

	printf("메뉴를 선택하세요 : ");
	scanf("%s", &sel_menu);
	
	sel = dicp_menu(sel_menu);

	printf("선택된 메뉴는 %d번 입니다.\n", sel_menu);

	return 0;
}

int dicp_menu(int sel_menu)
{
	
}