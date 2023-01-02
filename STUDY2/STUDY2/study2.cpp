#define _CRT_SECURE_NO_WARNINGS 1
////局部变量的生命周期。进入局部范围生命开始，出局部范围生命结束
////全局变量的生命周期。就是程序的生命周期
//#include <stdio.h>
//int main() {
//	//const-常属性
//	const int n = 10;//n是变量 但是又有常属性，所以n是常变量
//
//	//int arr[n] = { 0 };//
//	
//	//n = 20;
//
//
//	const int num = 4;//const修饰的常变量 意思是具有常属性的变量
//	printf("%d\n\n", num);
//	   // num = 8;
//	//printf("%d\n", num);
//
//	//3;//字面常量  直观写出来的值 
//	//100;//字面常量
//	return 0;
//};


//还有define定义的标识符常量
//#include<stdio.h>
//
//int main() {
//#define MAX 10000;//可以放在外面也可以放在里面 属于常量
//	int n = MAX;
//	printf("%d", n);
//
//
//	return 0;
//}



//枚举常量 可以一一列举的量  比如性别
//#include<stdio.h>
//enum Sex {       //enum是枚举关键词
//	MALE = 3,      //赋初值
//	FEMALE,SECRET      //这种枚举类型的变量的未来可能取值
//};
//
//int main() {
//	enum Sex s=MALE ;
//	printf("%d\n", MALE);
//	return 0;
//}



//字符串就是一串字符-用双引号括起来的一串字符
//#include<stdio.h>
//int main() {
//
//	"abcdef"  "hellobit";
//
//	"hello";
//
//
//
//		return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main() {
//	//字符数组 -数组是一组相同类型的元素
//	//char arr[] = "hello";
//	
//	char arr1[] = "abc";   //相当于有这些字符abc\0
//	char arr2[] = {'a','b','c',};//如果不加入\0这个转义字符相当于abc+未知的乱码要加入 字符串长度为随机值
//
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	//求一下字符串的长度
//	int len = strlen("abc"); //strlen是个关键词相当于 string length
//	printf("%d\n", len);//打印出来是三个字符组成的字符串 因为默认存在的\0不被算进长度里面
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	return 0;
//}



//#include<stdio.h>;
//int main() {
	//printf("c:\test\test.c");//我们发现这个打印出来是没有t的  因为\t会被识别为一种字符必须改成如下
	//printf("c:\\test\\test.c");  //如此一来可以打印出地址
	//printf("ab\ncd");   //\n是换行的转义字符
	//printf("(areyouok??)");//有些编译器会把这样的？？）编译成】所以想打出两个问号要加入\符号

	//printf("%c\n", '\'');//所以要打印一个单引号要用到\符号隔开 防止无法分清单引号的结尾
	//注解 printf打印的时候要指定格式%d 100   %c 'a'    %s "abc"

	//printf("\a\a\a\a\a");// \a是警告字符蜂鸣

	//   常见转义字符总结如下
	/*\'用于表示字符常量’
		\"用于表示一个字符串内部的双引号
		\\用于表示一个反斜杠，防止它被解释为一个转义序列符
		\a警告字符.蜂鸣
		\b退格符
		\f进纸符
		\n换行符
		\r回车符
		\t水平制表符
		\v垂直制表符
		\ddd ddd表示1-3个八进制的数字 如\130
		\xdd dd表示2个十六进制的数字。如\x30 0
	return 0;
}*/


//

//#include<stdio.h>;
//
//int ADD(int x, int y) {
//	
//	z = x + y;
//	return z;
//}
//int main() {
//
//	int num1 = 0;
//	int num2 = 0; 
//	scanf_s("%d%d", &num1, &num2);
//	//int sum = num1 + num2;
//	//函数方式解决
//	int sum=ADD(num1, num2);
//	printf("%d", sum);
//
//	return 0;
//}