using System;

//未复用
//namespace test
//{
//    class Program
//    {
//        static void Main(string[] args)
//        {
//            Calculator c = new Calculator();
//            double ret = c.GetCircleArea(10);
//            Console.WriteLine(ret);
//            //c.GetCylinderVolume
//        }
//    }
//    class Calculator
//    {
//        public double GetCircleArea(double r)
//        {
//            return 3.1415926535 * r * r;
//        }

//        public double GetCylinderVolume(double r,double h)
//        {
//            return 3.1415926535 * r * r * h;
//        }

//        public double GetConeVolume(double r,double h)
//        {
//            return 3.1415926535 * r * r * h / 3;
//        }
//    }
//}

//复用之后
namespace test
{
    class Program
    {
        static void Main(string[] args)
        {
            Calculator c = new Calculator();
            double ret = c.GetCircleArea(10);
            Console.WriteLine(ret);
            Console.WriteLine(c.GetCylinderVolume(10, 10));
            Console.WriteLine(c.GetConeVolume(10, 10));
        }
    }
    class Calculator
    {
        //圆柱面积
        public double GetCircleArea(double r)
        {
            return Math.PI * r * r;//函数复用之后pi值只需要改变此一处就可以改变其他地方
        }
        //圆柱体积
        public double GetCylinderVolume(double r, double h)
        {
            return GetCircleArea(r) * h;
        }
        //圆锥体积
        public double GetConeVolume(double r, double h)
        {
            return GetCylinderVolume(r,h) / 3;
        }
    }
}