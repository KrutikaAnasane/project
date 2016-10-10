#include <stdio.h>
#include <math.h>

double sqrot(double n) {
	double a, s;
	a = n;
	while(((a * a) - n || n - (a * a)) > 0.00000001) {
		s = (a + (n/a) ) / 2;
	}
	return a;
}

int main() {
	double c, d;
 	scanf("%lf", &c);
	d = sqrot(c);
	printf("sqrt is %lf", d);
}
