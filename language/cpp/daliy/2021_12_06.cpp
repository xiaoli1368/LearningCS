// 最少经过多少次处理，两个字符串相等
// 输入两个字符串，每次处理指任取一个字符串，删除首个字符
// 1. 动态规划 2. 递归
// 固定长度版本

#include <iostream>
#include <string.h>

int shortestTransformOfTwoString(char *s1, char *s2) {
	if (s1[0] == '\0') {
		return strlen(s2);
	} else if (s2[0] == '\0') {
		return strlen(s1);
	} else if (strcmp(s1, s2) == 0) {
		return 0;
	}

	int n1 = shortestTransformOfTwoString(s1 + 1, s2);
	int n2 = shortestTransformOfTwoString(s1, s2 + 1);
	return 1 + (n1 < n2 ? n1 : n2);
}

int main(int argc, char * argv[])
{
	char s1[1000], s2[1000];
	std::cin >> s1 >> s2;
	std::cout << shortestTransformOfTwoString(s1, s2) << std::endl;

	return 0;
}