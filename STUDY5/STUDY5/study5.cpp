//指针
//
//#include<stdio.h>
//
//int main() {
//	int a = 10;
//	int* pa = &a;
//	printf("%d\n", pa);
//	
//	
//	*pa = 20;         //*叫解引用操作符*pa就是通过pa的地址找到a
//
//	printf("%d\n", a);
//
//	printf("%d\n", sizeof(long*));//指针大小是相同的 因为指针需要多大空间，取决于地址的存储需要
//	printf("%d\n", sizeof(char*));//64位二进制序列表示8个字节
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(float*));
//	return 0;
//}


////结构体   使得c语言有能力描述复杂类型  可以让c语言创建新的类型出来
//#include<stdio.h>
//
////创建一个学生类型
//struct stu {
//	char name[20];//成员变量
//	int age;
//	double score;
//};
//
////创建一个书的类型
//struct book {
//
//	char name[20];
//	float price;
//	char id[20];
//
//};
//int main() {
//	struct stu s = { "zhangxuan",20,85.5 };//结构体的初始化
//	printf("1.%s %d %lf\n", s.name, s.age, s.score);//.操作符结构体变量 成员变量
//
//	struct stu* ps = &s;
//	printf("2.%s%d%lf\n", (* ps).name,(*ps).age,(*ps).score);
//	printf("3.%s%d%lf\n", ps->name, ps->age, ps->score);//结构体指针->成员变量
//	return 0;
//}

//分支语句 if whitch    （选择结构）
//循环语句 while   for   do while
//语句？ c语言中由一个分号隔开的是一条语句

//if（表达式） 语句；
//if（表达式）语句1；else语句2；
//if（表达式1）语句1；else if（表达式2）语句2；else语句3；



//#include<stdio.h>

//int main() {
//	int age = 20;
//
//	if (age >= 18) {
//		printf("成年");
//	}
//
//	else {
//		printf("未成年");
//		printf("不谈对象");
//	};
//	return 0;
//}


//int main() {
//	int age = 0;
//	scanf_s("%d", &age);
//	if (age < 18) {
//		printf("未成年");
//	}
//	else if (age>=18&&age<=26 ) {///（）内的语句只能从左到右表示真假 非0真 0假  并且从左往右判断 且默认&&
//		printf("青年");
//	}
//	else if(age>26&&age<=60){
//		printf("大人");
//	}
//	else{
//		printf("老人");
//	}
//
//
//	return 0;
//}

//悬空else else和距离最近的if匹配
//#include<stdio.h>
//int main(){
//	if (0)
//		return 0;
//	printf("hehe");
//	return 1;
//}

//判断一个数是不是奇数
//#include<stdio.h>
//
//int main() {
//	int a = 0;
//	scanf_s("%d", &a);
//	if (a % 2 == 0) {
//		printf("偶数");
//	}
//	else {
//		printf("奇数");
//	}
//	return 0;
//}

//输出1~100之间的奇数

//#include<stdio.h>
//int pan(int x) {
//	if(x % 2 == 1){
//	printf("%d\n", x); 
//	}
//	return 0;
//}
//
//int main() {
//	int a = 0;
//	while (a <= 100 ) {
//
//		pan(a);
//		a++;
//	}
//	
//		return 0;
//}