#include <stdio.h>

// 함수 선언
int add(int n1, int n2);	// 덧셈
int sub(int n1, int n2);	// 뺄셈
int mul(int n1, int n2);	// 곱셈
double div(int n1, int n2);	// 나눗셈

int main(void)
{
	// 정수형 변수 n1, n2 선언
	int n1, n2;	

	// 사용자로부터 양의 정수를 입력받고 그 값을 각각 n1, n2에 저장
	printf("첫 번째 양의 정수를 입력하세요: ");
	scanf_s("%d", &n1);

	printf("두 번째 양의 정수를 입력하세요: ");
	scanf_s("%d", &n2);

	// 덧셈, 뺄셈, 곱셈, 나눗셈 값을 각각 출력하고 필요한 사칙연산 함수를 호출
	printf("\n입력한 양의 정수 2개의 사칙연산 값은 아래와 같습니다.\n");
	printf("덧셈: %d\n", add(n1, n2));		// add(덧셈) 함수 호출
	printf("뺄셈: %d\n", sub(n1, n2));		// sub(뺄셈) 함수 호출
	printf("곱셈: %d\n", mul(n1, n2));		// mul(곱셈) 함수 호출
	printf("나눗셈: %.2lf\n", div(n1, n2));	// div(나눗셈) 함수 호출


	return 0;

}

// 함수 정의
// 각 함수는 사용자로부터 입력받은 두 정수의 사칙연산 결과값을 반환함
int add(int n1, int n2)
{
	return n1 + n2;		// 두 정수의 합을 반환
}

int sub(int n1, int n2)
{
	return n1 - n2;		// 두 정수의 차를 반환
}

int mul(int n1, int n2)
{
	return n1 * n2;		// 두 정수의 곱을 반환
}

double div(int n1, int n2)
{
	return (double)n1 / n2;	// 두 정수를 나눈 결과값을 반환
							// 실수 나눗셈 수행을 위한 형 변환
}