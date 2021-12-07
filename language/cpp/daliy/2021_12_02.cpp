#include <iostream>

void swap(int* vec, int i, int j) {
	int tmp = vec[i];
	vec[i] = vec[j];
	vec[j] = tmp;
}

int getReverseNum(int num) {
	int n = 0;
	while (num) {
		n *= 10;
		n += num % 10;
		num /= 10;
	}
	return n;
}

void bubbleSort(int* vec, int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1 - i; j++) {
			if (vec[j] > vec[j + 1]) {
				swap(vec, i, j);
			}
		}
	}
}

void printVec(int *vec, int size) {
	for (int i = 0; i < size; i++) {
		std::cout << vec[i] << " "; 
	}
	std::cout << std::endl;
}

void getLineDataAndOutput() {
	int size, vec[80], tmp;
	std::cin >> size;
	for (int i = 0; i < size; i++) {
		std::cin >> tmp;
		vec[i] = getReverseNum(tmp);
	}
	bubbleSort(vec, size);
	printVec(vec, size);
}

int main(int argc, char * argv[])
{
	int groupNum;
	std::cin >> groupNum;
	for (int i = 0; i < groupNum; i++) {
		getLineDataAndOutput();
	}

	return 0;
}