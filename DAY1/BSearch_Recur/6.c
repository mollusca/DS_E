/* 이진탐색 + 재귀 */
#include <stdio.h>

int BSearchRecursion(int first, int last, int target, int *data) {
	int mid = (first + last) / 2;

	// 종료조건 : first값이 last값 초과
	if (first > last)
		// 탐색실패
		return -1;

	else if (data[mid] == target)
		return mid;
	// 타겟보다 mid값이 크면 target은 mid의 왼쪽블럭에있음.
	else if (data[mid] > target)
		return BSearchRecursion(first, mid - 1, target, data);
	else
		return BSearchRecursion(mid + 1, last, target, data);
}
int main() {
	int arr[] = { 3, 4, 5, 15, 19, 20, 24 };
	int result = BSearchRecursion(0, sizeof(arr) / sizeof(int), 4, arr);

	if (result == -1)
		printf("탐색실패\n");
	else
		printf("찾는값 : %d번째 있음.\n", result + 1);

	return 0;
}