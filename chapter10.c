/*조건문 응용*/

//배열의 홀짝 판별
#include <stdio.h>

int main() {
  
  int arr[10] = { 5, 10, 15, 22, 23, 102, 99, 102, 130, 8 };
  int odd = 0;
  int even = 0;
  
  for(int i=0; i<10; i++){
		if(arr[i]%2==0){
			even++;
		}
		else{
			odd++;
		}
	}

  printf("홀수의 갯수는 %d개 입니다.\n", odd);
  printf("짝수의 갯수는 %d개 입니다.\n", even);
  
  return 0;
}
> 홀수의 갯수는 4개 입니다.
짝수의 갯수는 6개 입니다.

//가장 작은 수
#include <stdio.h>

int main() {
  
  int arr[10] = { 1032, 99, 1004, 234, 452, 8, 922, 445, 246, 2048 };
  int min = arr[0];
  int i; // 반복문에 쓰일 변수
  
  for(i=1; i<10; i++){
		if(min > arr[i]){
			min = arr[i];
		}
	}
  
  printf("배열 안에서 가장 작은 수는 %d입니다.\n", min);
  
  return 0;
}

//find prime factors of a number
#include <stdio.h>

int main()
{
    int i, j, num, isPrime;

    /* Input a number from user */
    printf("Enter any number to print Prime factors: ");
    scanf("%d", &num);

    printf("All Prime Factors of %d are: \n", num);

    /* Find all Prime factors */
    for(i=2; i<=num; i++)
    {
        /* Check 'i' for factor of num */
        if(num%i==0)
        {
            /* Check 'i' for Prime */
            isPrime = 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    isPrime = 0;
                    break;
                }
            }

            /* If 'i' is Prime number and factor of num */
            if(isPrime==1)
            {
                printf("%d, ", i);
            }
        }
    }

    return 0;
}

//소수 구하기
#include <stdio.h>
#define TRUE 1;
#define FALSE 0;

// 소수인지 아닌지 판별하는 함수
int prime(int number){
	int count = 0;
	
	for(int i=number-1; i>1; i--){
		if(number % i == 0)
			count++;
	}
	
	if(count > 0)
		return FALSE;
	else
		return TRUE;
}

int main() {
	int array[100];
	int count = 0;
	
	int number;
	scanf("%d", &number);
	
	// printf("%d", prime(number));
	for(int i=2; i<=number; i++){
		if(prime(i)){
			// printf("%d ", i);
			array[count] = i;
			count++;
		}
	}
	
	for(int i=0; i<count; i++){
		printf("%d ", array[i]);
	}
	
	return 0;
}
