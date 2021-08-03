#include <stdio.h>

int main() {
	printf("我在编程中国学C语言\n\n");

	// 练习一下循环的使用
	int i;
	for (i = 1; i <= 20; i++) {
		printf("我爱编程中国 %d 次\n", i);
	}

	printf("\n\n编程中国送我一颗小心心：");
	// 绘制一个心形图案
	for (float y = 1.5f; y > -1.5f; y -= 0.1f) {
		for (float x = -1.5f; x < 1.5f; x += 0.05f) {
			float a = x * x + y * y - 1;
			putchar(a * a * a - x * x * y * y * y <= 0.0f ? '*' : ' ');
		}
		putchar('\n');
	}

	return 0;
}