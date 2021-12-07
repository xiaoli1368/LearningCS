// 三个字符串按照从大到小排序输出

#include <stdio.h>
#include <string.h>

void swap(char *&x, char *&y) {
	char *tmp = x;
	x = y;
	y = tmp;
}

int main(int argc, char *argv[])
{
	char a[1000], b[1000], c[1000];
	char *min = a, *mid = b, *max = c;
	gets(a), gets(b), gets(c);

	if (strcmp(min, mid) > 0) {
		swap(min, mid);
	}
	if (strcmp(mid, max) > 0) {
		swap(mid, max);
	}
	if (strcmp(min, mid) > 0) {
		swap(min, mid);
	}

	printf("%s\n%s\n%s\n", min, mid, max);
	return 0;
}