/*****************************************************************************
 * Copyright (C) Krutika Sanjay Anasane anasaneks15.it@coep.ac.in
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "maths.h"

/* finding e^x i.e exp */

float expof(float x) {
	int i;
	float sum, term;
	char sign;
	i = 1;
	sum = 1;
	term = 1;
	
	if(issinff(x) == -1)
		return 0.0;
	else if(x > M_MAXF)
		return INFINITY;	
	else if(x < 0.0) {
		x = -x;
		sign = 'x';
	}
	
	while(term > 0.000001) {
		term *= x / i;
		sum += term;	
		i++;
	}
	
	switch (sign) {
		case 'x':
			return (1.0 / sum);
		default :
			return sum;
	}
}

double expo(double x) {
	int i;
	double sum, term;
	char sign;
	sign = 'a';
	i = 1;
	sum = 1;
	term = 1;
	
	if(issinf(x) == -1)
		return 0.0;
	else if(x > M_MAX)
		return INFINITY;
	else if(x < 0.0) {
		x = -x;
		sign = 'x';
	}
		
	while(term > 0.000000001) {
		term *= x / i;
		sum += term;	
		i++;
	}
	
	switch (sign) {
		case 'x':
			return (1.0 / sum);
		default :
			return sum;
	}
}

long double expol(long double x) {
	int i;
	long double sum, term;
	char sign;
	sign = 'a';
	i = 1;
	sum = 1;
	term = 1;
	
	if(issinfl(x) == -1)
		return 0.0;
	else if(x > M_MAXL)
		return INFINITY;
	else if(x < 0.0) {
		x = -x;
		sign = 'x';
	}
		
	while(term > 0.000000000001) {
		term *= x / i;
		sum += term;	
		i++;
	}
	
	switch (sign) {
		case 'x':
			return (1.0 / sum);
		default :
			return sum;
	}
}


/* finding natural logarithm of a number */
/*
float LNf(float x) {
	float y, t;
	y = 1;
	
	if(x == 1)
		return +0.0;
	else if(issinff(x) == 1)
		return INFINITY;	
	else if(x < 0)
		return NAN;
	else if(x == 0)
		return -INFINITY;
		
	do {
		t = expol(y);
		y -= (1 - (x / t));
	}
	while(1 - (x / t) > 0.0000001); 
	return y;
}

double LN(double x) {
	double y, t, z;
	y = 1;
	
	if(x == 1)
		return +0.0;
	else if(issinf(x) == 1)
		return INFINITY;	
	else if(x < 0)
		return NAN;
	else if(x == 0)
		return -INFINITY;
	
	do {
		t = expol(y);
		z = 1 - (x / t);
		y -= (z);
	}
	while(z > 0.000000001 || z < 0.000000001); 
	return y;	
}

long double LNl(long double x) {
	long double y, t;
	y = 1;
		
	if(x == 1)
		return +0.0;
	else if(issinfl(x) == 1)
		return INFINITY;	
	else if(x < 0)
		return NAN;
	else if(x == 0)
		return -INFINITY;
		
	do {
		t = expol(y);
		y -= (1 - (x / t));
	}
	while(fabsolutel(1 - (x / t)) > 0.0000000000001); 
		
	return y;
}*/

/* power function */ 
/*
float powerf(float x, float y) {
	if(x == 1 || y == 0)
		return 1.0;
	if(x > 0.0)							
		return (expof(y * LNf(x)));
	else if(x == 0)
		return 0;
	else
		return NAN;
}

double power(double x, double y) {
	
	if(x > 0.0) {							
		if(y == 0)
			return 1.0;
		else 
			return (expo(y * LN(x)));
	}
	else if(x == 0)
		return 0;
	else
		return NAN;
}

long double powerl(long double x, long double y) {
	
	if(x > 0.0) {							
		if(y == 0)
			return 1.0;
		else 
			return (expol(y * LNl(x)));
	}
	else if(x == 0)
		return 0;
	else
		return NAN;
}*/

/* finding absolute value of a number */


