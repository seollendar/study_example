//ex

#include <stdio.h>
int main() {
	int i;
	int arr[5] = { 50, 100, 130, 50, 150 };
	int length = sizeof(arr) / sizeof(arr[0]); // 20/4 = 5
	int sum = 0;

	for (i = 0; i < length - 1; i++) { // i<5
		sum += arr[i] < arr[i + 1];   // arr[i] < arr[i + 1], true=1
	}  //sum = sum + true(1) or false(0) 

	printf("%d", sum); //3

	return 0;
}
