#include <stdio.h>
#include "math.h.c"

int main() {
 	double i, y, z;
 	scanf("%lf", &i);
 	y = absolute(i);
 	z = secant(i);
 	printf("abs value is %lf\n", y);
 	printf("secant of i is %lf\n", z);
}
