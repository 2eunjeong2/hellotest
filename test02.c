#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 연습문제 1-2

// 32767이 소수(prime number)인지 아닌지를 판단하여 출력하는 프로그램을 작성
// 단, 정수를 인수로 받아 소수면 1을 반환하고 소수가 아니면 0을 반환하는 함수를 만들고,
// main 함수에서 호출하여 박성
// 함수명은 prime_check로 한다.

// 실행결과 : 소수가 아닙니다.

int prime_check(int inum);				// 소수인지 아닌지 판별하는 함수 선언

int main(void)
{
	int prime_num = 32767;				// 변수 선언

	if (prime_check(prime_num) == 1)
	{
		printf("소수입니다.\n");
	}
	else
	{
		printf("소수가 아닙니다.\n");
	}

	return 0;
}

int prime_check(int inum)				// 소수인지 아닌지 판별하는 함수 작성
{
	for (int i = 2; i < inum; i++)		// 2부터 i가 인수(inum)가 될 때까지 i를 증가
	{
		if (inum % i == 0)				// 만약 인수(inum)를 i로 나눴을 때 나머지가 0이면
		{
			return 0;					// 0(False)을 반환 = 소수가 아니다.
		}
	}
	
	return 1;							// 기본 값 1(True)을 반환 = 소수가 맞다.
}