// 问题：对n位整数，取后n-1位
// 思路：遍历得出位数n或者除数，对10^n取余
// 例子：输入1234，遍历得出是4位数，并且累乘得到1000，使用 1234 % 1000 = 234

#include <iostream>

int getLastKNum(int num) {
	if (num < 0) {
		num = -num;
	}

	if (num >= 0 && num < 10) {
		return num;
	}

	int n = num, mod = 1;
	while (n) {
		n /= 10;
		mod *= 10;
	}

	return num % (mod / 10);
}

int main(int argc, char * argv[])
{
	int n;
	std::cin >> n;
	std::cout << getLastKNum(n) << std::endl;

	return 0;
}