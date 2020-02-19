/*function*/
#include <stdio.h>

void func1(void) {
  printf("반환할 필요도 없고, 인자도 받지 않는 void 함수입니다.\n");
}

void func2(int num) {
  printf("받은 인자는 %d 입니다.\n", num);
}

float func3(int num) {
  printf("인자의 형과 반환형을 맞춰줄 필요는 없습니다.\n");
  
  return 3.14 * num;
}

int main() {
  float result;
  
  func1();
  func2(2);
  result = func3(2);
  
  
  printf("result : %f\n", result);
  
  return 0;
}

//반드시 함수 정의와 선언을 main함수 위에 해주거나, 함수의 원형을 선언.
#include <stdio.h>

int func1(void);

int main() {
  
  func1();
  
  printf("함수 실행 완료\n");
  
  return 0;
}

int func1(void) {
  printf("예시 함수입니다.\n");
	return 0;
}

//평균구하기 함수
#include <stdio.h>

double average(int a, int b, int c, int d) {
	int aver = (a+b+c+d)/4;
	printf("%d", aver);
	return  aver;
}

int main() {
	double my_average;
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	average(a,b,c,d);
	my_average = average(a, b, c, d);
  
  printf("평균 점수는 다음과 같습니다 : %.1f\n",  my_average);

  return 0;
}


