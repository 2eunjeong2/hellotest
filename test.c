#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(double* pa, double* pb);
void line_up(double* maxp, double* midp, double* minp);

int main(void)
{
	double max, mid, min;

	printf("실수값 3개 입력 : ");
	scanf("%lf%lf%lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("정렬된 값 출력 : %.1lf, %.1lf, %.1lf\n", max, mid, min);

	return 0;
}

void swap(double* pa, double* pb)
{
	double temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}


void line_up(double* maxp, double* midp, double* minp)
{
	// 1, 2, 3

	if (*maxp < *minp)		// max가 min보다 작을 때 (1이 3보다 작으면)
	{
		swap(minp, maxp);	// min에 max
	}
	if (*maxp < *midp)		// max가 mid보다 작을 때 (1이 2보다 작으면)
	{
		swap(midp, maxp);	// mid에 max
	}
	if (*midp < *minp)		// mid가 min보다 작을 때
	{
		swap(minp, midp);	// min에 mid
	}

}