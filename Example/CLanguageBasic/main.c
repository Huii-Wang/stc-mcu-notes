#include "reg51.h"

void main()
{
	volatile unsigned int a = 64000;
	volatile long int b = 100000000;
	volatile float c = 100.0,d = 245.6e30;
	volatile signed int e = -1;
	xdata volatile signed f;
	xdata volatile unsigned g;
	f = a;
	g = b;
	//要点
	//1.数据类型
	//2.如何理解有符号和无符号
	//3.volatile关键字的使用，用于限制编译器假设变量的植
	//4.更准确第说，就是优化器在用到这个变量的时候必须每次都重新读取这个变量的值，而不是保存在寄存器里面的备份
	//另一个重要作用就是确保改指令不会因为编译器的优化而省略掉
}