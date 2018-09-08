/* 반복문을 이용, 간단한 순차검색방법 */

#include <stdio.h>

int LinearSearch(int len, int target, int *arr) {
	int i;

	// 0부터 배열길이까지 순차적으로 탐색
	for (i = 0; i < len; i++)
		if (arr[i] == target)
			return i;

	// 찾는 수가 없을 때, -1반환
	return -1;
}
int main() {
	int arr[] = { 5, 19, 20, 3, 15, 24, 4 };
	int result = LinearSearch(sizeof(arr) / sizeof(int), 4, arr);

	if (result == -1)
		printf("찾는 수가 없음.\n");
	else
		printf("타겟은 배열 %d번째 위치함.\n", result + 1);

	return 0;
}