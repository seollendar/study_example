//반복문
/*for(초기값, 조건식, 변화조건) : 일정한 횟수만큼 반복*/
#include <stdio.h>

int main() {
  int a;
	scanf("%d", &a);
  for(int i=1; i<10; i++) {
    printf("%d X %d = %d\n", a, i, a*i);
  }
  return 0;
}

입력
2
출력
2 X 1 = 2
2 X 2 = 4
2 X 3 = 6
2 X 4 = 8
2 X 5 = 10
2 X 6 = 12
2 X 7 = 14
2 X 8 = 16
2 X 9 = 18

/*while
초기값설정.
while(조건) : 특정 조건까지 계속해서 반복.
{변화조건}
*/
#include <stdio.h>

int main() {
  int i=1;
	int a;
	scanf("%d", &a);
  while(i<10) {
		printf("%d X %d = %d\n", a, i, a*i);
		i++;
  }
  return 0;
}

/*do ~ while
do(먼저 한 번 코드를 실행)한 후 while(조건 확인 및 반복)
	거의 활용되는 경우 없음.
*/
#include <stdio.h>

// 1 ~ 10 까지의 합을 구하는 코드입니다.

int main() {
  int number = 0;
  int sum = 0; // 합
  
  do {
    number++;
    sum += number;
  }while(number < 10);
    
  printf("1~10 까지의 합 : %d", sum);

  return 0;
}

//누적 계산기 : 값을 입력받고 1부터 입력받은 값까지의 합을 출력.
#include <stdio.h>
int main() {
	int sum = 0;
	int a;
	scanf("%d", &a);
	
	for(int i=0; i<=a; i++)
		sum += i;
	//sum=sum+i
	
	printf("%d", sum);
	return 0;
}