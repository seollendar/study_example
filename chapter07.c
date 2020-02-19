// 이중 반복문

//ex
#include <stdio.h>

int main() {
	int i;
	int j;
	
	for(i=0; i<5; i++){
		printf("--바깥 for문 %d 시작--\n", i);  //nth start
		for(j=0; j<5; j++){
			printf("--%d번째 안쪽 for문--\n", j); //5 time run
		}
		printf("--바깥 for문 %d 종료\n", i); // nth end
	}
  return 0;
}

//직각 삼각형 출력하기
#include <stdio.h>

int main() {
	for(int i=0; i<3; i++){
		for(int j=0; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
  return 0;
}
>
*
**
***

//역삼각형 출력하기
#include <stdio.h>

int main() {
//  printf("\n");
	
	int s;
	scanf("%d", &s);
	
	for(int i=s; i>0; i--){
		for(int j=i; j>0; j--){
			printf("*");
		}
		printf("\n");
			}
	
  return 0;
}

> 5
*****
****
***
**
*

#include <stdio.h>

//두개씩 늘어나는 삼각형
int main() {
	int s;
	scanf("%d", &s);
	
	for(int i=0; i<s; i++){
		for(int j=1; j<i*2; j++){
			printf("*");
		}
	printf("\n");		
	}
	
  return 0;
}
> 5

*
***
*****
*******
*********

//피라미드
#include <stdio.h>

int main() {
	int s;
	scanf("%d", &s);
	
	for(int i=0; i<s; i++){
		for(int j=0; j<s-i; j++){
			printf(" ");
		}
		
		for(int k=0; k<2*i+1; k++){
			printf("*");
		}
		printf("\n");
	}
  
  return 0;
}

> 5 
     *
    ***
   *****
  *******
 *********