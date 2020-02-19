/*실수형 변수 출력
부호 있는 10진 실수
float < double //소수점 이하 6자리까지<15자리까지  		 
%f 
%.3 = 소수점 3자리까지 표시한다는 의미(반올림)

int - %d (부호있는 10진 정수)
char - %c(단일문자), %s(문자열)
*/

#include <stdio.h>

int main() {
  
  float  a = 4.5f;
  double b = 1.234;

  printf("a 는 %.4f 입니다", a);
  printf("b 는 %.1f 입니다", b);

  return 0;
}

/*입력 받기
scanf("%d", &a)
&으로 주소값을 알려줘야 입력받은 값을 변수에 저장 핳 수 있다.
#scanf사용시 실수형(float,double)에서 double은 %f가 아닌 %lf를 써야 숫자로 인식. 
*/

#include <stdio.h>

int main() {
  
  int a;
  int b;
  float c;
  float d;
  
  printf("정수 a 입력 : ");
  scanf("%d", &a );
  printf("입력받은 정수 a : %d \n", a);
  
  printf("실수 c 입력 : ");
  scanf("%f", &c);
  printf("입력받은 실수 c : %f \n", c);
  
  printf("정수 b 와 실수 d 입력 : ");
  scanf("%d %f", &b, &d);
  printf("입력받은 b d : %d %f \n", b, d);
  
  return 0;
}