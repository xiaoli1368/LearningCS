#include <stdio.h>

// 保存连续输入的一串数字到数组，返回个数，-1表示包括负数
int getAllNumber(int points[]) {
	printf("[INFO] please input some numbers:\n");

	int curr = 0, size = 0;
	while (scanf("%d", &curr)) {
		if (curr == -1) {
			size = -1;
			break;
		}
		points[size++] = curr;

		if (getchar() == '\n') {
			break;
		}
	}

	if (size == -1) {
		printf("[ERROR] input can't include negative numbers!\n");
	}

	if (size == 0) {
		printf("[WARN] input nothing valid\n");
	}

	return size;
}

// 获取数组的平均数
float getAverage(int points[], int size) {
	if (size == 0) {
		return 0;
	}

	float sum = 0;
	for (int i = 0; i < size; i++) {
		sum += points[i];
	}
	return sum / size;
}

// 获取小于平均数的元素百分比
float percentageOfLowToAverage(int points[], int size) {
	if (size == 0) {
		return 0;
	}

	int count = 0;
	float average = getAverage(points, size);
	for (int i = 0; i < size; i++) {
		if (points[i] < average) {
			count += 1;
		}
	}
	
	return count * 1.0 / size;
}

int main(int argc, char * argv[])
{
	int points[30] = {0};
	int size = getAllNumber(points);

	if (size > 0) {
		float percentage = percentageOfLowToAverage(points, size);
		printf("[INFO] The percentage of students number low to average is %f", percentage);
	}

	return 0;
}