#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand((unsigned)time(NULL));
	int num[13] = {0};
	int i,temp;
	for (i = 0; i < 36000; i++)
	{
		int x = (rand()%6+1)+ (rand() % 6 + 1);
		num[x]++;
	}
	printf("2\t3\t4\t5\t6\t7\t8\t9\t10\t11\t12\n");
	for (i = 2; i < 13; i++)
	{
		printf("%d\t",num[i]);
	}
	printf("\n");
	for (i = 2; i < 13; i++)
	{
		printf("%.3f\t", (float)((float)num[i]/36000));
	}
	printf("\n");
	system("pause");
}