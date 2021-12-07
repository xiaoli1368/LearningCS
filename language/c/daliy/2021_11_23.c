// 题目：统计单词个数
// 思路：
//      1. 使用lastSign记录上一个字符是否为字母，currSign记录当前字符是否为字母
//      2. 当且仅当，当前位置为字母，且上一个字符不是字母，累计新单词

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char * argv[])
{
	printf("[INFO] please input a string:\n");

	char c;
	int count = 0;
	bool currSign, lastSign = false;

	while ((c = getchar()) != '\n') {
		currSign = (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
		if (currSign && !lastSign) {
			count += 1;
		}
		lastSign = currSign;
	}

	printf("[INFO] result: %d\n", count);
	return 0;
}