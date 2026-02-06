
#include <stdio.h>

int main(void) {

	int a = 10; // 변수 선언 및 초기화
	int b = a++ + 5; // 증감 연산자 사용
	
	printf("a = %d, b = %d\n", a, b); // a는 10에 1더해서 11로 출력, b는 10 출력 후 5 더해서 15로 출력.

	return 0;
}