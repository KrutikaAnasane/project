#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include "maths.h"

/* power function using base 3 */

double power(int x, int y) {
	int sign, n, i, j;
	double p, pow;
	i = 0;
	
	if(y < 0) {
		sign = -1;
		y = -y;
	}
	
	if(y == 0) {
		if(x == 0) {
			printf("invalid input\n");
			exit(1);
		}
		else
			return 1.000;
	}
	else if(y == 1)
		pow = x;
	else if(y == 2)
		pow = x * x;
	else {
		n = y / 3; 
		pow = 1;
		while(i < n) {
			p = x * x * x;
			pow = pow * p;
			i++;
		}
	}
	
	j = y % 3;
	
	switch(j) {
		
		case '1':
			pow = pow * x;
			break;
		
		case '2':
			pow = pow * x * x;
			break;
			
		default :
		break;
	}
	
	if(sign == -1)
		return ((1.0) / pow);
	else 
	    return pow;
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
		return errno;
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
	if(sine(x) == 0) {
		perror("bad input\n");
		return errno;	
	}
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

/* calculating tanx */

double tangent(double x) {
    double tanx;
    
    if(cosine(x) == 0) {
    	perror("bad input\n");
    	return errno;
    }
    else {
    	tanx = sine(x) / cosine(x);
    	return tanx;
	}
}

/* calculating cotx */

double cotangent(double x) {
	double cotx;
	
	if(sine(x) == 0) {
		perror("bad input\n");
		return errno;
	}
	else {
		cotx = cosine(x) / sine(x);
		return cotx;
	}		
}



































