/*숫자 정렬하기*/

// 두 변수의 값 바꾸기
#include <stdio.h>

int main() {
	int a, b, temp;
	scanf("%d", &a);
	scanf("%d", &b);
	
	temp = a;
	a = b;
	b = temp;
	
	printf("%d\n", a);
	printf("%d", b);

  return 0;
}
> 2 4 
 4 2
 
 //버블 정렬(bubble sort):서로 이웃한 값들을 비교하며 정렬
 //오름차순 정렬
 #include <stdio.h>

int main() {
  
  int arr[10] = { 9, 17, 5, 6, 124, 112, 1, 3, 87, 55 };

  int temp; // 두 값을 바꿀 때 사용할 변수
  int length = sizeof(arr) / sizeof(int);
  
  printf("정렬 전 : ");
  for(int i = 0; i < length; i++) {
    printf("%d ", arr[i]); 
  }

  for(int i = 0; i < length - 1; i++) { //배열의 마지막은 비교할 수가 없기 떄문에 length-1
    for(int j = 0; j < length -1; j++) {
			if(arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
      }
    }
  }

  printf("\n정렬 후 : ");
  for(int i = 0; i < length; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}
>124 112 87 55 17 9 6 5 3 1 


//desc
#include <stdio.h>

int main() {
  int arr[10] = { 9, 17, 5, 6, 124, 112, 1, 3, 87, 55 };
  int temp; // 두 값을 바꿀 때 사용할 변수
  
	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++){
			if(arr[j] < arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for(int i =0; i<10; i++){
		printf("%d ", arr[i]);
	}
  return 0;
}
> 124 112 87 55 17 9 6 5 3 1

//삽입 정렬: 하나의 값을 정하여 차례로 이동&비교하며 원소 삽입.
//오름차순
#include <stdio.h>

int main() {
  
  int arr[6] = { 3, 7, 2, 5, 1, 4 };
  int i, j; // 반복문에 사용할 변수
  int temp; // 두 값을 바꿀 때 사용할 변수
  int length = sizeof(arr) / sizeof(int);
  
  printf("정렬 전 : ");
  for(i = 0; i < length; i++) {
    printf("%d ", arr[i]); 
  }

  for(i = 1; i < length; i++) {
    temp = arr[i];
    j = i - 1;
    while(j >= 0 && arr[j] > temp) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = temp;
  }

  printf("\n정렬 후 : ");
  for(i = 0; i < length; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}

//내림차순 정렬
#include <stdio.h>

int main() {
  
  int arr[10] = { 9, 17, 5, 6, 124, 112, 1, 3, 87, 55 };
  int i, j, temp; // 두 값을 바꿀 때 사용할 변수
 // int length = sizeof(arr) / sizeof(int); //10
	for(i=0; i<9; i++){
		j = i;
		while(arr[j] < arr[j+1]){ //arr[j] > arr[j+1] 오름차순
			temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
			j--;
		}
	}
	
	for(i=0; i<10; i++){
	printf("%d ", arr[i]);	
	}
	
  return 0;
}
> 124 112 87 55 17 9 6 5 3 1 