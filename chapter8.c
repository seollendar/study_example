/*Multi-dimensional Arrays*/

#include <stdio.h>

int main() {
	int arr[2][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8}
	};

	for(int i=0; i<2; i++){
		for(int j=0; j<4; j++){
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
  return 0;
}

//Add Two Matrices Using Multi-dimensional Arrays
#include <stdio.h>

int main() {
	int arr1[3][3];
  int arr2[3][3];
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
					scanf("%d", &arr1[i][j]);
		}
	}
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
					scanf("%d", &arr2[i][j]);
		}
	}

		for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
					printf("\t%d", arr1[i][j]);
		}
			printf("\n");
	}
	printf("\n");
	
		for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
					printf("\t%d", arr2[i][j]);
		}
			printf("\n");
	}
	printf("\n");
	
	int sumarr[3][3];
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			sumarr[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
				printf("\t%d", sumarr[i][j]);
		}
			printf("\n");
	}
		

	return 0;
}
> 1 2 3 1 2 3 1 2 3 
4 5 6 4 5 6 4 5 6
        1       2       3
        1       2       3
        1       2       3

        4       5       6
        4       5       6
        4       5       6

        5       7       9
        5       7       9
        5       7       9