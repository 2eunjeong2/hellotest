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

int dicp_menu(void);


int main(void)
{
	int sel;

	sel = dicp_menu();

	printf("선택된 메뉴는 %d번 입니다.\n", sel);

	return 0;
}

int dicp_menu(void)
{
	int menu = 0;

	printf("1. 볶음짬뽕\n");
	printf("2. 콩나물국밥\n");
	printf("3. 바지락칼국수\n");

	printf("메뉴를 선택하세요 : ");
	scanf("%d", &menu);

	return menu;
}