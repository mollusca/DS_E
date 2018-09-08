/* ���ĵ� �����͸� �̿��ؼ� Ž�������� ������ �ٿ����� Ž���ϴ� ���� Ž�� */
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
			// Ÿ���� �߰������� ������ ������ �߰� - 1�� (���� ������)
			if (target < arr[mid])
				last = mid - 1;
			// Ÿ���� �߰������� ũ�� ���۰��� �߰� + 1�� (������ ������)
			else
				first = mid + 1;
		}
	}
	// �����Ͱ� ������ -1��ȯ.
	return -1;
}

int main() {
	// �����ʹ� �ݵ�� ���ĵ� �����Ϳ�����.
	int arr[] = { 3, 4, 5, 15, 19, 20, 24 };
	int result = BSearch(sizeof(arr) / sizeof(int), 4, arr);

	if (result == -1)
		printf("ã�� �� ����.\n");
	else
		printf("ã�� ���� �迭 %d��° ����.\n", result + 1);

	return 0;
}