float fabsolutef(float x) {
	if(x >= 0.0) 
		return x;
	else 
		return (-x);
	
}

double fabsolute(double x) {
	if(x > 0.0) 
		return x;
	else if(x == 0.0) 
		return 0;
	else 
		return (-x);
}

long double fabsolutel(long double x) {
	if(x > 0.0) 
		return x;
	else if(x == 0.0) 
		return 0;
	else 
		return (-x);
}

/* round function */

float rndf(float x) {
	if(issnanf(x))
		return NAN;
	else if(issinf(x) == 1)
		return INFINITY;
    return (x > 0.0) ? flrf(x + 0.5) : ceilngf(x - 0.5);
}

double rnd(double x) {
	if(issnan(x))
		return NAN;
	else if(issinf(x) == 1)
		return INFINITY;
    return (x >= 0.0) ? flr(x + 0.5) : ceilng(x - 0.5);
}

long double rndl(long double x) {
	if(issnanl(x))
		return NAN;
	else if(issinf(x) == 1)
		return INFINITY;
    return (x >= 0.0) ? flrl(x + 0.5) : ceilngl(x - 0.5);
}

/* function to check if argument is nan */

int issnanf(float x) {
	if(x != x)
		return 1;
	else 
		return 0;
}

int issnan(double x) {
	if(x != x)
		return 1;
	else 
		return 0;
}

int issnanl(long double x) {
	if(x != x)
		return 1;
	else 
		return 0;
}

/* function to check if number is infinity */

int issinff(float x) {
	if(x == INFINITY)
		return 1;
	else if(x == -INFINITY)
		return -1;
	else
		return 0;
}

int issinf(double x) {
	if(x == INFINITY)
		return 1;
	else if(x == -INFINITY)
		return -1;
	else
		return 0;
}

int issinfl(long double x) {
	if(x == INFINITY)
		return 1;
	else if(x == -INFINITY)
		return -1;
	else
		return 0;
}

/* function to check if number is finite */

int issfinitef(float x) {
	if(issnanf(x) == 0 && issinff(x) == 0)
		return 1;
	return 0;
}

int issfinite(double x) {
	if(issnanf(x) == 0 && issinff(x) == 0)
		return 1;
	return 0;
}

int issfinitel(long double x) {
	if(issnanf(x) == 0 && issinff(x) == 0)
		return 1;
	return 0;
}


/* comparison functions original */

int isgrt(float x, float y) {
	if(x > y)
		return x;
	else
		return 0;
} 

int isgrteq(float x, float y) {
	if(x > y && ((x - y) <= (PRECISION_F * y) || (x - y) >= (PRECISION_F * y)))
		return x;
	else
		return 0;
}

int isls(float x, float y) {
	if(x < y)
		return x;
	else
		return 0;
}

int islseq(float x, float y) {
	if(x < y && ((x - y) <= (PRECISION_F * y) || (x - y) >= (PRECISION_F * y)))
		return x;
	else
		return 0;
}

/* calculating sinx */

float sinef(float x) {
	char s;
	int i, sign;
    float term, sum;
    i = 3;
    sign = -1;
	s = 'p';
	
	if(issinff(x))
		return -NAN;
	
	if(x > M_PI && x > (-1 * M_PI)) {
		while(x > M_PI) 
			x -= (2 * M_PI);
	}
	else if(x  < (-1 * M_PI) && x < M_PI) {
		while(x < (-1 * M_PI))
			x += (2 * M_PI);
	}
	
	if(x < 0) {
		x = -x;
		s = 'n';
	}
	
	term = x;
    sum = x;
    
    while(term > 0.0000001) {
    	term *= (x * x) / (i * (i - 1));
    	sum += (sign * term);
    	sign *= (-1);
    	i += 2;
    }
    
    switch(s) {
    	case 'p':
    		return sum;
    	default :
    		return (-1.0 * sum);
	}
}

