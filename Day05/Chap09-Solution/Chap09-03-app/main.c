// 포인터 크기

#include <stdio.h>

int main(void) {
	char ch; // 문자형 변수
	int in; // 정수형 변수
	double db; // 실수형 변수

	// 선언 및 초기화
	char* pch = &ch; // 문자형 포인터 변수
	int* pin = &in; // 정수형 포인터 변수
	double* pdb = &db; // 실수형 포인터 변수

	// 주소 크기 출력
	// 윈도우가 64비트 => 8bytes / 8bytes x 8bit == 64bit
	// 따라서 현재 윈도우 주소 크기는 8bytes
	printf("char형 변수 주소 크기 : %zu bytes\n", sizeof(&ch));
	printf("int형 변수 주소 크기 : %zu bytes\n", sizeof(&in));
	printf("double형 변수 주소 크기 : %zu bytes\n", sizeof(&db));

	// 포인터 크기 => 변수의 주소를 담아야 하므로 모두 8bytes
	printf("char형 변수 크기 : %zu bytes\n", sizeof(pch));
	printf("int형 변수 크기 : %zu bytes\n", sizeof(pin));
	printf("double형 변수 크기 : %zu bytes\n", sizeof(pdb));

	// 포인터가 가리키는 변수 크기
	printf("char형 * 가리키는 변수 크기 : %zu bytes\n", sizeof(*pch)); //1
	printf("int형 * 가리키는 변수 크기 : %zu bytes\n", sizeof(*pin)); //4
	printf("double형 * 가리키는 변수 크기 : %zu bytes\n", sizeof(*pdb)); //8

	// 일반변수 크기 
	printf("char형 변수 크기 : %zu bytes\n", sizeof(ch));
	printf("int형 변수 크기 : %zu bytes\n", sizeof(in));
	printf("double형 변수 크기 : %zu bytes\n", sizeof(db));


	return 0;
}
