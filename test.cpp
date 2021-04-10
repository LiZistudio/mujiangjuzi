// 这是一个调试测试文件，您可以直接运行检测配置是否生效
// 若配置任然无法调试，请查阅README_inProject.md

#include <stdio.h>
#include <stdlib.h>

using namespace std;

// int main() {
//     printf("Congratulasions! It works!\n");
//     cout<<"Hello"<<endl;
//     cout<<"\a"<<endl;
//     system("pause");
//     return 0;
// }


#include<iostream>
#include <vector>

int main ()
{
    vector <double> vecDouble={98.5,43.6,57.3,32.7};
    //向数组中插入数字
    vecDouble.push_back(56.9);//在数组末尾插入一个数字
    int i=0;
    for ( i = 0; i < vecDouble.size(); i++)//size();返回容器中元素的个数
    {
        cout<<vecDouble[i]<<endl;
    }
    
    //集合的通用遍历方法：是使用迭代器 iterator
    //以下是迭代器的基本用法，前方高能！！！>:
    vector<double>::iterator it;//得到迭代器对象-实际上是一个指针对象！
    //it.begin
    //从第一个元素开始迭代
    for (it=vecDouble.begin();it!=vecDouble.end();++it)
    {
        cout<<*it<<endl;
    }

    system("pause");

    return 0;
}
