#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int num);

int main() {
	int input = 0;
	printf("���ڸ� �Է��ϸ� ���丮���� ����մϴ�.\n");
	scanf("%d", &input);
	printf("%d���丮���� ����� %d�Դϴ�.\n", input,factorial(input));

	return 0;
};

int factorial(int num) {
	int result = num;
	for (int i = num-1; i > 0;  i--) {
		result *= i;
	};
	return result;
};