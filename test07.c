#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 연습문제 1-7

// 다섯 명의 심사위원 점수를 입력하여 유효점수와 평균을 출력하는 프로그램을 작성합니다.
// 유효점수는 최고점과 최저점을 제외한 점수 이며 평균은 유효점수로 계산합니다.

// 실행결과
// 5명 심사위원의 점수 입력 : 7 9 4 8 5
// 유효점수 : 7 8 5
// 평균 : 6.7 

int main(void)
{
	int scores[5];						// 심사위원 점수를 저장할 배열 선언
	int i = 0;							// 반복 수행을 위한 변수
	double total = 0;					// 합계를 저장할 변수

	printf("5명 심사위원의 점수 입력 : ");


	// 심사 위원 점수 입력 받고 배열에 저장

	for (i = 0; i < 5; i++)				
	{
		scanf("%d", &scores[i]);
	}

	printf("유효점수 : ");

	// 심사 위원 점수 출력하기

	for (i = 0; i < 5; i++)				
	{
		printf("%d ", scores[i]);
	}

	printf("\n");

	// 평균 값 구하기
	for (i = 0; i < 5; i++)
	{
		total += scores[i];
	}

	printf("평균 : %.1lf", total / 5);	//합계를 구하고 5를 나눈 평균값을 출력

	return 0;
}

