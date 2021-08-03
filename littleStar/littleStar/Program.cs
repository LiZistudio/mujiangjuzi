using System;

namespace bccn
{
	class Program
	{
		static void Main(string[] args)
		{
			Console.WriteLine("我在编程中国学C#");
			Console.WriteLine();

			// 练习一下循环的使用
			for (int i = 1; i <= 20; i++)
			{
				Console.WriteLine("我爱编程中国 {0} 次", i);
			}

			Console.Write("\n\n编程中国送我一颗小心心：");
			// 绘制一个心形图案
			float y, x, z, f;
			for (y = 1.5f; y > -1.5f; y -= 0.1f)
			{
				for (x = -1.5f; x < 1.5f; x += 0.05f)
				{
					z = x * x + y * y - 1;
					f = z * z * z - x * x * y * y * y;
					Console.Write(f <= 0.0f ? ".:-=+*#%@"[(int)(f * -8.0f)] : ' ');
				}
				Console.WriteLine();
			}
		}
	}
}