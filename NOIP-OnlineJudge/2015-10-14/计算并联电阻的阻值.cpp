#include<stdio.h>
int main()
{
	float a, b, c;
	scanf("%f%f", &a, &b);
	c = 1 / (1 / a + 1 / b);
	printf("%.2f", c);
	getchar(); getchar(); 
	return 0;
}
