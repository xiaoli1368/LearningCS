// 二维数组寻找鞍点

#include <stdio.h>
#include <stdbool.h>

bool isTargetPos(int array[6][6], int n, int i, int j) {
	for (int t = 0; t < n; t++) {
		if (array[t][j] < array[i][j] || array[i][t] > array[i][j]) {
			return false;
		}
	}

	return true;
}

int main(int argc, char * argv[])
{
	int n = 0;
	int array[6][6] = {0};

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &array[i][j]);
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (isTargetPos(array, n, i, j)) {
				printf("%d %d\n", i, j);
				return 0;
			}
		}
	}

	printf("NONE\n");
	return 0;
}