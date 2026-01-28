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
	int score[5];
	double total = 0;	// 합계를 저장할 변수


	printf("5명 심사위원의 점수 입력 : ");

	// 심사 위원 점수 입력 받고 배열에 저장
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &score[i]);
	}

	printf("유효점수 : ");

	// max min 값 구하기
	int max = score[0];
	int min = score[0];

	// 더 큰 값을 발견하면 요소를 최댓값으로 교체하는 알고리즘
	for (int i = 0; i < 5; i++)
	{
		if (max < score[i])
		{
			max = score[i];
		}
	}
	// 더 작은 값을 발견하면 요소를 최솟값으로 교체하는 알고리즘
	for (int i = 0; i < 5; i++)
	{
		if (min > score[i])
		{
			min = score[i];
		}
	}

	// max min 값을 뺀 유효 점수
	for (int i = 0; i < 5; i++)
	{
		if (score[i] != max && score[i] != min)
		{
			total = total + score[i];
			printf("%d ", score[i]);
		}
		
	}
	
	// 평균 값 구하기
	double avg = total / 3;

	printf("\n평균 : %.1lf", avg);


	return 0;
}
