#include <stdio.h>

int main() {
	printf("���ڱ���й�ѧC����\n\n");

	// ��ϰһ��ѭ����ʹ��
	int i;
	for (i = 1; i <= 20; i++) {
		printf("�Ұ�����й� %d ��\n", i);
	}

	printf("\n\n����й�����һ��С���ģ�");
	// ����һ������ͼ��
	for (float y = 1.5f; y > -1.5f; y -= 0.1f) {
		for (float x = -1.5f; x < 1.5f; x += 0.05f) {
			float a = x * x + y * y - 1;
			putchar(a * a * a - x * x * y * y * y <= 0.0f ? '*' : ' ');
		}
		putchar('\n');
	}

	return 0;
}