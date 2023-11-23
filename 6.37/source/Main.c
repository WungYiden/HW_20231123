#include <stdio.h>

int recursiveMaximum(int array[], int size) {
	// �򥻱��p�G�p�G�Ʋդj�p��1�A������^�Ӥ���
	if (size == 1) {
		return array[0];
	}
	else {
		// ���k���p�G�����e�����P�Ѿl�������̤j��
		int maxRest = recursiveMaximum(array + 1, size - 1);
		return (array[0] > maxRest) ? array[0] : maxRest;
	}
}

int main() {
	int arr[] = { 5, 8, 3, 2, 7, 9, 1, 4, 6 };

	int size = sizeof(arr) / sizeof(arr[0]);

	printf("�Ʋժ��̤j������: %d\n", recursiveMaximum(arr, size));

	return 0;
}