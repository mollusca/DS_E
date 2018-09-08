/* ����Ž�� + ��� */
#include <stdio.h>

int BSearchRecursion(int first, int last, int target, int *data) {
	int mid = (first + last) / 2;

	// �������� : first���� last�� �ʰ�
	if (first > last)
		// Ž������
		return -1;

	else if (data[mid] == target)
		return mid;
	// Ÿ�ٺ��� mid���� ũ�� target�� mid�� ���ʺ�������.
	else if (data[mid] > target)
		return BSearchRecursion(first, mid - 1, target, data);
	else
		return BSearchRecursion(mid + 1, last, target, data);
}
int main() {
	int arr[] = { 3, 4, 5, 15, 19, 20, 24 };
	int result = BSearchRecursion(0, sizeof(arr) / sizeof(int), 4, arr);

	if (result == -1)
		printf("Ž������\n");
	else
		printf("ã�°� : %d��° ����.\n", result + 1);

	return 0;
}