#include <stdio.h>

int main()
{
	unsigned int i;
	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &i);

	printf("�Էµ� ������ 32��Ʈ ǥ��: ");
	for (int j = 31; j >= 0; --j)
	{
		int result = (i >> j) & 1;
		printf("%d", result);
	}
}