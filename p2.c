#include <stdio.h>

int main() {
	int arr[5];
	int sum = 0;
	int i;
	int j;

	for (i = 0; i < 5; i++) {
		scanf_s("%d", &arr[i]);
	}
	for (j = 0; j < 5; j++) {
		sum = sum + arr[j];
	}
	printf("%d", sum);

	return 0;
}
