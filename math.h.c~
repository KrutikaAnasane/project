#include <stdio.h>
#include <stdlib.h>
#include "maths.h"
 
/* power function using base 3 */

float powerf(float x, int y) {/* upper limit = 2147483647*/
	char sign = 'p';           /*lower limit = -2147483648*/
	int n;
	float pow;
	
	if(y < 0) {
		sign = 'n';
		y = -y;
	}
	
	switch(y) {
		case 0:
			if(x == 0) {
				fprintf(stderr, "invalid input\n");
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

double power(double x, int y) {/* upper limit = 2147483647*/
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
				fprintf(stderr, "invalid input\n");
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

long double powerl(long double x, int y) { /* upper limit = 2147483647*/
	char sign = 'p';                      /*lower limit = -2147483648*/
	int n;
	long double pow;
	
	if(y < 0) {
		sign = 'n';
		y = -y;
	}
	
	switch(y) {
		case 0:
			if(x == 0) {
				fprintf(stderr, "invalid input\n");
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

float expof(int x) {
	int i;
	float sum, term;
	i = 1;
	sum = 1;
	term = 1;
	
	while(isgreat(absolute(term), 0.0000001)) {
		term = (term * x) / i;
		sum = sum + term;
		i++;
	}
	return sum;
}

double expo(int x) {
	int i;
	double sum, term;
	i = 1;
	sum = 1;
	term = 1;
	
	while(isgreat(absolute(term), 0.00000000001)) {
		term = (term * x) / i;
		sum = sum + term;
		i++;
	}
	return sum;
}

long double expol(int x) {
	int i;
	long double sum, term;
	i = 1;
	sum = 1;
	term = 1;
	
	while(isgreat(absolute(term), 0.00000000000001)) {
		term = (term * x) / i;
		sum = sum + term;
		i++;
	}
	return sum;
}


/* finding absolute value of any number */

float absolute(float x) {
	if(x > 0) 
		return x;
	else if(x == 0) 
		return 0;
	else 
		return (-x);
}

double absolute(double x) {
	if(x > 0) 
		return x;
	else if(x == 0) 
		return 0;
	else 
		return (-x);
}

long double absolute(long double x) {
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

float sinef(float x) {
    int i, sign;
    float term, sum;
    i = 3;
    sign = -1;
    term = x;
    sum = x;
    
    while(isgreat(absolute(term), 0.00000001)) {
    	term = (term * x * x) / (i * (i - 1));
    	sum = sum + (sign * term);
    	sign = sign * (-1);
    	i = i + 2;
    }
    return sum;
}

double sine(double x) {
    int i, sign;
    double term, sum;
    i = 3;
    sign = -1;
    term = x;
    sum = x;
    
    while(isgreat(absolute(term), 0.000000000001)) {
    	term = (term * x * x) / (i * (i - 1));
    	sum = sum + (sign * term);
    	sign = sign * (-1);
    	i = i + 2;
    }
    return sum;
}

long double sinel(long double x) {
    int i, sign;
    long double term, sum;
    i = 3;
    sign = -1;
    term = x;
    sum = x;
    
    while(isgreat(absolute(term), 0.000000000000001)) {
    	term = (term * x * x) / (i * (i - 1));
    	sum = sum + (sign * term);
    	sign = sign * (-1);
    	i = i + 2;
    }
    return sum;
}

/* calculating cosecx */

float cosecantf(float x) {
	if(sinef(x) == 0)
		return (1.0 / 0.0);	
	else 
		return (1 / sinef(x));
}

double cosecant(double x) {
	if(sine(x) == 0)
		return (1.0 / 0.0);	
	else 
		return (1 / sine(x));
}

long double cosecant(long double x) {
	if(sinel(x) == 0)
		return (1.0 / 0.0);	
	else 
		return (1 / sinel(x));
}

/* calculating cosx */

float cosinef(float x) {
    int i, sign;
    float term, sum;
    i = 2;
    sign = -1;
    term = 1;
    sum = 1;
    
    while(isgreat(absolute(term), 0.00000001)) {
    	term = (term * x * x) / (i * (i - 1));
    	sum = sum + (sign * term);
    	sign = sign * (-1);
    	i = i + 2;
    }
    return sum;
}

double cosine(double x) {
    int i, sign;
    double term, sum;
    i = 2;
    sign = -1;
    term = 1;
    sum = 1;
    
    while(isgreat(absolute(term), 0.00000000001)) {
    	term = (term * x * x) / (i * (i - 1));
    	sum = sum + (sign * term);
    	sign = sign * (-1);
    	i = i + 2;
    }
    return sum;
}

long double cosinel(long double x) {
    int i, sign;
    long double term, sum;
    i = 2;
    sign = -1;
    term = 1;
    sum = 1;
    
    while(isgreat(absolute(term), 0.0000000000001)) {
    	term = (term * x * x) / (i * (i - 1));
    	sum = sum + (sign * term);
    	sign = sign * (-1);
    	i = i + 2;
    }
    return sum;
}

/* calculating secx */

float secantf(float x) {
	if(cosinef(x) == 0) 
		return (1.0 / 0.0);	
	else 
		return (1 / cosinef(x));
}

double secant(double x) {
	if(cosine(x) == 0) 
		return (1.0 / 0.0);	
	else 
		return (1 / cosine(x));
}

long double secantl(long double x) {
	if(cosinel(x) == 0) 
		return (1.0 / 0.0);	
	else 
		return (1 / cosinel(x));
}

/* calculating tanx */

float tangentf(float x) {
    if(cosinef(x) == 0)
    	return (1.0 / 0.0);
    else 
    	return (sinef(x) / cosinef(x));	
}

double tangent(double x) {
    if(cosine(x) == 0)
    	return (1.0 / 0.0);
    else 
    	return (sine(x) / cosine(x));	
}

long double tangentl(long double x) {
    if(cosinel(x) == 0)
    	return (1.0 / 0.0);
    else 
    	return (sinel(x) / cosinel(x));	
}

/* calculating cotx */

float cotangentf(float x) {
	if(sinef(x) == 0) 
		return (1.0 / 0.0);
	else 
		return (cosinef(x) / sinef(x));		
}

double cotangent(double x) {
	if(sine(x) == 0) 
		return (1.0 / 0.0);
	else 
		return (cosine(x) / sine(x));		
}

long double cotangentl(long double x) {
	if(sinel(x) == 0) 
		return (1.0 / 0.0);
	else 
		return (cosinel(x) / sinel(x));		
}

/* square root of a number by newton raphson method */

float squrtf(float n) {
	float r;
	r = 1;
	
	if(n < 0.0) {
		printf("invalid input\n");
    	exit(1);
    }
     
	while(isgreat(absolute((r * r) - n), 0.0000001)) 
		r = r - (((r * r) - n) / (2 * r));
	return r;
}

double squrt(double n) {
	double r;
	r = 1;
	
	if(n < 0.0) {
		printf("invalid input\n");
    	exit(1);
    }
     
	while(isgreat(absolute((r * r) - n), 0.0000000001)) 
		r = r - (((r * r) - n) / (2 * r));
	return r;
}

long double squrtl(long double n) {
	long double r;
	r = 1;
	
	if(n < 0.0) {
		printf("invalid input\n");
    	exit(1);
    }
     
	while(isgreat(absolute((r * r) - n), 0.0000000000001)) 
		r = r - (((r * r) - n) / (2 * r));
	return r;
}

































