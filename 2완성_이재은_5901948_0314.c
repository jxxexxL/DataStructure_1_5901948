#include <stdio.h>

int main(void)
{
	float num; // 실수형 변수 'num' 선언
	printf("실수를 입력하세요: "); // ""안의 문자 모니터에 출력
	scanf_s("%f", &num); // 실수를 사용자로부터 입력받고 'num'에 저장

    unsigned int * p = (unsigned int *)&num;  // 'float'값 'unsigned int'로 변환 (포인터 변환)
    unsigned int s = (* p >> 31) & 0x1; // 맨 앞 비트 오른쪽으로 비트 쉬프트 후 맨 앞 비트만 추출 (>>, & 0x1)
    unsigned int e = (* p >> 23) & 0xFF; // 지수 부분 비트 오른쪽으로 비트 쉬프트 후 지수 부분 비트만 추출 (>> , &0xFF)
    unsigned int f = * p & 0x7FFFFF; // 가수 부분 비트 오른쪽으로 비트 쉬프트 후 가수 부분 비트만 추출 (>> , &0x7FFFFF)

    printf("부호 (1비트) : %d\n", s); // 부호(1비트) 출력

    printf("지수 (8비트) : "); // 지수(8비트) 출력
    for (int i = 7; i >= 0; i--) printf("%d", (e >> i) & 1); // for 반복문 사용하여 지수를 2진수 형태로 출력

    printf("\n가수 (23비트) : "); // 가수(23비트) 출력
    for (int i = 22; i >= 0; i--) printf("%d", (f >> i) & 1); // for 반복문 사용하여 가수를 2진수 형태로 출력

    return 0;

}