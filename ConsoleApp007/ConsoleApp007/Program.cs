using System;
using ConsoleApp2;
using ConsloeApp3;

namespace ConsoleApp2
{
    class program
    {
        public static void JiujiuChengfabiao()
        {
            Console.WriteLine("你好 栗子\n");
            int i = 0;
            int j = 0;
            for (i = 1; i <= 9; i++)
            {
                for (j = 1; j <= i; j++)
                {
                    Console.Write("{0}X{1}={2}\t", i, j, i * j);
                }
                Console.WriteLine();
            }
            Console.ReadKey();
        }
    }
    class Shixian
    {
        public static void Main()
        {
            program.JiujiuChengfabiao();
            program2.Print();
        }
    }
}
namespace ConsloeApp3
{
    class program2
    {
        public static void Print()
        {
            Console.WriteLine("\ni love you although you don`t love me");
        }
    }
}