#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include "maths.h"

#define 	M_e  2.7182818284590452354

#define 	M_log2e   1.4426950408889634074	/* log_2 e */ 

#define 	M_log10e   0.43429448190325182765	/* log_10 e */ 

#define 	M_ln2  0.69314718055994530942	/* log_e 2 */
 
#define 	M_ln10   2.30258509299404568402	/* log_e 10 */
 
#define 	M_pi   3.14159265358979323846	/* pi */
 
#define 	M_pi/2  1.57079632679489661923	/* pi/2 */
 
#define 	M_pi/4  0.78539816339744830962	/* pi/4 */
 
#define 	M_1/pi  0.31830988618379067154	/* 1/pi */
 
#define 	M_2/pi   0.63661977236758134308	/* 2/pi */
 
#define 	M_2/sqrt(pi)  1.12837916709551257390	/* 2/sqrt(pi) */
 
#define 	sqrt(2)  1.41421356237309504880	/* sqrt(2) */
 
#define 	M_1/sqrt(2)   0.70710678118654752440	/* 1/sqrt(2) */
 
#define 	NAN   __builtin_nan("")
 
#define 	INFINITY   __builtin_inf()
 
/* power function using base 3 */

double power(int x, int y) {/* upper limit = 2147483647*/
	char sign = 'p';           /*lower limit = -2147483648*/
	int n;
	double pow;
	
	if(y < 0) {
		sign = 'n';
		y = -y;
	}
	
	switch(y) {
		case 0:
			if(x == 0) {
				printf("invalid input\n");
				exit(1);
			}	
			else
				return 1.000;
		case 1:
			pow = x;
			break;
		case 2:
			pow = x * x;
			break;
		default:
			n = y / 3; 
			pow = 1;
			while(n > 0) {
				pow = pow * x * x * x;
				n--;
			}
		
			switch(y % 3) {
				case 1:
					pow = pow * x;
					break;
				case 2:
					pow = pow * x * x;
					break;
			}			
	}
		
	if(sign == 'n')
		return ((1.0) / pow);
	else 
	    return pow;
}

/* finding e^x i.e exp */

double expo(int x) {
	int i;
	double sum, term;
	i = 1;
	sum = 1;
	term = 1;
	
	while(isgreat(absolute(term), 0.0000000001)) {
		term = (term * x) / i;
		sum = sum + term;
		i++;
	}
	return sum;
}

/* finding absolute value of any number */

double absolute(double x) {
	if(x > 0) 
		return x;
	else if(x == 0) 
		return 0;
	else 
		return (-x);
}

/* comparing if one number is greater than other number */

double isgreat(double x, double y) {
	if(x > y)
		return x;
	else
		return 0;
}

/* comparing if one number is greater or equal other number */

double isgreateq(double x, double y) {
	if(x >= y)
		return x;
	else
		return 0;
}

/* comparing if one number is lesser or equal other number*/

double islessereq(double x, double y) {
	if(x <= y)
		return x;
	else
		return 0;
}

/* comparing if one number is lesser than other number*/

double islesser(double x, double y) {
	if(x < y)
		return x;
	else
		return 0;
}

/* factorial of a number */

long int factorial(long int n) {
	
	if (n == 0 || n == 1) 
		return 1;
	else if(n < 0) 
		return (1.0 / 0.0);
    else     
    	return (n*factorial(n-1)); 	
}

/* calculating sinx */

double sine(double x) {
    int i, sign;
    double term, sum;
    i = 3;
    sign = -1;
    term = x;
    sum = x;
    
    while(isgreat(absolute(term), 0.0000000001)) {
    	term = (term * x * x) / (i * (i - 1));
    	sum = sum + (sign * term);
    	sign = sign * (-1);
    	i = i + 2;
    }
    return sum;
}

/* calculating cosecx */

double cosecant(double x) {
	if(sine(x) == 0)
		return (1.0 / 0.0);	
	else 
		return (1 / sine(x));
}

/* calculating cosx */

double cosine(double x) {
    int i, sign;
    double term, sum;
    i = 2;
    sign = -1;
    term = 1;
    sum = 1;
    
    while(isgreat(absolute(term), 0.0000000001)) {
    	term = (term * x * x) / (i * (i - 1));
    	sum = sum + (sign * term);
    	sign = sign * (-1);
    	i = i + 2;
    }
    return sum;
}

/* calculating secx */

double secant(double x) {
	if(cosine(x) == 0) 
		return (1.0 / 0.0);	
	else 
		return (1 / cosine(x));
}

/* calculating tanx */

double tangent(double x) {
    if(cosine(x) == 0)
    	return (1.0 / 0.0);
    else 
    	return (sine(x) / cosine(x));	
}

/* calculating cotx */

double cotangent(double x) {
	if(sine(x) == 0) 
		return (1.0 / 0.0);
	else 
		return (cosine(x) / sine(x));		
}





































