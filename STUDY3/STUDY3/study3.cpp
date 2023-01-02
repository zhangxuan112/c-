//#include<stdio.h>
//int main() {
//	int coding = 0;
//	printf("你有梦想吗？选择0or1\n");
//	scanf("%d", &coding);
//
//	if (coding == 1) {
//		printf("你会成功的\n");
//	}
//	else  {                            //若给else后面；则语句结束
//
//		printf("你失败了\n");
//	}
//		return 0;
//}  
//#include<stdio.h>
//int main() {
//
//	int line = 0;
//	//scanf("%d", &line);
//		while (line < 30000) {
//
//			printf("%d:你的猜测没毛病\n",line);
//			line++;
//		}
//		if (line == 20) {
//			printf("猜测属实没毛病");
//		}
//		else{
//			printf("666");
//		}
//		return 0;
//}

//#include<stdio.h>
//
// int Add(int x,int y) {
//	int z = 0;
//	z = x + y;
//		return z;//语句的意思是返回z给函数Add z=add=x+y
//}
//
//int main(){
//
//	int num1 = 0;
//	int num2 = 0;
//	
//	scanf_s("%d%d", &num1, & num2);
//	int sum = Add(num1, num2);
//	printf("%d", sum);
//	return 0;
//	}




//#include<stdio.h>
//
//int main() {
//
//	int a = 1;
//	int b = 2;
//
//	//一组相同类型的元素的集合叫做数组
//	//数组是用下标来访问的 arr中第一个元素的下标为0
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	while (i < 10) {
//		printf("%d\n", arr[i]);//用监视功能理解代码运行的数组
//		i=i+1;
//	}
//	char ch[5] = { 'a','b','c' };
//
//	return 0;
//}


// 操作符
// 算数操作符 + - * / %
// 移位操作符>> <<
// 赋值操作符 =  += -=  *= /= &= ^= >>= <<=
// 位操作符& ^ |           &按位与 ^按位或 |按位异或
//  单目操作符   比如a+b有两个操作数 叫双目操作符 单个操作数叫单目操作符
// 
//！逻辑反操作
// -负值  +正值 &取地址 sizeof 操作数的类型长度单位字节
// ~对一个数的二进制按位取反 --前置，后置--   ++前置，后置++
// *间接访问操作符  
// （类型） 强制类型转换
//

//#include<stdio.h>
//
//int main() {
//
//	//float a =  1/ 3;//应该改为1.0 或者3.0
//	//printf("%f\n", a);//答案是0.000 因为/两端都是整数执行整数除法
//	
//	//int a = 9 % 2;//%取模 或者取余操作符 得出答案为1
//	
//	//int a = 15;
//	//int b = a << 1;//	<<左移操作符 位数左移 增大2倍
//
//	//a = a + 2;
//	//a += 2;
//
//	//a = a % 2;
//	//a %= 2;
//	printf("%d\n", b);
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int a = 0;//0表示假 其他为真
//	printf("%d\n", !a);//输出值为零 因为假数字只有0
//	if (a) {
//		//如果a为真做事情
//    }
//	if (!a) {
//		//如果a为假做事情
//	}
//	//a = +a;单目操作符
//	//a = -a;单目操作符
//	printf("%d\n%d", sizeof a,sizeof (int));//a可以不带括号说明sizeof不是函数
//
//
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int arr[10] = {0};
//		printf("%d\n", sizeof(arr));//此时计算的是数组总大小
//		printf("%d\n", sizeof(arr[0]));//此时计算的是单个元素所占int大小
//		return 0;
//}

//#include<stdio.h>
//
//int main() {
//	int //a = 0;
//		//printf("%d\n", ~a);//按位取反 把所有二进制位的数字1or0互变
//		//int中的0的二进制是 32个0 ；32个1
//		//整数在内存中存的是补码
//		//一个整数的二进制表示有三种 分别是 源码 反码 补码
//		//整数的最高位表示符号 
//		//-1的源码10000000000000000000000000000001  32个数字第一个是符号位 -1的源码
//		//-1的反码11111111111111111111111111111110  符号位不变
//		//-1的补码11111111111111111111111111111111  补码等于反码加1 源反补的计算是针对负数 正整数三码相同
//
//
//	return 0;
//}


//#include<stdio.h>
//
//int main(){
//	int a = 10;
//	int b = ++a;//前置++先进行++再操作赋值
//	printf("%d\n", a);
//	printf("%d", b);
//	return 0;
//	}



//#include<stdio.h>
//int main() {
//	int a = (int)3.14;//强制类型转换 忽略数据丢失
//	printf("%d", a);
//
//	return 0;
//}


//关系操作符 > < >= <= !=用于测试不相等 ==用于测试相等
//逻辑操作符  &&  表示逻辑与|| 表示逻辑或
//条件操作符 exp1？exp2：exp3 三目操作符exp1如果exp1成立exp2计算，整个表达式的结果是exp2 如果exp1不成立，用exp3计算结果为exp3
//下标引用 函数调用 结构成员 []  ()  .  ->
//逗号表达式 exp1，exp2，exp3......

//

//#include<stdio.h>
//
//int main() {
//	int a = 0;
//	int b = 3;
//	int max = 0;
//	//if (a > b) {
//	//	max = a;
//	//}
//	//else {
//	//	max = b;
//	//}
//
//	max = a > b ? a : b;//与上面的if语句等效
//	printf("%d\n", max);
//
//	return 0;
//}


//#include<stdio.h>
//
//int main() {
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	int d = (a = b + 2, c = a - 4, b = c + 2);//逗号表达式从左往右 但整个表达式的结果是最右边
//	         //a=5       c=1       b=3
//	printf("%d", d);
//	return 0;
//}



//#include<stdio.h>
//
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//[]是定义数组的操作符
//
//	printf("%d\n", arr[5]);//下标引用操作符
//
//	return 0
//		;
//}

//#include<stdio.h>
//
//int main() {
//
//	printf("asd");//()叫函数调用操作符
//
//	return 0;
//}