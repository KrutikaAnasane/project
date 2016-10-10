#include<stdio.h>

float squareRoot(float n)
{
  /*We are using n itself as initial approximation
   This can definitely be improved */
  float x = n;
  float y = 1;
  float e = 0.000001; /* e decides the accuracy level*/
  while(x - y > e)
  {
    x = (x + y)/2;
    y = n/x;
  }
  return x;
}
 
 int main() {
 	float c, d;
 	scanf("%f", &c);
 	d = squareRoot(c);
 	printf("sqrt is %f", d);
 
 }
