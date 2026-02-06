#include <stdio.h>

int main(void) {
	int x = 7; // 변수 선언 및 초기화
	
	if (x % 2 == 0)	// 만약 x가 짝수면(x 나누기 2가 0)
		printf("A"); // A를 출력
	else if (x > 5)  // 만약 x가 5보다 크면
		printf("B"); // B를 출력
	else
		printf("C"); // 그것도 아니라면 C를 출력

	return 0;
}