double sine(double x) {
    char s;
    int i, sign;
    double term, sum;
    i = 3;
    sign = -1;
	s = 'p';
	
	if(issinf(x))
		return -NAN;
	
	if(x > M_PI && x > (-1 * M_PI)) {
		while(x > M_PI) 
			x -= (2 * M_PI);
	}
	else if(x  < (-1 * M_PI)) {
		while(x < (-1 * M_PI))
			x += (2 * M_PI);
	}
	
	if(x < 0) {
		x = -x;
		s = 'n';
	}
	
	term = x;
    sum = x;
    	
    while(term > 0.0000001) {
    	term *= (x * x) / (i * (i - 1));
    	sum += (sign * term);
    	sign *= (-1);
    	i += 2;
    }
    
    switch(s) {
    	case 'p':
    		return sum;
    	default :
    		return (-1.0 * sum);
	}
}

long double sinel(long double x) {
    char s;
    int i, sign;
    long double term, sum;
    i = 3;
    sign = -1;
	s = 'p';
	
	if(issinfl(x))
		return -NAN;
		
	if(x > M_PIL && x > (-1 * M_PIL)) {
		while(x > M_PIL) 
			x -= (2 * M_PIL);
	}
	else if(x  < (-1 * M_PIL)) {
		while(x < (-1 * M_PIL))
			x += (2 * M_PIL);
	}
	
	if(x < 0) {
		x = -x;
		s = 'n';
	}
    
    term = x;
    sum = x;
    
    while(term > 0.0000001) {
    	term *= (x * x) / (i * (i - 1));
    	sum += (sign * term);
    	sign *= (-1);
    	i += 2;
    }
    
    switch(s) {
    	case 'p':
    		return sum;
    	default :
    		return (-1.0 * sum);
	}
}

/* calculating cosx */

float cosinef(float x) {
	int i, sign;
    float term, sum;
    i = 2;
    sign = -1;
    term = 1;
    sum = 1;
	
	if(issinff(x))
		return -NAN;	
	
	if(x > M_PI && x > (-1 * M_PI)) {
		while(x > M_PI) 
			x -= (2 * M_PI);
	}
	else if(x  < (-1 * M_PI) && x < M_PI) {
		while(x < (-1 * M_PI))
			x += (2 * M_PI);
	}
    
    while(fabsolute(term) > 0.00000001) {
    	term *= (x * x) / (i * (i - 1));
    	sum += (sign * term);
    	sign *= (-1);
    	i += 2;
    }
    return sum;
}

double cosine(double x) {
    char s;
	int i, sign;
    double term, sum;
    i = 2;
    sign = -1;
    term = 1;
    sum = 1;
	s = 'p';
	
	if(issinf(x))
		return -NAN;
	
	if(x > M_PI && x > (-1 * M_PI)) {
		while(x > M_PI) 
			x -= (2 * M_PI);
	}
	else if(x  < (-1 * M_PI) && x < M_PI) {
		while(x < (-1 * M_PI))
			x += (2 * M_PI);
	}
	
	if(x < 0) {
		x = -x;
		s = 'n';
	}
    
    while(term > 0.00000001) {
    	term *= (x * x) / (i * (i - 1));
    	sum += (sign * term);
    	sign *= (-1);
    	i += 2;
    }
    
    switch(s) {
    	case 'p':
    		return sum;
    	default :
    		return (-1.0 * sum);
	}
}

long double cosinel(long double x) {
    char s;
	int i, sign;
    long double term, sum;
    i = 2;
    sign = -1;
    term = 1;
    sum = 1;
	s = 'p';
	
	if(issinfl(x))
		return -NAN;
	
	if(x > M_PIL && x > (-1 * M_PIL)) {
		while(x > M_PIL) 
			x -= (2 * M_PIL);
	}
	else if(x  < (-1 * M_PIL) && x < M_PIL) {
		while(x < (-1 * M_PIL))
			x += (2 * M_PIL);
	}
	
	if(x < 0) {
		x = -x;
		s = 'n';
	}
    
    while(term > 0.00000001) {
    	term *= (x * x) / (i * (i - 1));
    	sum += (sign * term);
    	sign *= (-1);
    	i += 2;
    }
    
    switch(s) {
    	case 'p':
    		return sum;
    	default :
    		return (-1.0 * sum);
	}
}

