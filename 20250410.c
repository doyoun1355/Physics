#include <stdio.h>
#include <math.h>

int main(void)
{
	double V0x, V0y, V0, x, y, g, R = 0.0;
	double theta, theta_radian, pi, t = 0.0;
	g = 9.8;
	pi = 3.141592;
	theta = 30;
	theta_radian = theta * pi / 180;

	// x, y 방향의 초기속도 구하기
	printf(" V0의 값을 입력하시오 ==>");
		scanf_s("%lf", &V0);
	V0x = V0 * cos(theta_radian);
	V0y = V0 * sin(theta_radian);

	// 최고점의 높이 구하기
	y = (V0y * V0y) / (2 * g);

	// 최고점에 도달하는 시간 구하기
	t = V0y / g;

	// 수평으로 이동한 최고 거리 구하기
	R = V0 * V0 * sin(2 * theta_radian) / g;

	//결과 출력하기
	printf("x, y 방향의 초기속도 V0x = %.2lf V0y = %.2lf \n", V0x, V0y);
	printf("최고점의 높이 ==> %.2lf \n", y);
	printf("최고점에 도달하는 시간 ==> %.2lf \n", t);
	printf("수평으로 이동한 최고 거리 ==> %.2lf \n", R);

	return 0;
}