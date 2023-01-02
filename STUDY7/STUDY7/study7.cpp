//for循环

//#include<stdio.h>
//int main() {
//	for (int i = 0; i <= 10; i++) {//for循环的三个语句用分号隔开	循环条件尽量左闭右开	
//		if (i == 5)
//			break;
//	
//			printf("%d", i);//在for循环内改变循环变量可能会死循环
//	}
//
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int i= 0;
//	int j = 0;
//	for (i = 0; i < 3; i++) {
//		for (j ; j < 3; j++) {//此时3个因为第二次开始进入嵌套的for循环 j还保留上次的值
//			printf("hehe\n");
//		}
//	}
//		return 0;
//}

//#include<stdio.h>
//int main() {
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++) {
//		printf("hehe\n");
//	}//2个hehe
//
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int i, k;
//	for (i = 0, k = 0; k = 0; i++, k++) {//进行0次循环  因为判断语句k=0是赋值 0表示假
//		k++;
//		}
//
//	return 0;
//}

//do while循环  do循环语句；  while（表达式）；
//#include<stdio.h>
//int main() {
//	int i = 1;
//	do {
//		if (i == 5)
//		{		continue;
//	}
//		printf("%d", i);
//		i++;
//	} while (i<=10);
//
//	return 0;
//}







//练习计算n的阶乘
// 
//计算1！+2！+3!.....+10!
// 
//在一个有序数组中查找具体的某个数字n。
//编写int binsearch（int x，int v[]，int n）功能：在v[0]<=v[1]<=v[2]<=.....v[n-1]的数组中查找x

//编写代码，演示多个字符从两端移动，向中间汇聚

//编写diamagnetic实现，模拟用户登陆情景，并且只能登录三次。（之云希输入三次密码，如果密码正确）
//则提示登录成功，如果三次均输入错误，则退出程序

//1
//#include<stdio.h>
//int main() {
//	int x=0;
//	int y=0;
//	int daan=1;
//	scanf_s("%d", &x);
//	for (y = 1; y <= x;y++ ) {
//		 daan *= y;
// 
//	}
//	printf("%d", daan);
//	return 0;
//}

//2
//#include<stdio.h>
//int jiecheng(int x) {
//	int x1 = 1;
//		int z = 1;
//	for (x1 = 1; x1 <= x; x1++) {
//		z *= x1;
//		}
//	
//	return z;
//}
//int main() {
//
//	int i = 1;
//		int y = 1;
//	for (i = 1; i <= 10; i++) {
//		y = jiecheng(i);
//	}
//
//	printf("%d", y);
//	return 0;
//}方法2
//#include<stdio.h>
//int main() {
//	int daan = 1;
//	int x1 = 1;
//	int y2 = 1;
//	int sum = 0;
//	for (int x1 = 1; x1 <= 10; x1++) {
//		daan = 1;
//		for (int y2 = 1; y2 <= x1; y2++) {
//			
//			daan *= y2;
//		} sum += daan;
//	}
//
//	printf("%d", sum);
//	return 0;
//}
//方法3
//#include<stdio.h>
//int main() {
//	int ret = 1;
//	int sum = 0;
//	int n = 0;
//	for (n = 1; n <= 10; n++) {
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d", sum);
//
//	return 0;
//}


//3
//#include<stdio.h>
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(int);
//	int left = 0;
//	int right = sz - 1;
//	int mid = (left + right) / 2;
//
//
//
//
//
//
//	return 0;
//}
