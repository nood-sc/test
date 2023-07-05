#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//第二种常量 const修饰的常变量
//int main()
//{
//	//常变量 const修饰，例如const int a=10，a的值固定，之后不可更改。 
//	return 0;
//}
//第三种常量#define定义的标识符常量。例如#define MAX 10000，之后不可更改。

//枚举常量--可以一一列举的常量
//性别
enum Sex
{
	MAKE,
	FAMALE,
	SECRET

};

int main()
{
	enum Sex s = FAMALE;
	return 0;
}