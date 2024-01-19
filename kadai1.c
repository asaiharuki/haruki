#include <math.h>
#include <stdio.h>
int main(void) {
	int a, b, c;
	double x_1, x_2, x_3,d;
	printf("aの値を入力してください");
	scanf_s("%d", &a);
	while (a == 0)
	{
		printf("0以外のaの値を入力してください");
		scanf_s("%d",&a);
	}
	printf("bの値を入力してください");
	scanf_s("%d", &b);
	printf("cの値を入力してください");
	scanf_s("%d", &c);
	d = b * b - 4 * a * c;
	x_1 = ((-b + sqrt(d)) / (2 * a));
	x_2 = ((-b - sqrt(d)) / (2 * a));
	x_3 = (-b) / (2 * a);
	if (d > 0) {
		printf("x_1=%lf,x_2=%lf", x_1, x_2);
	}
	else if (d == 0) {
		printf("x_3=%lf",x_3);
	}
	else {
		printf("実数解はありません");
	}
	return 0;

}
