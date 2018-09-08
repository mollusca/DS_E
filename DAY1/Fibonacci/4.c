/* 피보나치 수열 ex) 0 1 1 2 3 5 8 13 21 34 ....
 * 앞 두 수를 더해서 나오는 수열 (첫번째, 두번째 수는 0, 1임)
 */
#include <stdio.h>

int Fibo(int num) {
	if (num == 1)
		return 0;
	else if (num == 2)
		return 1;
	else
		return Fibo(num - 1) + Fibo(num - 2);
}

int main() {
	int num, i;
	printf("Fibonacci number'th : ");
	scanf("%d", &num);

	for (i = 1; i < num + 1; i++)
		printf("%d ", Fibo(i));
	printf("\n");

	return 0;
}