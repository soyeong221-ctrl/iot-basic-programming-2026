// 별찍기 예제

/*
    *****
	*****
	*****
	*****
	*****

	*
	**
	***
	****
	*****
	 
	    *
	   **
	  ***
	 ****
	*****
*/

#include <stdio.h>

int main() {
	int i, j, k;

	// 5*5 * 찍기
	/*for (i = 1; i <= 5; i++) {
		// 반복문의 조건만 조절하면 대부분 답이 나옴
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}*/

	/*for (i = 1; i <= 5; i++) {
		// k <= 5 - i 핵심!
		for (k = 1; k <= 5 - i; k++) {
			printf(" ");  // 빈 공백 추가
		}
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}*/

	// 별찍기 피라미드 만들기

	int n = 5;

	for (i = 1; i <= n; i++) {

		for (k = 1; k <= n - i; k++) {
			printf(" ");
		}

		for (j = 1; j <= (2 * i) - 1; j++) {
			printf("*");
		}

		printf("\n");
	}

	return 0;
}