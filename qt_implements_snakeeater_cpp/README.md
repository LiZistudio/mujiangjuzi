# Qt实现贪吃蛇_CPP

#### 介绍
Qt实现贪吃蛇_CPP

打包好的exe程序在 https://gitee.com/ikaros-521/dabaohaodeexechengxuhuizong


#### 使用说明

↑↓←→ 操控方向

龙卷风版 速度极快，碰壁就死，不会加长。

简单版  速度不变，可以通过长按方向键加速，碰壁就死，可以回头，不能吃尾巴，会加长。

#Qt Creator Documentation 2.4.1

#### 效果图
普通版
![在这里插入图片描述](https://images.gitee.com/uploads/images/2020/0108/090201_b40c2ebf_5140590.png)

龙卷风版
![在这里插入图片描述](https://images.gitee.com/uploads/images/2020/0108/152017_3f6b9869_5140590.png)



------------------------
实现程序重启

main.c 添加
```
    #include <QProcess>
    //return a.exec();
    int e = a.exec();
    if(e == 888)
    {
        QProcess::startDetached(qApp->applicationFilePath(), QStringList());
        return 0;
    }
    return e;
```

widget.c中改exit(0) 为 qApp->exit(888);

