#include <stdio.h>

void stringReverse(char array[]) {
	// �p�G��e�r�����O�פ�Ŧr���A�h�~���k�I�s
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
	printf("��l�r��: %s\n", str);
	printf("�ϦV�C�L�r��: ");
	stringReverse(str);

	return 0;
}