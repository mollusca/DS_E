/* �ݺ����� �̿�, ������ �����˻���� */

#include <stdio.h>

int LinearSearch(int len, int target, int *arr) {
	int i;

	// 0���� �迭���̱��� ���������� Ž��
	for (i = 0; i < len; i++)
		if (arr[i] == target)
			return i;

	// ã�� ���� ���� ��, -1��ȯ
	return -1;
}
int main() {
	int arr[] = { 5, 19, 20, 3, 15, 24, 4 };
	int result = LinearSearch(sizeof(arr) / sizeof(int), 4, arr);

	if (result == -1)
		printf("ã�� ���� ����.\n");
	else
		printf("Ÿ���� �迭 %d��° ��ġ��.\n", result + 1);

	return 0;
}