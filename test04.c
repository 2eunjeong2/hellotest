#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 연습문제 1-4

// 자동차 주행시간 측정 프로그램
// 거리(km)와 속력(km/h)을 입력받은 후에
// 시간을 계산하여 출력합니다.
// 단, 다음 조건을 만족하도록 작성합니다.

// 조건 : 거리와 속력인 입력받는 변수는 int형으로 선언하고
// 시간, 분을 저장할 변수도 int형으로 선언합니다. 
// 초는 소수점 이하 셋째 자리까지 출력합니다.

// 실행 결과 
// 거리와 속력 입력 : 420 65(Enter)
// 소요 시간은 6시간 27분 .538초 입니다.

int main(void)
{
	int distance = 0;						// 거리 변수
	int speed = 0;							// 속력 변수
	double time = 0;						// 시간으로 변환할 변수

	int hour, min, sec = 0;					// 시간을 저장할 변수

	printf("거리와 속력을 입력하세요 : ");
	scanf("%d%d", &distance, &speed);

	time = (double)distance / (double)speed;
	hour = (int)time;
	time = (time - hour) * 60;
	min = (int)time;
	time = (time - min) * 60;
	sec = time;

	printf("%.3lf", time);

	return 0;
}
