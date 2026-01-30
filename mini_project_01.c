#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>	

// 자판기 구현하기

int main(void)
{
	int selec_menu = 0;

	printf("메뉴\n");
	printf("1. coffee\n");
	printf("2. drink\n");
	printf("3. tea\n");
	printf("4. snack\n");

	printf("메뉴를 선택하세요 : ");
	scanf("%d", &selec_menu);

	return 0;
}
