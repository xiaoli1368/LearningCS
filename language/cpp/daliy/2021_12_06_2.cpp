// 使用string的版本，处理无限输入
// 思考不使用递归的方式，而是循环

#include <iostream>
#include <string>

int shortestTransformOfTwoString(std::string s1, std::string s2) {
	if (s1 == s2) {
		return 0;
	} else if (s1.empty()) {
		return s2.size();
	} else if (s2.empty()) {
		return s1.size();
	}

    int n1 = shortestTransformOfTwoString(s1.substr(1, s1.size() - 1), s2);
	int n2 = shortestTransformOfTwoString(s1, s2.substr(1, s2.size() - 1));
	return 1 + (n1 < n2 ? n1 : n2);
}

int main(int argc, char *argv[])
{
	std::string s1, s2;
	std::cin >> s1 >> s2;
	std::cout << shortestTransformOfTwoString(s1, s2) << std::endl;

	return 0;
}