/* calculating tanx */

float tangentf(float x) {

	if(issinff(x))
		return -NAN;
		
    if(cosinef(x) == 0)
    	return INFINITY;
    else 
    	return (sinef(x) / cosinef(x));	
}

double tangent(double x) {

	if(issinf(x))
		return -NAN;

    if(cosine(x) == 0)
    	return INFINITY;
    else 
    	return (sine(x) / cosine(x));	
}

long double tangentl(long double x) {

	if(issinfl(x))
		return -NAN;

    if(cosinel(x) == 0)
    	return INFINITY;
    else 
    	return (sinel(x) / cosinel(x));	
}

/* sin inverse function */

float asinxf(float x) {

	if(x < -1 || x > 1)
		return NAN;
	else if(x == 0.0)
		return 0.0;
	else if(x == 1.0)
		return M_PI_2;
		
	int i;
	float sum, term;
	i = 3;
	sum = x + ((x * x * x) / 6);
	term = (x * x * x) / 6;
	
	while(term > 0.0000001) {
		term *= (x * x * i * i) / ((i + 1) * (i + 2));
		sum += term;
		i += 2;
	}
	return sum;
}

double asinx(double x) {

	if(x < -1 || x > 1)
		return NAN;
	else if(x == 0.0)
		return 0.0;
	else if(x == 1.0)
		return M_PI_2;
	
	int i;
	double sum, term;
	i = 3;
	sum = x + ((x * x * x) / 6);
	term = (x * x * x) / 6;
	
	while(term > 0.0000001) {
		term *= (x * x * i * i) / ((i + 1) * (i + 2));
		sum += term;
		i += 2;
	}
	return sum;
}

long double asinxl(long double x) {

	if(x < -1 || x > 1)
		return NAN;
	else if(x == 0.0)
		return 0.0;
	else if(x == 1.0)
		return M_PI_2L;
		
	int i;
	long double sum, term;
	i = 3;
	sum = x + ((x * x * x) / 6);
	term = (x * x * x) / 6;
	
	while(term > 0.0000001) {
		term *= (x * x * i * i) / ((i + 1) * (i + 2));
		sum += term;
		i += 2;
	}
	return sum;
}

/* cos inverse function */

float acosxf(float x) {

	if(x < -1 || x > 1)
		return NAN;
	if(x == 1)
		return 0.0;
		
	float sum;
	sum = M_PI_2 - asinxf(x);
	return sum; 
	
}

double acosx(double x) {

	if(x < -1 || x > 1)
		return NAN;
	if(x == 1)
		return 0.0;
		
	double sum;
	sum = M_PI_2 - asinxf(x);
	return sum; 
	
}

long double acosxl(long double x) {

	if(x < -1 || x > 1)
		return NAN;
	if(x == 1)
		return 0.0;
		
	long double sum;
	sum = M_PI_2 - asinxf(x);
	return sum;
	 
}

/* tan inverse function */

float atanxf(float x) {

	 if(x == INFINITY)
		return M_PI_2;
	else if(x == -INFINITY)
		return -M_PI_2;
		
	float ti;
	ti = asinxf(x / (squrtf(1 + (x * x))));
	return ti;
}

double atanx(double x) {

	 if(x == INFINITY)
		return M_PI_2;
	else if(x == -INFINITY)
		return -M_PI_2;
		
	double ti;
	ti = asinx(x / (squrt(1 + (x * x))));
	return ti;
}

long double atanxl(long double x) {

	 if(x == INFINITY)
		return M_PI_2L;
	else if(x == -INFINITY)
		return -M_PI_2L;
		
	long double ti;
	ti = asinxl(x / (squrtl(1 + (x * x))));
	return ti;
}

/* calculating hyperbolic sine 

double sineh(double x) {
    double a;
    
    a = 
    return sum;
}*/

/* square root of a number */

