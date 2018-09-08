/* 하노이타워 
 * 막대 하나에 쌓인 원반을 다른 하나에 그대로 옮기는 법
 * 세개의 막대가 필요, 원반은 한번에 하나씩만 옮길수 있고 
 * 작은 원반이 큰 원반 아래에 올 수 없다. */
#include <stdio.h>

// num개의 원반을 from막대에서 by막대를 이용해 to막대로 옮긴다.
void Hanoi(int num, char from, char by, char to) {
	// 재귀 탈출조건 : 옮겨야하는 원반의 갯수가 1개인경우.
	if(num == 1)
		// 가장 작은 원반을 A막대에서 C막대로 이동한다.
		printf("원반1을 %c막대에서 %c막대로 이동\n", from, to);

	else {
		// num - 1개의 원반을 A막대에서 B막대로 이동
		Hanoi(num - 1, from, to, by);
		printf("원반%d을 %c막대에서 %c막대로 이동\n", num, from, to);
		// num - 1개의 원반을 A막대에서 B막대로 이동
		Hanoi(num - 1, by, from, to);
	}
}
int main() {
	int num;

	printf("원반 개수 : ");
	scanf("%d", &num);
	
	Hanoi(num, 'A', 'B', 'C');

	return 0;
}
