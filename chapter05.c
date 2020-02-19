//07 문자열 출력과 입력

#include <stdio.h>

int main() {
  char ch = 'ab';
    
  printf("%d\n", ch);
  printf("%c\n", ch);
  
  return 0;
}
>98
b  //char에는 한글자만 들어갈 수 있어서 마지막에 쓰인 b만 출력됨.


//배열을 이용하여 한글자 아닌 문자열 담기.
#include <stdio.h>

int main() {
  char ch[1001];
	printf("1000 자 이내로 입력해주세요 :");
	scanf("%s", ch); //문자열을 입력받을 때는 &쓰지 않아도 됨.
	printf("%s", ch);
	
  return 0;
}

//문자열 갯수 세기

#include <stdio.h>
int main() {
		char ch[31];
	int i=0;
	int count = 0;
	scanf("%s", ch);
	
	while(ch[i] != 0){ //0=NULL
		count++;
		i++;
	}
	
	printf("%d", count);

	return 0;
}