float squrtf(float n) {
	float x = n;
    float y = 1.0;
    
	if(n < 0.0)
		return NAN;

	while((x - y) > 0.0000001) {
		x = (x + y) / 2;
		y = n / x;
	}
	return x;

}

double squrt(double n) {
	double x = n;
    double y = 1.0;
    
	if(n < 0.0)
		return NAN;
     
	while((x - y) > 0.0000001) {
		x = (x + y) / 2;
		y = n / x;
	}
	return x;
}

long double squrtl(long double n) {
	long double x = n;
    long double y = 1.0;
    
	if(n < 0.0) 
		return NAN;
     
	while((x - y) > 0.0000001) {
		x = (x + y) / 2;
		y = n / x;
	}
	return x;
}

/* cube root of a number */

float cubrtf(float x) {
	char sign = 'p';
	float start, end, mid, error;
	start = 0;
	
	if(issnanf(x))
		return NAN;
	else if(x == INFINITY)
		return INFINITY;
	else if(x == -INFINITY)
		return -INFINITY;
	
   if(x < 0) {
    	x = -x;
    	sign = 'n';
    }
    
    end = x;
    while (1) {
    
        mid = (start + end) / 2;
        error = fabsolute(x- mid * mid * mid);
        
        if (error <= 0.0000001)
            return mid;
        else if ((mid * mid * mid) > x)
            end = mid;
        else
            start = mid;
    }
}

double cubrt(double x) {
	char sign = 'p';
    double start, end, mid, error;
	start = 0;
   
    if(issnan(x))
		return NAN;
	else if(x == INFINITY)
		return INFINITY;
	else if(x == -INFINITY)
		return -INFINITY;
    
    if(x < 0) {
    	x = -x;
    	sign = 'n';
    }
    
    end = x;
    while (1) {
    
        mid = (start + end) / 2;
        error = fabsolute(x- mid * mid * mid);
        
        if (error <= 0.000000001)
            return mid;
        else if ((mid * mid * mid) > x)
            end = mid;
        else
            start = mid;
    }
}


long double cubrtl(long double x) {
	char sign = 'p';
	long double start, end, mid, error;
	start = 0;
   
    if(issnanl(x))
		return NAN;
	else if(x == INFINITY)
		return INFINITY;
	else if(x == -INFINITY)
		return -INFINITY;
    
    if(x < 0) {
    	x = -x;
    	sign = 'n';
    }
    
    end = x;
    while (1) {
    
        mid = (start + end) / 2;
        error = fabsolute(x- mid * mid * mid);
        
        if (error <= 0.000000000001) {
         	if(sign == 'n')
         		return (-1 * mid);
            return mid;
        }
        else if ((mid * mid * mid) > x)
            end = mid;
        else
            start = mid;
    }
}

/* calculate ceiling of a number */

float ceilngf(float x) {

	if(issnanf(x))
		return NAN;
		
	if(x <= 0 || (x - (int)x) == 0)
	 	return (int)x;
	return (int)x + 1.0;
	
}

double ceilng(double x) {

	if(issnan(x))
		return NAN;	
		 
	if(x <= 0 || (x - (int)x) == 0)
	 	return (int)x;
	return (int)x + 1.0;
	
}

long double ceilngl(long double x) {

	if(issnanl(x))
		return NAN;	
			 
	if(x <= 0 || (x - (int)x) == 0)
	 	return (int)x;
	return (int)x + 1.0;
	
}

/* calculate floor of a number */

float flrf(float x) {

	if(issnanf(x))
		return NAN;
		
	if(x >= 0 || (x - (int)x) == 0)
	 	return (int)x;
	return (int)x - 1.0;
	
}

double flr(double x) {

	if(issnan(x))
		return NAN;
			 
	if(x >= 0 || (x - (int)x) == 0)
	 	return (int)x;
	return (int)x - 1.0;
	
}

long double flrl(long double x) {
	
	if(issnanl(x))
		return NAN;	
		 
	if(x >= 0 || (x - (int)x) == 0)
	 	return (int)x;
	return (int)x - 1.0;
	
}
