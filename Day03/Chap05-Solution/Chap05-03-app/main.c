// 반복문

#define _CRT_SECURE_NO_WARNNINGS

#include <stdio.h>

int main() {

	/*
	* while 문
	* while (조건) { // 조건이 참인 동안
	* 실행문 // 반복 실행
	* }
	*/
	int a = 1; // 초기화 중요!!
	
	while (a < 10) {
		a = a * 2; // a = a *= 2;
	}
	printf("a : %d\n", a);

	a = 0;

	while (a > 0) {
		printf("while 실행!\n"); // 출력 안 됨
		a--;
	}
	printf("while문 종료\n"); // 얘만 출력됨


	/*
	* do~while문 : 반복 내의 실행문은 무조건 한 번 실행하고 반복하고자 할 때
	* do {
	*   반복할 실행문
	* } while (참인 조건) 조건괄호 뒤 ; 필수!
	*/
	a = 1;

	do {
		a *= 2;
	} while (a < 10);
	printf("a : %d\n", a);

	a = 0;

	do {
		printf("do~while 실행!\n"); // 무조건 한 번 실행
		a--;
	} while (a > 0);
	printf("do~while 종료\n"); // 얘도 출력됨

	return 0;
}