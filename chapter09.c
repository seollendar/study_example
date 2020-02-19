/*조건문*/
//홀짝 판별하기

#include <stdio.h>

int main() {
  int s;
	scanf("%d", &s);
  
	if(s%2 == 0){
		printf("입력받은 정수는 짝수입니다.");
	}
	else{
		printf("입력받은 정수는 홀수입니다.");
	}
  return 0;
}

//채점하기
#include <stdio.h>

int main() {
  
  int point;
  scanf("%d", &point);
  
	if(point > 100){
		printf("부정행위 입니다.");
	}
	else if(point > 80){
		printf("훌륭합니다.");
		}
	else if(point > 50 || point < 80){
		printf("합격입니다.");
		}
	else if(point < 50){
		printf("재시험입니다.");
	}

  return 0;
}
> 79
합격입니다.

/*break & continue, switch
break : 반복문을 빠져나옴
continue : 아래 코드를 생략하고 다음을 실행
*/
#include <stdio.h>

int main(){
	int input;
	int cnt = 0;
	
	scanf("%d", &input);
	
	for(int i = 1; i < 50; i++){
		if(i == input){
			break;
			printf("break 완료");
		}
		printf("%d ", i);	
	}
	
	while(1){
		if(cnt == input){
			printf("\nwhile문 : %d\n", cnt);
			break;
		}
			
		cnt++;
	}
	
	return 0;
}

#include <stdio.h>

int main(){
	for(int i=0; i<10; i++){
		if(i%2 == 0){
			continue;
		}
		printf("%d ", i);
	}
	
	return 0;
}
>1 3 5 7 9

//switch : 4개 이상 조건일 때 사용시 if보다 성능이 더 좋음
#include <stdio.h>
int main() {
	int input;
	scanf("%d", &input);
	
	switch(input){
			case 1:
			printf("메뉴 출력");
				break;		
			case 2:
			printf("추가");
				break;
			case 3:
			printf("수정");
				break;
			case 4:
			printf("삭제");
				break;
			case 5:
			printf("종료");
				break;
			default:
			printf("올바른 번호를 입력하세요.");
				break;
			
	}
	return 0;
}
