//2차원 벡터의 내적, 외적 계산기

#include <stdio.h>
#include <math.h>

int main(void)
{
	double x1 = 0.0;
	double x2 = 0.0;
	double y1 = 0.0;
	double y2 = 0.0;
	double sum_x = 0.0;
	double sum_y = 0.0;
	double dot_product = 0.0;
	double cross_product = 0.0;
	
	printf(" X벡터의 x좌표를 입력하시오 :");
	scanf_s("%lf", &x1);

	printf(" X벡터의 y좌표를 입력하시오 :");
	scanf_s("%lf", &x2);

	printf(" Y벡터의 x좌표를 입력하시오 :");
	scanf_s("%lf", &y1);

	printf(" Y벡터의 y좌표를 입력하시오 :");
	scanf_s("%lf", &y2);

	// 벡터의 합 계산
	sum_x = x1 + x2;
	sum_y = y1 + y2;

	// 두 벡터의 내적 계산
	dot_product = x1 * y1 + x2 * y2;

	// 두 벡터의 외적 계산
	cross_product = x1 * y2 - x2 * y1;

	printf("두 벡터의 내적 값 : %lf", dot_product);
	printf("두 벡터의 외적 값 : %lf", cross_product);
}