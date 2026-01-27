#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 연습문제 1-1

// 이름, 나이, 키, 혈액형을 저장할 변수나 배열을 선언하고 자신의 프로필을 초기화 합니다.
// 그리고 10년 후의 프로필을 출력합니다.
// 이름과 혈액형은 변함이 없고 키는 0.5cm 줄어든다고 가정합니다.
// 실행결과 
// 10년 후의 프로필...
// 이름 : 홍길동
// 나이 : 17
// 키 : 190.0
// 혈액형 : AB형

int main(void)
{
	char name[80] = "홍길동";				// 이름 배열 선언 및 초기화
	int age[1] = { 17 };					// 나이 배열 선언 및 초기화
	double height[1] = { 190.0 };			// 키 배열 선언 및 초기화
	char b_type[80] = "AB형";				// 혈액형 배열 선언 및 초기화

	int after_age = age[0] + 10;			// 10년 후 나이 구하기
	double after_height = height[0] - 0.5;	// 0.5 줄어든 키 구하기
	

	// 결과 출력
	printf("10년 후의 프로필...\n");
	printf("이름 : %s\n", name);
	printf("나이 : %d\n", age[0]);
	printf("키 : %.1lf\n", after_height);
	printf("이름 : %s", b_type);

	return 0;
}