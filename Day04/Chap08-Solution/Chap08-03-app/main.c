// 문자열 예제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>	// 문자열 복사 함수 사용 위한 추가 라이브러리

int main(void) {
	char str[80] = "applejam";	// str[8]부터는 \0(null 문자)이 초기화 됨
	char str2[80];


	printf("최초 문자열 : %s\n", str);
	/*printf("문자열 입력 : ");
	
	scanf("%s", str); // 중요 !
	// 첨자[i]를 사용하지 않으면
	// 배열의 이름은 배열의 주소를 나타냄
	// 배열 한 건을 입력할 때 &score[i]와 비교 필요!

	printf("입력 후 문자열 : %s\n", str);
	*/

	/*str[0] = 'g';
	str[1] = 'r';
	str[2] = 'a';
	str[3] = 'p';
	str[4] = 'e';
	*/

	strcpy(str, "grape");
	printf("입력 후 문자열 : %s\n", str);

	strcpy(str2, str); // string copy : str2배열에 str배열의 문자열 복사
	printf("입력 후 문자열 : %s\n", str2);

	return 0;
}