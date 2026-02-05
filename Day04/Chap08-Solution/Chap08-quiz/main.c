// 대소문자 변환 프로그램
// DON'T Worry, Be Happy~  =>  don't worry, be happy  => 바뀐 문자 수 : 7

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char str[80];
	int i;
	int count = sizeof(str) / sizeof(str[0]);
	int pos; // 문자열에서 \0값이 처음 나오는 위치(배열 인덱스)
	int num = 0; // 대문자에서 소문자로 바뀐 개수

	printf("문자열 입력 : ");
	gets(str);

	for (i = 0; i < 80; i++) {
		if (str[i] == '\0') {
			pos = i;
			break;
		}
	}
	//printf("%d\n", pos);
	//아스키 A(65) > a(97) = 32 , 32차이

	for (i = 0; i < pos; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') { // 문자 한 자가 A에서 Z 사이에 있으면
			str[i] = str[i] + 32;	// 소문자 변환
			num++;
		}
	}

	printf("바뀐 문장 : ");
	puts(str);

	printf("바뀐 문자 수 : %d\n", num);

	return 0;
}