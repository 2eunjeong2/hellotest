#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 연습문제 1-2

// 32767이 소수(prime number)인지 아닌지를 판단하여 출력하는 프로그램을 작성
// 단, 정수를 인수로 받아 소수면 1을 반환하고 소수가 아니면 0을 반환하는 함수를 만들고,
// main 함수에서 호출하여 박성
// 함수명은 prime_check로 한다.

// 실행결과 : 소수가 아닙니다.

int prime_check(int inum);

int main(void)
{
	int prime_num = 32767;

	

	return 0;
}

int prime_check(int inum)
{
	int i = 0;

	for (i = 2; i < inum; i++)
	{
		if (inum % i == 0)
		{
			
		}
	}
		

}