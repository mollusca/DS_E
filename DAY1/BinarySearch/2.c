/* 정렬된 데이터를 이용해서 탐색범위를 반으로 줄여가며 탐색하는 이진 탐색 */
#include <stdio.h>

int BSearch(int len, int target, int *arr) {
	int first, last, mid;

	first = 0;
	last = len - 1;

	while (first <= last) {
		mid = (first + last) / 2;

		if (target == arr[mid])
			return mid;
		else {
			// 타겟이 중간값보다 작으면 끝값을 중간 - 1로 (왼쪽 데이터)
			if (target < arr[mid])
				last = mid - 1;
			// 타겟이 중간값보다 크면 시작값을 중간 + 1로 (오른쪽 데이터)
			else
				first = mid + 1;
		}
	}
	// 데이터가 없으면 -1반환.
	return -1;
}

int main() {
	// 데이터는 반드시 정렬된 데이터여야함.
	int arr[] = { 3, 4, 5, 15, 19, 20, 24 };
	int result = BSearch(sizeof(arr) / sizeof(int), 4, arr);

	if (result == -1)
		printf("찾는 값 없음.\n");
	else
		printf("찾는 값은 배열 %d번째 있음.\n", result + 1);

	return 0;
}