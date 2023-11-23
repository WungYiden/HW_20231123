#include <stdio.h>

void stringReverse(char array[]) {
	// 如果當前字元不是終止空字元，則繼續遞歸呼叫
	if (array[0] == '\0') 
	{
		return;
	}
	else
	{
		stringReverse(array + 1);
		printf("%c", array[0]);
	}
}

int main() {

	char str[20];
	scanf("%s", &str);
	printf("原始字串: %s\n", str);
	printf("反向列印字串: ");
	stringReverse(str);

	return 0;
}