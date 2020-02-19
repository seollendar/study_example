/*기본연산자
사칙연산(+,-,*,/), 나머지(%)
정수끼리계산결과 %d
정수-실수, 실수-실수 %f
나머지 나타낼 때 printf("a %% b = %d", a % b);
            > a % b = 나머지
*/

#include <stdio.h>

int main() {
  int a = 10;
  int b = 3;
  
  float c = 1.5;
  float d = 2.5;
  
  printf("덧셈 : ");
  printf("a + b = %d\n", a+b );
  
  printf("뺄셈 : ");
  printf("a - b = %d\n", a-b );
  printf("b - a = %d\n", b-a );
  
  printf("곱셈 : ");
  printf("c * d = %f\n", c*d );  
  
  printf("나눗셈 : ");
  printf("c / d = %f\n", c/d );
  
  printf("나머지 : ");
  printf("a %% b = %d\n", a%b ); 

  return 0;
}
> 덧셈 : a + b = 13
뺄셈 : a - b = 7
b - a = -7
곱셈 : c * d = 3.750000
나눗셈 : c / d = 0.600000
나머지 : a % b = 1

/*증감연산자
++증가, --감소
전위 연산자:그 줄에서 먼저 값이 증감된 후에 코드 실행
후위 연산자:연산자가 사용된 코드를 먼저 실행한 후 값 증감.
*/
#include <stdio.h>

int main() {
  int number = 3;
  
  printf("%d\n", number++);//3->4
  printf("%d\n", ++number);//5
  printf("%d\n", number--);//5->4
  printf("%d\n", --number);//3

  return 0;
}

> 3
5
5
3

/*관계 연산자
참이면 1을, 거짓이면 0을 반환.
*/
#include <stdio.h>

int main() {
  int number = 5;

  printf("number 가 4보다 큽니까? %d\n", number > 4);    // 크므로 1(참)
  printf("number 가 5보다 큽니까? %d\n", number > 5);    // 크지 않으므로 0(거짓)
  printf("number 가 10보다 큽니까? %d\n", number > 10);   // 크지 않으므로 0(거짓)
  
  printf("number 가 10보다 작습니까? %d\n", number < 10); // 작으므로 1(참)
  printf("number 가 5보다 작습니까? %d\n", number < 5);   // 작지 않으므로 0(거짓)
  printf("number 가 4보다 작습니까? %d\n", number < 4);  // 작지 않으므로 0(거짓)

  printf("number 가 5보다 크거나 같습니까? %d\n", number >= 5); // 크거나 같으므로 1(참)
  printf("number 가 5보다 작거나 같습니까? %d\n", number <= 5); // 작거나 같으므로 1(참)

  printf("number 는 5와 같습니까? %d\n", number == 5);  // 같으므로 1(참)
  printf("number 는 4와 같습니까? %d\n", number == 4);  // 같지 않으므로 0(거짓)

  printf("number 는 5와 같지 않습니까? %d\n", number != 5); // 같으므로 0(거짓)
  printf("number 는 4와 같지 않습니까? %d\n", number != 4); // 같지 않으므로 1(참)

  return 0;
}

/*논리 연산자
AND && 논리곱: 둘 다 참이여야만 참 
OR || 논리합: 둘 중 하나만 참이면 참
*/
#include <stdio.h>

int main() {
  int number = 5;

  printf("AND(논리곱) : number 는 3보다 크다. 그리고 10 보다 작다 : %d\n", number > 3 && number < 10); // 조건을 둘 다 만족하므로 참
  printf("AND(논리곱) : number 는 3보다 커야한다. 그리고 10 보다 커야한다. : %d\n", number > 5 && number > 10); // 조건 중 하나라도 불만족하므로 거짓
  printf("OR(논리합) : number 는 5 이거나 4이다. : %d\n", number == 5 || number == 4); // 조건 중 하나라도 만족하므로 참
  printf("OR(논리합) : number 는 6 이거나 7이다. : %d\n", number == 6 || number == 7); // 조건을 둘 다 불만족하므로 거짓

  return 0;
}

/*복합 대입 연산자
a += 5
a = a+5
*/
#include <stdio.h>

int main() {
  int a = 5; // 5 로 초기화하여 시작

  a += 5;
  printf("%d\n", a); // 10 출력
  
  a -= 3;
  printf("%d\n", a); // 7 출력
  
  a *= 5;
  printf("%d\n", a); // 35 출력
  
  a /= 7;
  printf("%d\n", a); // 5 출력
  
  a %= 4;
  printf("%d\n", a); // 나머지 1 출력
  
  return 0;
}

/*비트 연산자*/
#include <stdio.h>
int main() {
	unsigned char input;
  unsigned char a = 6;
	
	scanf("%hhu", &input);
	
	printf("%d\t", input & a ); //AND
	printf("%d\t", input | a ); //OR
	printf("%d\t", input ^ a ); //XOR
	printf("%d", ~a ); //NOT
	
	return 0;
}

/*비트 이동 연산자
<< 왼쪽
>> 오른쪽
지정된 횟수대로 비트의 자리를 이동시킴.
왼쪽으로 이동시 2의 n승 만큼 곱해지고, 오른쪽으로는 나눠짐.
*/
#include <stdio.h>

int main(void){
	char a = 1 << 8;  // 0000 0001
	int b = 1 << 8;   // 0000 0000 0000 0000 0000 0000 0000 0001
    
	printf("(char) 1 << 8 : %d\n", a);
	printf("(int) 1 << 8 : %d\n", b);
	
	unsigned char c = 1 << 7;
	char d = 1 << 7;
	
	printf("(unsigned) 1 << 7 : %d\n", c);
	printf("(signed) 1 << 7 : %d\n", d);

}

#include <stdio.h>

int main(void){
	unsigned char a = 4 >> 1;  // 0000 0100
	unsigned char b = 8 >> 2;  // 0000 1000
    
	printf("4 >> 1 : %d\n", a);
	printf("8 >> 2 : %d\n", b);
	
	a = 14 >> 3;  // 0000 1110
	b = 16 >> 4; // 0001 0000
  
	printf("14 >> 3 : %d\n", a);
	printf("16 >> 4 : %d\n", b);
	
	char c = -16 >> 2;  // 1111 0000
	
	printf("-16 >> 2 : %d", c);
}

