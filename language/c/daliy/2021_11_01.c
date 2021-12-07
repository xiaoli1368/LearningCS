#include <stdio.h>

int main(int argc, char * argv[])
{
	double m1 = 26.308, m2 = 26.445, m3 = 26.558, m4 = 26.702, m5 = 26.804;
	double M1 = 34.859, M2 = 34.756, M3 = 34.628, M4 = 34.496, M5 = 34.356;
	double D1 = M1 - m1, D2 = M2 - m2, D3 = M3 - m3, D4 = M4 - m4, D5 = M5 - m5;
	printf("%f, %f, %f, %f, %f\n", D1, D2, D3, D4, D5);
	return 0;
}