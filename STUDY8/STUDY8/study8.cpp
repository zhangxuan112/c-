//#include<stdio.h>
//int main() {
//	int ch[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int kxia = 6;
//	int size = sizeof(ch) / sizeof(int);
//	int left = 0;
//	int right = size - 1;
//	while (left<=right) {
//		int mid = (left + right) / 2;
//		if (mid < kxia) {
//			left = mid;
//		}
//		else if (mid > kxia) {
//			right = mid;
//		}
//		else if (mid = kxia) {
//			printf("找到下标为%d\n数值为", kxia);
//			printf("%d", ++kxia);
//			break;
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//int main() {
//	char arr1[] = { "welcome to chinadsdd" };
//	char arr2[] = { "####################" };
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while (left<=right) {
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(100);//睡眠2秒钟
//		system("cls");//清空屏幕
//		left++; right--;
//		if (left == right) { break; }
//	}
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main() {
//	int i = 0;
//	char mima[3] = { 000 };
//	
//	for (i = 0; i < 3; i++) {
//		printf("请输入密码\n");
//		scanf("%s", mima);//这里不需要&因为数组本来就是地址
//		if (strcmp(mima  ,"123") == 0) {//两个字符串比较用strcmp函数 相同时返回值为0
//			//如果mima==“123”比较的是地址 没有意义
//			printf("密码正确\n"); break;
//		}
//		else {
//			printf("密码正确错误请重试\n");
//		};
//	};
//	if (i == 3) {
//		printf("密码全错\n退出");
//	}
//	return 0;
//}
//写一个猜数字游戏  自动产生一个1-100的数字
//猜对了游戏结束 猜错了会告诉大小  直到猜对
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu() {
//	printf("*******************\n");
//	printf("*******1.play******\n");
//	printf("*******0.exit******\n");
//	printf("*******************\n");
//
//}
//void game() {
//	//1.生成随机数
//	 
//	int ret = rand()%100+1;//rand 是一个无参返回int的函数 返回了一个0-32767的数字但是同起点每次都是一样的
//	                       //给rand这个很大的随机数取模100 则 ret一定是0-99
//	printf("%d\n", ret);
//	//2.猜数字
//	int guess = 0;
//	while (1) {
//		printf("请猜数字：》\n");
//		scanf_s("%d", &guess);
//		if (guess < ret) {
//			printf("猜小了\n");
//		}
//		else if (guess > ret) {
//			printf("猜大了\n");
//		}
//		else{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//int main() {
//	int input = 0;
//	srand((unsigned int)time(NULL));//用时间戳来初始化种子srand（unsigned int seed）
//	do {
//		menu();//打印菜单
//			printf("请选择：》");
//			scanf_s("%d", &input);
//			switch (input) {
//			case 1:
//				printf("猜数字\n");
//				game();
//				break;
//			case 0:
//				printf("退出游戏\n");
//				break;
//			default:
//				printf("选择错误，重新选择\n");
//				break;
//			}
//			
//	} while (input);
//
//	return 0;
//}
//复现一遍
//void menu() {
//	printf("请选择0/1\n");
//
//}
//void game() {
//	int input = 0;
//	int ret = rand() % 100 + 1;
//	printf("%d\n", ret);	
//	while (1) {
//		scanf_s("%d", &input);
//		if (input > ret) {
//			printf("猜大了\n");
//		}
//		else if (input < ret) {
//			printf("猜小了\n");
//		}
//		else {
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//
//int main() {
//	int i = 0;
//	srand ((unsigned int)time(NULL));
//	do {
//		menu();
//		scanf_s("%d", &i);
//		switch (i) {
//		case 1:
//			printf("游戏开始\n");
//			game();
//			break;
//		case 0:
//			printf("游戏结束\n");
//			break;
//		default:
//			printf("请重新选择\n");
//			break;
//		}
//
//
//
//	} while (i);
//	return 0;
//}
//写代码将三个整数从大到小输出

//#include<stdio.h>
//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf_s("%d%d%d", &a ,& b ,& c);
//	if (a >b) {
//		
//		if (c > a) { printf("%d %d %d",c,a,b); }
//		else if (c < a && c < b) { printf("%d %d %d",a,b,c); }
//		else { printf("%d %d %d",a,c,b); };
//	}
//	else if (a < b) {
//		
//		if (c > b) { printf("%d %d %d",c,b,a); }
//		else if (c < a && c < b) { printf("%d %d %d",b,a,c); }
//		else { printf("%d %d %d",b,c,a); };
//	}
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf_s("%d%d%d", &a, &b, &c);
//	if (a < b) {
//		int tmp = a;
//		a = b;
//		b = a;
//	}
//	if (a < c) {
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c) {
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//打印1-100之间3的倍数的数字
//#include<stdio.h>
//int main() {
//	int i = 0;
//	for (i = 0; i < 100; i++) {
//		if (0==i%3) {
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//给定两个数字 求这两个数字的最大公约数
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main() {
//	int m = 0;
//	int n = 0;
//	scanf("%d%d",& m, &n);
//	int max = 0;
//	if (m > n) {
//		max = n;
//	}
//	else max = m;
//	while (1) {
//		if (m % max == 0 && n % max == 0) {
//			printf("最大公约数是%d",max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf_s("%d%d",& a,& b);
//	while (1) {
//		int tmp = a % b;
//		if (0 != tmp) {
//			a = b;
//			b = tmp;
//
//		}
//		else { printf("%d", b); 
//		break;
//		}
//	}
//	return 0;
//}
//打印1000-2000年的闰年
//#include<stdio.h>
//int main() {
//	int i = 0;
//	for (i = 1000; i <= 2000; i = i + 4) {
//		printf("%d\n", i);
//	}
//
//	return 0;
//}

//打印100-200之间的素数