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

/* Declarations for math functions */
#ifndef __MATHS_H
#define __MATHS_H

/*  NEGATIVE_ZERO is similar to POSITIVE_ZERO, but it represents an infinitely small 
	quantity which is known to be always non-positive while POSITIVE_ZERO represents
	an infinitely small quantity which is always non-negative or is imagined as 
	smallest positive real number. 
	The properties of NEGATIVE_ZERO are analog to the properties of POSITIVE_ZERO. 
*/

#define     P_ZERO		  1.0 * 0
#define		N_ZERO 		  -1.0 * 0
#define 	NAN           __builtin_nan("")
#define 	INFINITY      __builtin_inf()
#define     M_MAXF        88.0000000000000000000
#define     M_MAX         708.000000000000000000
#define     M_MAXL		  11357.0000000000000000
#define     MAX			  128

/*  POSITIVE_ZERO is a result of positive underflow. POSITIVE_INFINITY is the 
	result of positive overflow. 
*/

#define 	M_E       	  2.71828182845904523540
#define 	M_LOG2E   	  1.44269504088896340740    /* log_2 e */ 
#define 	M_LOG10E  	  0.43429448190325182765	/* log_10 e */ 
#define 	M_LN2     	  0.69314718055994530942	/* log_e 2 */ 
#define 	M_LN10    	  2.30258509299404568402	/* log_e 10 */ 
#define 	M_PI      	  3.14159265358979323846	/* pi */ 
#define 	M_PI_2    	  1.57079632679489661923	/* pi/2 */
#define 	M_PI_4    	  0.78539816339744830962	/* pi/4 */
#define 	M_1_PI    	  0.31830988618379067154	/* 1/pi */ 
#define 	M_2_PI     	  0.63661977236758134308	/* 2/pi */ 
#define 	M_2_SQRTPI   1.12837916709551257390	/* 2/sqrt(pi) */
#define 	M_SQRT2      1.41421356237309504880	/* sqrt(2) */ 
#define 	M_SQRT1_2    0.70710678118654752440	/* 1/sqrt(2) */ 

#define PRECISION_F  0.00001
#define PRECISION    0.000001
#define PRECISION_L  0.0000001

/*for long double */
# define M_EL			2.718281828459045235360287471352662498L /* e */
# define M_LOG2EL		1.442695040888963407359924681001892137L /* log_2 e */
# define M_LOG10EL		0.434294481903251827651128918916605082L /* log_10 e */
# define M_LN2L			0.693147180559945309417232121458176568L /* log_e 2 */
# define M_LN10L		2.302585092994045684017991454684364208L /* log_e 10 */
# define M_PIL			3.141592653589793238462643383279502884L /* pi */
# define M_PI_2L		1.570796326794896619231321691639751442L /* pi/2 */
# define M_PI_4L		0.785398163397448309615660845819875721L /* pi/4 */
# define M_1_PIL		0.318309886183790671537767526745028724L /* 1/pi */
# define M_2_PIL		0.636619772367581343075535053490057448L /* 2/pi */
# define M_2_SQRTPIL	1.128379167095512573896158903121545172L /* 2/sqrt(pi) */
# define M_SQRT2L		1.414213562373095048801688724209698079L /* sqrt(2) */
# define M_SQRT1_2L	    0.707106781186547524400844362104849039L /* 1/sqrt(2) */

float expof(float x);
double expo(double x);
long double expol(long double x);

float LNf(float x);
double LN(double x);
long double LNl(long double x);

float powerf(float x, float y);
double power(double x, double y);
long double powerl(long double x, long double y);

float fabsolutef(float x);
double fabsolute(double x);
long double fabsolutel(long double x);

float rndf(float x);
double rnd(double x);
long double rndl(long double x);

int issnanf(float x);
int issnan(double x);
int issnanl(long double);

int issinff(float x);
int issinf(double x);
int issinfl(long double x);

int issfinitef(float x);
int issfinite(double x);
int issfinitel(long double x);

int isgrt(float x, float y);
int isgrteq(float x, float y);
int isls(float x, float y);
int islseq(float x, float y);

float sinef(float x);
double sine(double x);
long double sinel(long double x);

float cosinef(float x);
double cosine(double x);
long double cosinel(long double x);

float tangentf(float x); 
double tangent(double x);
long double tangentl(long double x);

float asinxf(float x);
double asinx(double x);
long double asinxl(long double x);

float acosxf(float x);
double acosx(double x);
long double acosxl(long double x);

float atanxf(float x);
double atanx(double x);
long double atanxl(long double x);

float squrtf(float n);
double squrt(double n);
long double squrtl(long double n);

float cubrtf(float n);
double cubrt(double n);
long double cubrtl(long double n);

float ceilngf(float x);
double ceilng(double x);
long double ceilngl(long double x);

float flrf(float x);
double flr(double x);
long double flrl(long double x);

#endif
