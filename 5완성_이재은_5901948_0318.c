#include <stdio.h>

// �Լ� ����
int add(int n1, int n2);	// ����
int sub(int n1, int n2);	// ����
int mul(int n1, int n2);	// ����
double div(int n1, int n2);	// ������

int main(void)
{
	// ������ ���� n1, n2 ����
	int n1, n2;	

	// ����ڷκ��� ���� ������ �Է¹ް� �� ���� ���� n1, n2�� ����
	printf("ù ��° ���� ������ �Է��ϼ���: ");
	scanf_s("%d", &n1);

	printf("�� ��° ���� ������ �Է��ϼ���: ");
	scanf_s("%d", &n2);

	// ����, ����, ����, ������ ���� ���� ����ϰ� �ʿ��� ��Ģ���� �Լ��� ȣ��
	printf("\n�Է��� ���� ���� 2���� ��Ģ���� ���� �Ʒ��� �����ϴ�.\n");
	printf("����: %d\n", add(n1, n2));		// add(����) �Լ� ȣ��
	printf("����: %d\n", sub(n1, n2));		// sub(����) �Լ� ȣ��
	printf("����: %d\n", mul(n1, n2));		// mul(����) �Լ� ȣ��
	printf("������: %.2lf\n", div(n1, n2));	// div(������) �Լ� ȣ��


	return 0;

}

// �Լ� ����
// �� �Լ��� ����ڷκ��� �Է¹��� �� ������ ��Ģ���� ������� ��ȯ��
int add(int n1, int n2)
{
	return n1 + n2;		// �� ������ ���� ��ȯ
}

int sub(int n1, int n2)
{
	return n1 - n2;		// �� ������ ���� ��ȯ
}

int mul(int n1, int n2)
{
	return n1 * n2;		// �� ������ ���� ��ȯ
}

double div(int n1, int n2)
{
	return (double)n1 / n2;	// �� ������ ���� ������� ��ȯ
							// �Ǽ� ������ ������ ���� �� ��ȯ
}