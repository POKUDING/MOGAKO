#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int num);

int main() {
	int input = 0;
	printf("숫자를 입력하면 팩토리얼을 계산합니다.\n");
	scanf("%d", &input);
	printf("%d팩토리얼의 결과는 %d입니다.\n", input,factorial(input));

	return 0;
};

int factorial(int num) {
	int result = num;
	for (int i = num-1; i > 0;  i--) {
		result *= i;
	};
	return result;
};