/* �ϳ���Ÿ�� 
 * ���� �ϳ��� ���� ������ �ٸ� �ϳ��� �״�� �ű�� ��
 * ������ ���밡 �ʿ�, ������ �ѹ��� �ϳ����� �ű�� �ְ� 
 * ���� ������ ū ���� �Ʒ��� �� �� ����. */
#include <stdio.h>

// num���� ������ from���뿡�� by���븦 �̿��� to����� �ű��.
void Hanoi(int num, char from, char by, char to) {
	// ��� Ż������ : �Űܾ��ϴ� ������ ������ 1���ΰ��.
	if(num == 1)
		// ���� ���� ������ A���뿡�� C����� �̵��Ѵ�.
		printf("����1�� %c���뿡�� %c����� �̵�\n", from, to);

	else {
		// num - 1���� ������ A���뿡�� B����� �̵�
		Hanoi(num - 1, from, to, by);
		printf("����%d�� %c���뿡�� %c����� �̵�\n", num, from, to);
		// num - 1���� ������ A���뿡�� B����� �̵�
		Hanoi(num - 1, by, from, to);
	}
}
int main() {
	int num;

	printf("���� ���� : ");
	scanf("%d", &num);
	
	Hanoi(num, 'A', 'B', 'C');

	return 0;
}
