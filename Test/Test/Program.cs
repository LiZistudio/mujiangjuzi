using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Test
{
    class Program
    {
        static void Main(string[] args)
        {
            Fun num = new Fun();
            num.Add(4, 8);
        }
    }
    class Fun
    {
        public void Add(int a,int b)
        {
            Console.WriteLine(a + b);
        }
    }
}
