/*
<stdlib.h> 
srand: 호출할 떄 전달받는 인자를 기반으로 해서 난수를 초기화 시켜줌. 
rand: srand로 인해 생성된 값을 바탕으로 난수를 생성해줍니다.
<time.h> 
time: 인자값으로 NULL을 넘기면 1970/01/01 0시(UTC 타임존)이후부터
      인자값까지 현재까지 흐른 초수를 리턴.
	  
####시간은 멈추지 않고 계속해서 흐르므로 time 함수로 구한 초 수를 기반으로 
srand함수를 이용하여 난수 기준값을 초기화한다음, rand함수를 호출하면 시간을 
기반으로 진정한 무작위 숫자가 생성되게 됨.
*/
/*
srand(time(NULL)); //rand함수 호출 전에 선언하면 시간을 기준으로 초기화되는 진정한 난수를 만들어냄.

rand()%n :0~n-1 범위의 난수를 생성.
(rand()%n)+1 :1~n범위의 난수를 생성.
*/
//난수만들기.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  
  srand(time(NULL));
  
  int random = rand();
  
  printf("%d", random);

  return 0;
}

//주사위 게임 만들기
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void checkScore(int mScore, int cScore) {
  printf("\n-------------------------");
  printf("\n현재 각 플레이어의 점수입니다.");
  printf("\n플레이어의 점수 : %d", mScore);
  printf("\n컴퓨터의 점수 : %d", cScore);
  printf("\n-------------------------");
}

void showEnding(int mScore, int cScore){
	if(mScore>cScore){
		 printf("\n**********게임종료************\n플레이어의 승리입니다.");
	}
	else if(mScore==cScore){
		 printf("\n**********게임종료************\n무승부 입니다.");
	}
	else{
		 printf("\n**********게임종료************\n컴퓨터의 승리입니다.");
	}
}

int main() {
  int diceCount = 0;
  int diceEnd = 3;
  int mScore = 0;
  int cScore = 0;
  int selection;
  srand(time(NULL));

  printf("게임 설명 : 주사위를 총 3 번 굴려 합친 주사위 눈의 합이 더 높은 사람이 이기게 됩니다.");
  printf("\n주사위 게임을 시작하겠습니다.");
  printf("\n------------------------");

  while(diceCount < diceEnd) {
   	printf("\n주사위를 굴려주세요. 1번 주사위 굴리기 2번 현재 눈의 합 확인하기 : ");
  	scanf("%d", &selection);
    
    if(selection == 1) {
      int mResult = (rand() % 6) + 1;
      int cResult = (rand() % 6) + 1;
      
      mScore += mResult;
      cScore += cResult;
      
      printf("\n플레이어의 차례입니다. 주사위를 굴립니다.");
      printf("\n띠링! 주사위의 눈은 %d 입니다.", mResult);
      printf("\n현재 총 점수는 %d 입니다.", mScore);
      
      printf("\n컴퓨터의 차례입니다. 주사위를 굴립니다.");
      printf("\n띠링! 주사위의 눈은 %d 입니다.", cResult);
      printf("\n현재 총 점수는 %d 입니다.", cScore);
      
			diceCount++;
    } else if(selection == 2) {
      checkScore(mScore, cScore);
    } else {
      printf("\n잘못 입력하셨습니다.");
    }
  }

	showEnding(mScore, cScore);
	
  return 0;
}