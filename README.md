# D3D11Program

#### 代码架构

![img](D:\DX11\pic0006.gif)

#### 提交命令记录

token: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

#### 错误记录

1. 如果创建的是Win32控制台程序，就必须写main函数；创建的是桌面程序的话，入口函数就得定义WinMain函数。在预处理器、链接器中可以修改项目的类型

2. 计算光照

   在Pixel中逐像素进行着色时，sv_position已经是屏幕坐标了，所以要自己传入世界空间或者摄像机空间下的位置，dx11会自动进行插值

   要注意计算的空间，光照信息和顶点信息得转换到对应空间下

   注意法线和光照方向的夹角

3. 顶点布局inputlayout中要注意各个语义的offset，要不然gpu读取的信息会有误

   

