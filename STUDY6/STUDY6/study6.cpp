//分支语句switch
//switch（整形表达式）{语句项}；
//#include<stdio.h>
//int main() {
//	
//	int day = 2;
//	scanf_s("%d",&day);
//	switch (day) {//()是整形常量表达式
//
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期三\n");
//		break;
//	case 3:
//		printf("星期五\n");
//		break;
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main() {
//	int day = 0;
//	scanf_s("%d", &day);
//
//	switch (day) {//switch允许嵌套使用
//
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日");
//		break;
//	case 6:
//	case 7:
//		printf("休息日");//以 break结束的块可以互换位置
//		break;
//	default:
//		printf("输入错误");
//		break;
//			}
//	return 0;
//}


//循环结构  while for  do while

//#include<stdio.h>
//int main() {
//	int i = 0;
//	while (i <= 10) {
//
//		if (i == 1)
//		{continue;
//	}//	break;//在while循环中，break用于永久的终止循环 continue用于跳出本次循环再次判断
//		printf("%d\n", i);
//		++i;
//	}
//
//	return 0;
//}

//gettchar 从键盘获取一个字符  putchar 输出一个字符
//EOF end of file文件结束标志
//CTRL+Z =getchar  读取结束
//#include<stdio.h>
//int main() {
//	int ch = 0;
//	while ((ch = getchar()) != EOF) {
//		putchar(ch);
//	}
//		
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	char password[20] = { 0 };
//	printf("输入密码\n");
//	scanf_s("%s", password,20);
//	printf("确认密码Y/N\n");
//	//清理缓冲区
//	//getchar();//处理scanf输入的\n
//	int tmp = 0;
//	while ((tmp=getchar())!='\n') {//whiile用于清理缓冲区多个字符
//		
//			}
//	int ch = getchar();//字符是ascn码值存储的 所以可以定义为int
//	if (ch == 'Y') {
//		printf("确认成功");
//	}
//	else {
//		printf("确认失败\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int ch = 0;
//	while ((ch = getchar()) != EOF) {
//		if (ch < '0' || ch>'9') {
//			continue;
//		}
//
//		 putchar(ch); 
//
//
//	}
//
//	return 0;
//}

//for循环   把初始化、判断、调整放置在一起
//for（表达式1；表达式2；表达式3）循环语句；1是初始化 2是判断 3是调整

//#include<stdio.h>
//int main() {
//	int i = 1;//初始化
//	while (i <= 10) {//判断
//
//		printf("%d ", i);//执行   
//		i++;//调整
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	for (int i = 1; i <= 10; i++) {
//		if (i == 5) {
//			continue;
//		}
//
//		printf("%d", i);
//
//	}
//
//	return 0;
//}