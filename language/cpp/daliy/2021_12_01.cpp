// 交换两个int值
// 符号    地址       内存大小     值
//  a    0x0000111   4字节空间     3
//  b    0x0000545   4字节空间     4


#include <iostream>

void swap1(int x, int y) {
	int tmp = x;
	x = y;
	y = tmp;
}

void swap2(int* x, int* y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

void swap3(int& x, int& y) {
	int tmp = x;
	x = y;
	y = tmp;
}

int main(int argc, char * argv[])
{
	int a1 = 3, b1 = 4;
	swap1(a1, b1);
	std::cout << a1 << ", " << b1 << std::endl; 

	int a2 = 3, b2 = 4;
	swap2(&a2, &b2);
	std::cout << a2 << ", " << b2 << std::endl; 	

	int a3 = 3, b3 = 4;
	swap3(a3, b3);
	std::cout << a3 << ", " << b3 << std::endl; 

	return 0;
}