/* 재귀함수를 이용한 간단한 factorial함수 */
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
	
	// 13! 이후 값이 너무커져서 출력x
	printf("%d! = %d\n", num, Factorial(num));

	return 0;
}