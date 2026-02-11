// 구조체(structure)
// #pragma pack(1)	// 패딩바이트를 사용 안 함, 17byte만 사용

#include <stdio.h>

	struct student {
		char ch1;		// 1
		char ch2;		// 1
		short num;		// 2
		int score;		// 4
		double grade;	// 8byte
		char ch3;		// 1
	};

	int main(void) {

		struct student st1;

		// 이전내용) 실제 사용되는 바이트는 12byte, but 패딩바이트로 16byte 구성
		// student 총 17byte -> 실제 32byte 사용
		
		printf("구조체 student 크기 : %zu\n", sizeof(st1));
		// 구조체에 선언하는 멤버 변수의 위치만 조정해도 패딩바이트가 사라짐 -> 24byte


	return 0;
}