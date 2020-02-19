//6강 1차원 배열
int main() {
  int i;
  int arr1[5] = { 1, 33 , 47, 102, 155 }; // 선언과 동시에 초기화
  int arr2[5] = { 5 }; // 0 번째 값을 5 로 초기화하고 나머지는 모두 0 으로 초기화
  int arr3[5] = { 5, 10 }; // 0 번째 값을 5, 1 번째 값을 10으로 초기화하고 나머지는 모두 0 으로 초기화
  int arr4[5] = { }; // 모두  0 으로 초기화
  int arr5[5]; // 초기화 하지 않음
  int arr6[] = { 11, 22 , 33, 44 }; // 배열의 크기는 4로 자동으로 초기화

  return 0;
}

//입력받은 값들을 sum변수 더해 출력.
#include <stdio.h>

int main() {
  int arr[5];
  int sum = 0;
	
	for(int i=0; i<5; i++){
		scanf("%d", &arr[i]);
	  sum += arr[i];
}
printf("%d", sum);
  return 0;
}

//배열의 갯수 구하기
#include <stdio.h>

int main() {
  int arr[] = { 519, 31, 7988, 165326, 100, 150 };

  printf("%ld\n", sizeof(arr)); //int는 4bite로 배열 전체길이는 4*6=24

  printf("%ld\n", sizeof(arr) / sizeof(arr[0]));// 24/4=6

  return 0;
}

#include <stdio.h>

int main() {
  int i;
  int arr[5] = { 1, 2, 3, 4, 5 };
  int length = sizeof(arr) / sizeof(int);  // sizeof(arr) / sizeof(arr[0]) 과 같습니다
	
	printf("arr의 길이는 : %d\n", length);

  for(i = 0; i < length; i++) {
    printf("%d\n", arr[i]);
  }
  return 0;
}