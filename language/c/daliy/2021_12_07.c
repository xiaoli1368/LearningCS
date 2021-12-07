// 计算微积分

#include <stdio.h>
#include <math.h>

float calculateTanByRect(int size) {
	float sum = 0;
	float x_start = M_PI / -4;
	float x_end = M_PI / 4;
	float dx = (x_end - x_start) / size;

	for (float i = x_start; i <= x_end; i += dx) {
		sum += tan(i) * dx;
	}
	
	return sum;
}

float calculateTanByTrap(int size) {
	float sum = 0;
	float x_start = M_PI / -4;
	float x_end = M_PI / 4;
	float dx = (x_end - x_start) / size;

	for (float i = x_start; i <= x_end; i += dx) {
		sum += (tan(i) + tan(i + dx)) * dx / 2;
	}
	
	return sum;
}

float calculateExByRect(int size) {
	float sum = 0;
	float x_start = -exp(1);
	float x_end = exp(1);
	float dx = (x_end - x_start) / size;

	for (float i = x_start; i <= x_end; i += dx) {
		sum += exp(i) * dx;
	}
	
	return sum;
}

float calculateExByTrap(int size) {
	float sum = 0;
	float x_start = M_PI / -4;
	float x_end = M_PI / 4;
	float dx = (x_end - x_start) / size;

	for (float i = x_start; i <= x_end; i += dx) {
		sum += (exp(i) + exp(i + dx)) * dx / 2;
	}
	
	return sum;return 0;
}

int main(int argc, char *argv[])
{
	printf("===== result of tan =====\n");
	for (int i = 10; i <= 1000; i *= 10) {
		printf("size: %4d, rectResult: %.6f, trapResult: %.6f\n", i + 1, calculateTanByRect(i + 1), calculateTanByTrap(i + 1));
	}

	printf("===== result of ex =====\n");
	for (int i = 10; i <= 1000; i *= 10) {
		printf("size: %4d, rectResult: %.6f, trapResult: %.6f\n", i + 1, calculateExByRect(i + 1), calculateExByTrap(i + 1));
	}

	return 0;
}