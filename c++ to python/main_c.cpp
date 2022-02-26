//c++编译C格式
#include<stdio.h>


extern "C" __declspec(dllexport) void fun_name()//函数名
{
	printf("11111\n");
}
//生成控制台
// 属性>>生成ddl
//生成>>生成解决方案>>dll放到python的