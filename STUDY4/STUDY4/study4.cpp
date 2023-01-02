//常见关键字 auto break case char const continue default do double else enum
//extern  float for goto if int long register return
//short signed sizeof static structswitch typedef union 
//unsigned void volatile while

//#include<stdio.h>
//int main() {
//
//	 //int a = 0;//auto 自动创建 自动销毁 所有局部变两前面都有个省略掉的auto
//	 //auto 也有其他的用法
//
//	 //const常变量 default默认 else语句 enum枚举 extetn声明外部符号
//	 //for 循环 goto语句 if语句 
//	 //register寄存器关键字
//	register int num = 100;//register 建议num的值存放在寄存器中
//	//大量频繁被使用的数据，放在寄存器中，会提升效率 一般编译器会默认
//
//	//计算机中数据可以存储到寄存器 高速缓存 内存 硬盘 网盘 
//
//	//signed 有符号的10 -20  unsigned 无符号的
//	//static静态的 union联合体（共用体） void无的  volatile c语言暂时不讨论  while循环
//
//	//include和define不是关键字 叫预处理指令
//
//
//
//	return 0;
//}

//typedef unsigned int u_int;
//#include<stdio.h>
//int main() {
//
//	unsigned int num = 0;
//	u_int;//typedef类型定义 类型重命名
//	return 0;
//}
 //static----静态的 
//1.修饰局部变量
//2.修饰全局变量
//3.修饰函数

//#include<stdio.h>
//void test() {
//	static int a = 1;//static修饰局部变啦，改变了局部变啦的生命周期（本质上是改变了变量的存储类型）
//	                    //内存分为栈区  局部变啦函数的参数 堆区 动态内存分配的  静态区 全局变量 static修饰的静态变量 
//
//	a++;
//	printf("%d ", a);
//}
//
//int main() {
//	int i = 0;
//	while (i < 10) {
//		test();
//		i++;
//	}
//
//
//	return 0;
//}


//声明外部符号 extern           全局变量在整个工程中可用 但是要声明
//extern int g_val;
//#include<stdio.h>
//int main() {
//	printf("%d\n", g_val);
//
//	return 0;
//}

//extern int add(int , int );
//#include<stdio.h>
//int main() {
//
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("%d", sum);
//	return 0;
//}

//#define定义常量和宏     是一个预处理指令
//1.define定义符号

//#define MAX 1000
//#include<stdio.h>
//int main() {
//	printf("%d", MAX);
//	return 0;
//
//}

//2.define定义宏
//#define ADD(X,Y) X+Y//因为宏是替换所以下面要得出20  必须 x+y换成（x+y）
//#include<stdio.h>
//int main() {
//
//	printf("%d",4* ADD(2, 3));//答案不是20  因为本质上4*2+3=11 因为宏是替换
//	return 0;
//}


//指针


//内存是怎么编号的  32位 32根地址线——物理线——通电——1/0 32个二进制数字表示
//一个字节是一个内存单元 64位二进制总共可以表示2^64 /1024^3gb内存


#include<stdio.h>
int main() {

	int a = 0;
	printf("%p", a);//打印地址%p
	//int* pa = &a;//c语言中pa叫做指针变量
	//*说明pa是指针变量  int说明pa指向的对象是int类型

	return 0;
}
