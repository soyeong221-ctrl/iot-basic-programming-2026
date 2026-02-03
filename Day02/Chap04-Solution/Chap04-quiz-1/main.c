#include <stdio.h>

int main(void)
{

	int res;

	res = sizeof(long) > sizeof(short);
	printf("%s", (res == 1) ? "long" : "short");        // (조건) ? 참의 결과 : 거짓결과 ;

	return 0;
}