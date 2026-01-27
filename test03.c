#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 연습문제 1-3

// 반복적으로 양수를 입력받아 총합을 구하는 프로그램을 작성합니다.
// 0이나 음수를 입력하면 반복을 끝내고 그동안 누적한 합을 출력합니다.
// 처음부터 0이나 음수가 입력되면 바로 반복을 끝내고 0을 출력합니다.
// 실행 결과 
// 양수 입력 : 5(Enter)
// 양수 입력 : 10(Enter)
// 양수 입력 : -1(Enter)
// 누적된 값 : 15

int main(void)
{	
	int scan_num = 0;
	int total = 0;

	do
	{
		printf("양수 입력 : ");
		scanf("%d", &scan_num);
		total += scan_num;

	} while (scan_num > 0);
	
	printf("누적된 값 : %d", total);

	return 0;
}
