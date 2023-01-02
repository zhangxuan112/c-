//#include <stdio.h>
//int main()
//{
//	char ch = 'A';
//	printf("%c\n", ch); //%c指打印字符格式的数据
//	int age = 20;       //%f打印浮点型数据 %p以地址形式打印
//	printf("%d\n", age);//%d十进制数据
//	                    //short int短整形
//	                    //int 整形 char字符型
//	                    //long 长整形
//	                    //比如 
//	long num = 100;
//	printf("%d\n", num);
//
//
//
//	printf("%d\n", sizeof(char));1//sizeof是一个操作符 用于计算类型或者变量所占空间的大小00
//	printf("%d\n", sizeof(long)); //可能是4或8byte C语言标准只是规定sizeof（long）>=sizeof（int）
//	printf("%d\n", sizeof(float));4
//	printf("%d\n", sizeof(long long));8
//	printf("%d\n", sizeof(int));4
//	printf("%d\n", sizeof(short));2
//	printf("%d\n", sizeof(double));8
//	//年龄20
//	short age = 20;//向内存要两个byte也就是16个bit的空间存储20=age这条讯息
//	float weight = 94.6;//向内存要4个字节也就是32个bit
//	
//	return 0;
//}



//#include<stdio.h>
//int num = 1000;//全局变量 定义在（{}）之外的变量 也可以作用在{}内只是优先级降低  局部优先规则
//int main()
//{
//
//	int num = 100;//局部变量 定义在{}里面的变量  此时变量的作用域为{}
//	              //两种变量取名尽量不要重复 当名字相同时 局部变量优先
//	              //比如这段答案是100  并且局部变量只在其{}内有效
//	printf("%d\n", num);
//	return 0;
//}



////程序2
//#include<stdio.h>
//int main() {//计算两个变量的和的程序
//	
//	int num1 = 0;
//  int sum = 0;
//	int num2 = 1;//这些数字可以随便改
//	//C语言规定，变量要定义在当前代码块的最前面
////输入数据 使用输入函数 scanf
//	scanf_s("%d%d", &num1, &num2);//取地址符号&
//	
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}


//程序3
//#include<stdio.h>
//
//int main()
//{
//	int num1 = 1; 
//	int num2 = 4;
//	int sum3 = 1;
//	scanf_s("%d%d,",&num1,&num2);
//
//	sum3 = num1 + num2;
//	printf("num3=%d",sum3);
//	return 0;
//}

//如果要使用其他文件的变量 得声明一下 比如extern int g_val 此时main函数可以调用这个变量

//程序4
//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum1 = 0;
//   
//	scanf_s("%d%d%d", &num1 ,&num2,&sum1);
//	sum1 = num1 + num2;
//	printf("%d\n", sum1);
//	return 0;
//}

