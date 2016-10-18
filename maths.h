/* Declarations for math functions */
#ifndef __MATHS_H
#define __MATHS_H

#define 	M_e   2.7182818284590452354
#define 	M_LOG2e   1.4426950408889634074	/* log_2 e */ 
#define 	M_LOG10e   0.43429448190325182765	/* log_10 e */ 
#define 	M_LN2   0.69314718055994530942	/* log_e 2 */ 
#define 	M_LN10   2.30258509299404568402	/* log_e 10 */ 
#define 	M_PI   3.14159265358979323846	/* pi */ 
#define 	M_PI_2   1.57079632679489661923	/* pi/2 */
#define 	M_PI_4   0.78539816339744830962	/* pi/4 */
#define 	M_1_PI   0.31830988618379067154	/* 1/pi */ 
#define 	M_2_PI   0.63661977236758134308	/* 2/pi */ 
#define 	M_2_squrtPI   1.12837916709551257390	/* 2/sqrt(pi) */
#define 	M_squrt2   1.41421356237309504880	/* sqrt(2) */ 
#define 	M_squrt1_2   0.70710678118654752440	/* 1/sqrt(2) */ 
#define 	NAN   __builtin_nan("")
#define 	INFINITY   __builtin_inf()

/*for long double */
# define M_el		2.718281828459045235360287471352662498L /* e */
# define M_LOG2el	1.442695040888963407359924681001892137L /* log_2 e */
# define M_LOG10el	0.434294481903251827651128918916605082L /* log_10 e */
# define M_LN2l		0.693147180559945309417232121458176568L /* log_e 2 */
# define M_LN10l	2.302585092994045684017991454684364208L /* log_e 10 */
# define M_PIl		3.141592653589793238462643383279502884L /* pi */
# define M_PI_2l	1.570796326794896619231321691639751442L /* pi/2 */
# define M_PI_4l	0.785398163397448309615660845819875721L /* pi/4 */
# define M_1_PIl	0.318309886183790671537767526745028724L /* 1/pi */
# define M_2_PIl	0.636619772367581343075535053490057448L /* 2/pi */
# define M_2_squrtPIl	1.128379167095512573896158903121545172L /* 2/sqrt(pi) */
# define M_squrt2l	1.414213562373095048801688724209698079L /* sqrt(2) */
# define M_squrt1_2l	0.707106781186547524400844362104849039L /* 1/sqrt(2) */


float powerf(float x, int y);
double power(double x, int y);
long double powerl(long double x, int y);

float expof(int x);
double expo(int x);
long double expol(int x);

float fabsolutef(float x);
double fabsolute(double x);
long double fabsolutel(long double x);

long int factorial(long int n);
double isgreat(double x, double y);
double isgreateq(double x, double y);
double islessereq(double x, double y);
double islesser(double x, double y);

float sinef(float x);
double sine(double x);
long double sinel(long double x);

float cosecantf(float x);
double cosecant(double x);
long double cosecantl(long double x);

float cosinef(float x);
double cosine(double x);
long double cosinel(long double x);

float secantf(float x);
double secant(double x);
long double secantl(long double x);

float tangentf(float x); 
double tangent(double x);
long double tangentl(long double x);

float cotangentf(float x);
double cotangent(double x);
long double cotangentl(long double x);

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









