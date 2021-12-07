// 加密解密

#include <stdio.h>

const int diff = 'z' - 'a' + 1;

bool isLetter(char n) {
	return (n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z');
}

void encode(char* str, int k) {
	int i = 0;
	while (str[i] != '\0') {
		if (isLetter(str[i])) {
			str[i] += k;
			if (str[i] > 'z' || (str[i] > 'Z' && str[i] < 'a')) {
				str[i] -= diff;
			}
		}
		i += 1;
	}
}

void decode(char* str, int k) {
	int i = 0;
	while (str[i] != '\0') {
		if (isLetter(str[i])) {
			str[i] -= k;
			if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a')) {
				str[i] += diff;
			}
		}
		i += 1;
	}
}

int main(int argc, char * argv[])
{
	char str[] = "hello world, aaazzz";
	printf("%s\n", str);

	encode(str, 3);
	printf("%s\n", str);

	decode(str, 3);
	printf("%s\n", str);

	return 0;
}