// 已知 a = {4, 3, 2, 1}，将前3位拼接还原为一个int即234

#include <iostream>

int main(int argc, char * argv[])
{
	int a[4] = {4, 3, 2, 1};

	int num = 0, base = 1;
	for (int i = 0; i < 3; i++) {
		num += base * a[i];
		base *= 10;
	}
	std::cout << num << std::endl;

	return 0;
}