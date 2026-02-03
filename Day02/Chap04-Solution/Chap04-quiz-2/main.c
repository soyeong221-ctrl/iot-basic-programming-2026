#include <stdio.h>

int main(void)
{
	int seats = 0;
	int audience = 0;
	double rate = 0.0;
	
	seats = 70;
	audience = 65;
	rate = (double)audience / seats * 100;

	printf("입장률 : %.1f%%]n", rate);

	return 0;

}