//ָ��
//
//#include<stdio.h>
//
//int main() {
//	int a = 10;
//	int* pa = &a;
//	printf("%d\n", pa);
//	
//	
//	*pa = 20;         //*�н����ò�����*pa����ͨ��pa�ĵ�ַ�ҵ�a
//
//	printf("%d\n", a);
//
//	printf("%d\n", sizeof(long*));//ָ���С����ͬ�� ��Ϊָ����Ҫ���ռ䣬ȡ���ڵ�ַ�Ĵ洢��Ҫ
//	printf("%d\n", sizeof(char*));//64λ���������б�ʾ8���ֽ�
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(float*));
//	return 0;
//}


////�ṹ��   ʹ��c����������������������  ������c���Դ����µ����ͳ���
//#include<stdio.h>
//
////����һ��ѧ������
//struct stu {
//	char name[20];//��Ա����
//	int age;
//	double score;
//};
//
////����һ���������
//struct book {
//
//	char name[20];
//	float price;
//	char id[20];
//
//};
//int main() {
//	struct stu s = { "zhangxuan",20,85.5 };//�ṹ��ĳ�ʼ��
//	printf("1.%s %d %lf\n", s.name, s.age, s.score);//.�������ṹ����� ��Ա����
//
//	struct stu* ps = &s;
//	printf("2.%s%d%lf\n", (* ps).name,(*ps).age,(*ps).score);
//	printf("3.%s%d%lf\n", ps->name, ps->age, ps->score);//�ṹ��ָ��->��Ա����
//	return 0;
//}

//��֧��� if whitch    ��ѡ��ṹ��
//ѭ����� while   for   do while
//��䣿 c��������һ���ֺŸ�������һ�����

//if�����ʽ�� ��䣻
//if�����ʽ�����1��else���2��
//if�����ʽ1�����1��else if�����ʽ2�����2��else���3��



//#include<stdio.h>

//int main() {
//	int age = 20;
//
//	if (age >= 18) {
//		printf("����");
//	}
//
//	else {
//		printf("δ����");
//		printf("��̸����");
//	};
//	return 0;
//}


//int main() {
//	int age = 0;
//	scanf_s("%d", &age);
//	if (age < 18) {
//		printf("δ����");
//	}
//	else if (age>=18&&age<=26 ) {///�����ڵ����ֻ�ܴ����ұ�ʾ��� ��0�� 0��  ���Ҵ��������ж� ��Ĭ��&&
//		printf("����");
//	}
//	else if(age>26&&age<=60){
//		printf("����");
//	}
//	else{
//		printf("����");
//	}
//
//
//	return 0;
//}

//����else else�;��������ifƥ��
//#include<stdio.h>
//int main(){
//	if (0)
//		return 0;
//	printf("hehe");
//	return 1;
//}

//�ж�һ�����ǲ�������
//#include<stdio.h>
//
//int main() {
//	int a = 0;
//	scanf_s("%d", &a);
//	if (a % 2 == 0) {
//		printf("ż��");
//	}
//	else {
//		printf("����");
//	}
//	return 0;
//}

//���1~100֮�������

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