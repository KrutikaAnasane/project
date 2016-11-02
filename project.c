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
#include <math.h>
#include <sys/types.h>  /* for open() */
#include <sys/stat.h>  /* for open() */
#include <fcntl.h>    /* for open() */
#include <unistd.h>  /* for read() */  
#include <errno.h>

enum function{EXP, ABS, ROUND, ISNAN, ISINF, ISFINITE, GREATER, GREATEREQUAL, LESS, 
			  LESSEQUAL, SINX, COSX, TANX, ASIN, ACOS, ATAN, SQRT, CUBEROOT, CEIL, 
			  FLOOR};

/*  Struct contains integer representing function to used; float, double, long double, 
	represents input value to function written for float, double, long double data type
	respectively.  	 
*/

typedef struct data {
	int testno;
	float x;
	double y;
	long double z;
}data;

/*  Floating point values should not be compared using either the == or != operators. 
    Most floating point values have no exact binary representation and have a limited
    precision i.e cannot be precisely represented using binary floating point numbers. 
*/

/*  fltcmpf, fltcmp, fltcmpl compares two float, double, long double values and return
    1 if they are equal and 0 if they are not. Two numbers with value +Infinity or 
    -Infinity can't be compared directly; these function returns non zero value if both 
    arguments are +infinity or -infinity and 0 if not. Similarly these functions handle
    nan cases. 
*/

int fltcmpf(float x, float y);

int fltcmpf(float x, float y) {
	
	if((x - y) <= (PRECISION_F * y) || (x - y) >= (PRECISION_F * y))
		return 1;
	else if(x == INFINITY && y == INFINITY)
		return 2;
	else if(x == -INFINITY && y == -INFINITY)
		return 3;
	else if(x != x && y != y)
		return 4;
	else
		return 0;		   
}

int fltcmp(double x, double y);
 
int fltcmp(double x, double y) {
	
	if((x - y) <= (PRECISION_F * y) || (x - y) >= (PRECISION_F * y))
		return 1;
	else if(x == INFINITY && y == INFINITY)
		return 2;
	else if(x == -INFINITY && y == -INFINITY)
		return 3;
	else if(x != x && y != y)
		return 4;
	else
		return 0;
		     
}

int fltcmpl(long double x, long double y);

int fltcmpl(long double x, long double y) {
	
	if((x - y) <= (PRECISION_F * y) || (x - y) >= (PRECISION_F * y))
		return 1;
	else if(x == INFINITY && y == INFINITY)
		return 2;
	else if(x == -INFINITY && y == -INFINITY)
		return 3;
	else if(x != x && y != y)
		return 4;
	else
		return 0;
		   
}

/* test code log  float = 23455 */

