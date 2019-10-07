#include "reg51.h"



//方法

int get_max_int(int a,int b)
{
	if (a>b)
	{
		return a;
	}
	return b;
	
}

//结构体 类似枚举
struct student
{
	char name[30];
	char gender;
	int age;
	long int num;
};


void main()
{

	//要点
	//1.数据类型
	//2.如何理解有符号和无符号
	//3.volatile关键字的使用，用于限制编译器假设变量的植
	//4.更准确第说，就是优化器在用到这个变量的时候必须每次都重新读取这个变量的值，而不是保存在寄存器里面的备份
	//另一个重要作用就是确保改指令不会因为编译器的优化而省略掉
	volatile unsigned int a = 64000;
	volatile long int b = 100000000;
	volatile float c = 100.0,d = 245.6e30;
	volatile signed int e = -1;
	xdata volatile signed f;
	xdata volatile unsigned g;
	f = a;
	g = b;




	//sbit可以定义用于定义8051单片机内RAM中的可位寻址或SFR中的可寻址位
	sfr P0 = 0x80;
	sfr P1 = 0x90;

	sbit T0 = 0xB4;
	sbit TXD = 0xB1;



	//类型操作
	volatile int abc = 456;
	void unsigned int bbb = 456;
	int ccc;
	ccc = abc + bbb;

	//关系运算
	//赋值运算
	//位运算



	//语句
	printf("Hello,World!");

	for (int i = 0; i < 10; i++)
	{
		/* code */
		switch (i)
		{
		case 1:
			printf("Hello,World 01 ")
			break;
		case 2:
			printf("Hello,World 02 ")
			break
		
		default:
			break;
		}
	}

	if (a>b)
	{
		printf("A > B")
	}
	else
	{
		printf("A < B 或者 A  = B")
	}



	//C语言中的数组
	volatile int a[10] = {0,1,2,3,4,5,6,7};
	volatile char b[4] = {'a','b','c','d'};
	volatile char c[40] = {"Hello,World!"};

	//二维数组 多维数组
	volatile int a[2][2] = {1,2,3,4}
	volatile char b[2][2][2] = {0,1,2,3,4,5,6,7};

	//指针 数据的内存地址
	int a = 50;
	*p1 = &a;



	//测试结构体
	//面向对象时候 可以用这个结构体进行处理
	xdata struct student stu[2];
	
	stu[0].name = "i";

	

		
}