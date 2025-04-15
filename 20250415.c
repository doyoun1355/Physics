#include <stdio.h>
#include <math.h>

int main(void)
{
	double V0, V0x, V0y, theta, theta_radian, pi, x, x0, y0, y, t1, t2, tf, a, g = 0.0;
	V0 = 100;
	theta = 37;
	pi = 3.141592;
	theta_radian = theta * pi / 180;
	y0 = 140;
	g = -9.80;

	//초기 속도 성분
	V0x = V0 * cos(theta_radian);
	V0y = V0 * sin(theta_radian);

	// (a)지면에 닿기까지의 시간 계산
	double rg = 0.5 * g;
	double vq = V0y * V0y - 4 * rg * y0;

	t1 = (-V0y + sqrt(vq)) / (2 * rg);
	t2 = (-V0y - sqrt(vq)) / (2 * rg);

	if (t1 > 0)
	{
		tf = t1;
	}
	else
		tf = t2;

	// (b)수평거리 x
	x0 = 0;
	x = x0 + V0x * tf;

	// (c)속도의 수평성분, 수직성분 계산
	double Vx = V0x;
	double Vy = V0y + g * tf;

	// (d)속도의 크기 계산
	double r = sqrt(Vx * Vx + Vy * Vy);

	// (e)속도 벡터와 수평 방향이 이루는 각
	double angle = atan2(Vy, Vx) * 180.0 / pi;

	// 결과 출력
	printf("지면에 닿기까지의 시간 ==> %.2f\n", tf);
	printf("수평거리 x ==> %.2f\n", x);
	printf("속도의 크기 ==> %.2f\n", r);
	printf("속도 벡터와 수평 방향이 이루는 각의 크기 ==> %.2f\n", angle);

	return 0;
}