int main(int argc, char *argv[]) {
	FILE *fp;
	int i = 0;
	float t, m;
	double a, b;
	long double p, q;
	data arr[MAX];
	
	if (argc != 2){
		printf("usage: ./test1 <filename>\n" );
		perror("failed\n");
		return errno;
	}
	
	fp = fopen(argv[1], "r");
	
	if (fp == NULL) {
		perror("bad address\n");
		return errno;
	}
	
	while(fscanf(fp, "%d", &arr[i].testno) != -1) {
		switch(arr[i].testno) { 
			case EXP:
			
				printf("-------------------------------\nCASE 0 : Exponential function\n");
				fscanf(fp, "%f%lf%Lf", &arr[i].x, &arr[i].y, &arr[i].z);
				
				t = expof(arr[i].x);
			    m = expf(arr[i].x);
			    	
			    a = expo(arr[i].y);
				b = exp(arr[i].y);
				
				p = expol(arr[i].z);
				q = expl(arr[i].z);
				
				if(fltcmpf(t, m) && fltcmp(a, b) && fltcmpl(p, q))
					printf("Pass\n-------------------------------\n\n");
				else 
					printf("Fail\n-------------------------------\n\n");
					
				break;
				
			case ABS:
			
				printf("-------------------------------\nCASE 1 : Absolute value function\n");
				fscanf(fp, "%f%lf%Lf", &arr[i].x, &arr[i].y, &arr[i].z);
				
				t = fabsolutef(arr[i].x);
			    m = fabsf(arr[i].x);
			    	
			    a = fabsolute(arr[i].y);
				b = fabs(arr[i].y);
				
				p = fabsolutel(arr[i].z);
				q = fabsl(arr[i].z);
				
				if(fltcmpf(t, m) && fltcmp(a, b) && fltcmpl(p, q))
					printf("Pass\n-------------------------------\n\n");
				else 
					printf("Fail\n-------------------------------\n\n");

				break;
				
				case ROUND:
				
				printf("-------------------------------\nCASE 2 : Round function\n");
				fscanf(fp, "%f%lf%Lf", &arr[i].x, &arr[i].y, &arr[i].z);
				
				t = roundf(arr[i].x);
			    m = rndf(arr[i].x);
			    	
			    a = round(arr[i].y);
				b = rnd(arr[i].y);
				
				p = roundl(arr[i].z);
				q = rndl(arr[i].z);
				
				if(fltcmpf(t, m) && fltcmp(a, b) && fltcmpl(p, q))
					printf("Pass\n-------------------------------\n\n");
				else 
					printf("Fail\n-------------------------------\n\n");

				break;
				
				case ISNAN:
				
				printf("-------------------------------\nCASE 3 : Isnan function\n");
				fscanf(fp, "%f%lf%Lf", &arr[i].x, &arr[i].y, &arr[i].z);
				
				t = isnan(arr[i].x);
			    m = issnanf(arr[i].x);
			    	
			    a = isnan(arr[i].y);
				b = issnan(arr[i].y);
				
				p = isnan(arr[i].z);
				q = issnanl(arr[i].z);
				
				if(fltcmpf(t, m) && fltcmp(a, b) && fltcmpl(p, q))
					printf("Pass\n-------------------------------\n\n");
				else 
					printf("Fail\n-------------------------------\n\n");
					
				break;
				
				case ISINF:
				
				printf("-------------------------------\nCASE 4 : Isinf function\n");
				fscanf(fp, "%f%lf%Lf", &arr[i].x, &arr[i].y, &arr[i].z);
				
				t = isinf(arr[i].x);
			    m = issinff(arr[i].x);
			    	
			    a = isinf(arr[i].y);
				b = issinf(arr[i].y);
				
				p = isinf(arr[i].z);
				q = issinfl(arr[i].z);
				
				if(fltcmpf(t, m) && fltcmp(a, b) && fltcmpl(p, q))
					printf("Pass\n-------------------------------\n\n");
				else 
					printf("Fail\n-------------------------------\n\n");
					
				break;
				
				case ISFINITE:
				
				printf("-------------------------------\nCASE 5 : Isfinite function\n");
				fscanf(fp, "%f%lf%Lf", &arr[i].x, &arr[i].y, &arr[i].z);
				
				t = isfinite(arr[i].x);
			    m = issfinitef(arr[i].x);
			    	
			    a = isfinite(arr[i].y);
				b = issfinite(arr[i].y);
				
				p = isfinite(arr[i].z);
				q = issfinitel(arr[i].z);
				
				if(fltcmpf(t, m) && fltcmp(a, b) && fltcmpl(p, q))
					printf("Pass\n-------------------------------\n\n");
				else 
					printf("Fail\n-------------------------------\n\n");
					
				break;
				
				case GREATER:
				
				printf("-------------------------------\nCASE 6 : Isgreater function\n");
				fscanf(fp, "%f", &arr[i].x);
				
				t = isgreater(arr[i].x, 123.456);
			    m = isgrt(arr[i].x, 123.456);
				
				if(fltcmpf(t, m))
					printf("Pass\n-------------------------------\n\n");
				else 
					printf("Fail\n-------------------------------\n\n");
					
				break;
				
				case GREATEREQUAL:
				
				printf("-------------------------------\nCASE 7 : Isgreaterequal function\n");
				fscanf(fp, "%f", &arr[i].x);
				
				t = isgreaterequal(arr[i].x, 123.456);
			    m = isgrteq(arr[i].x, 123.456);
				
				if(fltcmpf(t, m))
					printf("Pass\n-------------------------------\n\n");
				else 
					printf("Fail\n-------------------------------\n\n");
					
				break;
				
				case LESS:
				
				printf("-------------------------------\nCASE 8 : Isless function\n");
				fscanf(fp, "%f", &arr[i].x);
				
				t = isless(arr[i].x, 123.456);
			    m = isls(arr[i].x, 123.456);
				
				if(fltcmpf(t, m))
					printf("Pass\n-------------------------------\n\n");
				else 
					printf("Fail\n-------------------------------\n\n");
					
				break;
				
				case LESSEQUAL:
				
				printf("-------------------------------\nCASE 9 : Islessequal function\n");
				fscanf(fp, "%f", &arr[i].x);
				
				t = islessequal(arr[i].x, 123.456);
			    m = islseq(arr[i].x, 123.456);
				
				if(fltcmpf(t, m))
					printf("Pass\n-------------------------------\n\n");
				else 
					printf("Fail\n-------------------------------\n\n");
					
				break;
				
				case SINX:
				
				printf("-------------------------------\nCASE 10 : Sine function\n");
				fscanf(fp, "%f%lf%Lf", &arr[i].x, &arr[i].y, &arr[i].z);
				
				t = sinf(arr[i].x);
			    m = sinef(arr[i].x);
			    
			    a = sin(arr[i].y);
				b = sine(arr[i].y);
					
				p = sinl(arr[i].z);
				q = sinel(arr[i].z);
				
				if(fltcmpf(t, m) && fltcmp(a, b) && fltcmpl(p, q))
					printf("Pass\n-------------------------------\n\n");
				else 
					printf("Fail\n-------------------------------\n\n");

				break;
				
				case COSX:
				
				printf("-------------------------------\nCASE 11 : Cosine function\n");
				fscanf(fp, "%f%lf%Lf", &arr[i].x, &arr[i].y, &arr[i].z);
				
				t = cosf(arr[i].x);
			    m = cosinef(arr[i].x);
			    
			    a = cos(arr[i].y);
				b = cosine(arr[i].y);
					
				p = cosl(arr[i].z);
				q = cosinel(arr[i].z);
				
				if(fltcmpf(t, m) && fltcmp(a, b) && fltcmpl(p, q))
					printf("Pass\n-------------------------------\n\n");
				else 
					printf("Fail\n-------------------------------\n\n");
		
				break;
				
				case TANX:
				
				printf("-------------------------------\nCASE 12 : Tangent function\n");
				fscanf(fp, "%f%lf%Lf", &arr[i].x, &arr[i].y, &arr[i].z);
				
				t = tanf(arr[i].x);
			    m = tangentf(arr[i].x);

			    a = tan(arr[i].y);
				b = tangent(arr[i].y);
					
				p = tanl(arr[i].z);
				q = tangentl(arr[i].z);
				
				if(fltcmpf(t, m) && fltcmp(a, b) && fltcmpl(p, q))
					printf("Pass\n-------------------------------\n\n");
				else 
					printf("Fail\n-------------------------------\n\n");
					
				break;
				
				case ASIN:
				
				printf("-------------------------------\nCASE 13 : Sine inverse function\n");
				fscanf(fp, "%f%lf%Lf", &arr[i].x, &arr[i].y, &arr[i].z);
				
				t = asinf(arr[i].x);
			    m = asinxf(arr[i].x);
			    
			    a = asin(arr[i].y);
				b = asinx(arr[i].y);
					
				p = asinl(arr[i].z);
				q = asinxl(arr[i].z);
				
				if(fltcmpf(t, m) && fltcmp(a, b) && fltcmpl(p, q))
					printf("Pass\n-------------------------------\n\n");
				else 
					printf("Fail\n-------------------------------\n\n");

				break;
				
				case ACOS:
				
				printf("-------------------------------\nCASE 14 : Cosine inverse function\n");
				fscanf(fp, "%f%lf%Lf", &arr[i].x, &arr[i].y, &arr[i].z);
				
				t = acosf(arr[i].x);
			    m = acosxf(arr[i].x);
			    
			    a = acos(arr[i].y);
				b = acosx(arr[i].y);
					
				p = acosl(arr[i].z);
				q = acosxl(arr[i].z);
				
				if(fltcmpf(t, m) && fltcmp(a, b) && fltcmpl(p, q))
					printf("Pass\n-------------------------------\n\n");
				else 
					printf("Fail\n-------------------------------\n\n");

				break;
				
				case ATAN:
				
				printf("-------------------------------\nCASE 15 : Tan inverse function\n");
				fscanf(fp, "%f%lf%Lf", &arr[i].x, &arr[i].y, &arr[i].z);
				
				t = atanf(arr[i].x);
			    m = atanxf(arr[i].x);
			    
			    a = atan(arr[i].y);
				b = atanx(arr[i].y);
					
				p = atanl(arr[i].z);
				q = atanxl(arr[i].z);
				
				if(fltcmpf(t, m) && fltcmp(a, b) && fltcmpl(p, q))
					printf("Pass\n-------------------------------\n\n");
				else 
					printf("Fail\n-------------------------------\n\n");

				break;
				
				case SQRT:
				
				printf("-------------------------------\nCASE 16 : Square root function\n");
				fscanf(fp, "%f%lf%Lf", &arr[i].x, &arr[i].y, &arr[i].z);
				
				t = sqrtf(arr[i].x);
			    m = squrtf(arr[i].x);
			    
			    a = sqrt(arr[i].y);
				b = squrt(arr[i].y);
					
				p = sqrtl(arr[i].z);
				q = squrtl(arr[i].z);
				
				if(fltcmpf(t, m) && fltcmp(a, b) && fltcmpl(p, q))
					printf("Pass\n-------------------------------\n\n");
				else 
					printf("Fail\n-------------------------------\n\n");

				break;
				
				case CUBEROOT:
				
				printf("-------------------------------\nCASE 17 : Cube root function\n");
				fscanf(fp, "%f%lf%Lf", &arr[i].x, &arr[i].y, &arr[i].z);
				
				t = cbrtf(arr[i].x);
			    m = cubrtf(arr[i].x);
			    
			    a = cbrt(arr[i].y);
				b = cubrt(arr[i].y);
					
				p = cbrtl(arr[i].z);
				q = cubrtl(arr[i].z);
				
				if(fltcmpf(t, m) && fltcmp(a, b) && fltcmpl(p, q))
					printf("Pass\n-------------------------------\n\n");
				else 
					printf("Fail\n-------------------------------\n\n");

				break;
				
				case CEIL:
				
				printf("-------------------------------\nCASE 18 : Ceiling function\n");
				fscanf(fp, "%f%lf%Lf", &arr[i].x, &arr[i].y, &arr[i].z);
				
				t = ceilf(arr[i].x);
			    m = ceilngf(arr[i].x);
			    
			    a = ceil(arr[i].y);
				b = ceilng(arr[i].y);
					
				p = ceill(arr[i].z);
				q = ceilngl(arr[i].z);
				
				if(fltcmpf(t, m) && fltcmp(a, b) && fltcmpl(p, q))
					printf("Pass\n-------------------------------\n\n");
				else 
					printf("Fail\n-------------------------------\n\n");

				break;
				
				case FLOOR:
				
				printf("-------------------------------\nCASE 19 : Floor function\n");
				fscanf(fp, "%f%lf%Lf", &arr[i].x, &arr[i].y, &arr[i].z);
				
				t = floorf(arr[i].x);
			    m = flrf(arr[i].x);
			    
			    a = floor(arr[i].y);
				b = flr(arr[i].y);
					
				p = floorl(arr[i].z);
				q = flrl(arr[i].z);
				
				if(fltcmpf(t, m) && fltcmp(a, b) && fltcmpl(p, q))
					printf("Pass\n-------------------------------\n\n");
				else 
					printf("Fail\n-------------------------------\n\n");

				break;
				
			default : 
				break;	
				
		}
		i++;
	}
}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

