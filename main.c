#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int a,b,c,d;
	double x1,x2;
	a=3;b=4;c=1;
	d=b*b-4*a*c;
	printf("d=%d \n",d);
	if (d<0)
	{
		printf("No roots");
	}
	x1 = (-b + sqrt(d) / (2*a));
	x2 = (-b -sqrt(d) / (2*a));
	printf("x1=%lf, x2=%lf", x1,x2);
	return 0;
}
