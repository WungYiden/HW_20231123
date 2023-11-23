#include <stdio.h>

int recursiveMaximum(int array[], int size) {
	// 基本情況：如果數組大小為1，直接返回該元素
	if (size == 1) {
		return array[0];
	}
	else {
		// 遞歸情況：比較當前元素與剩餘元素的最大值
		int maxRest = recursiveMaximum(array + 1, size - 1);
		return (array[0] > maxRest) ? array[0] : maxRest;
	}
}

int main() {
	int arr[] = { 5, 8, 3, 2, 7, 9, 1, 4, 6 };

	int size = sizeof(arr) / sizeof(arr[0]);

	printf("數組的最大元素為: %d\n", recursiveMaximum(arr, size));

	return 0;
}