/*pointer*/

#include <stdio.h>

void BubbleSort(int *arr[10]);

int main() {
	int arr[10];
	for(int i=0; i<10; i++){
		scanf("%d", arr[i]);	
	}
		
	BubbleSort(&arr[10]);
	
	for(int i=0; i<10; i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}

void BubbleSort(int *arr[10]){
	int *arr[10]
	int temp;
	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++){
			if(*arr[j] > *arr[j+1]){
				temp = *arr[j];
				*arr[j] = *arr[j+1];
				*arr[j+1] = temp;
			}
		}
	}
	
}

//포인터로 버블 정렬 함수 만들기

#include <stdio.h>

void BubbleSort(int arr[10]);

int main() {
	int scanarr[10];
	for(int i=0; i<10; i++){
		scanf("%d", &scanarr[i]);	
	}
		
	BubbleSort(scanarr);
	
	for(int i=0; i<10; i++){
		printf("%d ", scanarr[i]);
	}
	
	return 0;
}

void BubbleSort(int arr[10]){ //int*arr
	
	int temp;
	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}	
}
//배열은 포인터로 이루어진 것

//정리 문제
#include <stdio.h>

int main()
{
int arr[5] = { 1, 3, 5, 7, 9 };
double arr2[5] = { 1.1, 3.2, 5.3, 7.4, 9.5 };
int *arrPtr = arr;
double *arrPtr2 = arr2;

(*arrPtr)++;
*arrPtr2++;

printf("%d %lf %d %d\n", *arrPtr, *arrPtr2, arrPtr, arrPtr2);


return 0;
/*위 코드를 실행했을 때 출력값은? ( 단, arr의 주소값은 1000, arr2의 주소값은 2000이라고 가정한다.)

(*arrPtr)++;는 arrPtr이 가리키는 주소가 저장한 값을 증가시키는 문장이라서
*arrPtr은 1->2가 되고, arrPtr은 그대로 1000 입니다.

*arrPtr2++은 arrPtr2를 증가시키는 연산이 수행됩니다.
arrPtr2는 arr2의 배열이름을 가리키고 있는데 arrPtr2++를 했으니 arr2[1]을 가리키게 됩니다.
따라서 *arrPtr2는 3.2가 되고, arrPtr2는 2008입니다.

답:2 3.2 1000 2008
*/