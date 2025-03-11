#include <stdio.h>

int main()
{
	unsigned int i;
	printf("정수를 입력하세요: ");
	scanf_s("%d", &i);

	printf("입력된 정수의 32비트 표현: ");
	for (int j = 31; j >= 0; --j)
	{
		int result = (i >> j) & 1;
		printf("%d", result);
	}
}