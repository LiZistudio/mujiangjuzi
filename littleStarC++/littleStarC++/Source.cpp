#include <stdio.h>
#include <iostream>
#include <math.h>

float f(float x, float y, float z) {
	float a = x * x + 9.0f / 4.0f * y * y + z * z - 1;
	return a * a * a - x * x * z * z * z - 9.0f / 80.0f * y * y * z * z * z;
}

float h(float x, float z) {
	for (float y = 1.0f; y >= 0.0f; y -= 0.001f)
		if (f(x, y, z) <= 0.0f) {
			return y;
		}
	return 0.0f;
}

int main() {
	using namespace std;
	cout << "我在编程中国学C++\n\n";

	// 练习一下循环的使用
	int i;
	for (i = 1; i <= 20; i++) {
		printf("我爱编程中国 %d 次\n", i);
	}

	cout << "\n\n编程中国送我一颗大心心：";
	// 绘制一个高逼格的心形图案
	for (float z = 1.5f; z > -1.5f; z -= 0.05f) {
		for (float x = -1.5f; x < 1.5f; x += 0.025f) {
			float v = f(x, 0.0f, z);
			if (v <= 0.0f) {
				float y0 = h(x, z);
				float ny = 0.01f;
				float nx = h(x + ny, z) - y0;
				float nz = h(x, z + ny) - y0;
				float nd = 1.0f / sqrtf(nx * nx + ny * ny + nz * nz);
				float d = (nx + ny - nz) * nd * 0.5f + 0.5f;
				putchar(".:-=+*#%@"[(int)(d * 5.0f)]);
			}
			else {
				putchar(' ');
			}
		}
		putchar('\n');
	}

	return 0;
}