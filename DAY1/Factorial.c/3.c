/* ����Լ��� �̿��� ������ factorial�Լ� */
#include <stdio.h>

int Factorial(int num) {
	if (num == 0)
		return 1;
	else
		return num * Factorial(num - 1);
}

int main() {
	int num;
	
	printf("Fac : ");
	scanf("%d", &num);
	
	// 13! ���� ���� �ʹ�Ŀ���� ���x
	printf("%d! = %d\n", num, Factorial(num));

	return 0;
}