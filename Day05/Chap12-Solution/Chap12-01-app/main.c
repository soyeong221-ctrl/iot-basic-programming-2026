// 문자열과 포인터

#include <stdio.h>
int main(void) {
	// 문자열 출력
	printf("%s\n", "apple");

	// 문자열 주소 확인
	printf("%u\n", "apple");
	printf("%u\n", "apple");
	printf("두 번째 문자의 주소 값 : %u\n", "apple" + 1);
	printf("두 번째 문자 : %c\n", *("apple" + 1));
	printf("첫 번째 문자 : %c\n", *("apple"));
	printf("첫 번째 문자 : %c\n", "apple"[0]);

	char fruit[6] = "apple";

	printf("%u\n", fruit);
	printf("두 번째 문자의 주소 값 : %u\n", fruit + 1);
	printf("두 번째 문자 : %c\n", *(fruit + 1));
	printf("첫 번째 문자 : %c\n", *fruit);
	printf("첫 번째 문자 : %c\n", fruit[0]);

	//fruit = "banan";	// 문자 배열의 값을 변경할 수 없음
	strcpy(fruit, "banan");
	printf("%s\n", fruit);

	char* dessert = "apple";

	printf("%s\n", dessert);
	dessert = "banana";
	printf("%s\n", dessert);

	return 0;
}
