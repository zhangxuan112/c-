//�����ؼ��� auto break case char const continue default do double else enum
//extern  float for goto if int long register return
//short signed sizeof static structswitch typedef union 
//unsigned void volatile while

//#include<stdio.h>
//int main() {
//
//	 //int a = 0;//auto �Զ����� �Զ����� ���оֲ�����ǰ�涼�и�ʡ�Ե���auto
//	 //auto Ҳ���������÷�
//
//	 //const������ defaultĬ�� else��� enumö�� extetn�����ⲿ����
//	 //for ѭ�� goto��� if��� 
//	 //register�Ĵ����ؼ���
//	register int num = 100;//register ����num��ֵ����ڼĴ�����
//	//����Ƶ����ʹ�õ����ݣ����ڼĴ����У�������Ч�� һ���������Ĭ��
//
//	//����������ݿ��Դ洢���Ĵ��� ���ٻ��� �ڴ� Ӳ�� ���� 
//
//	//signed �з��ŵ�10 -20  unsigned �޷��ŵ�
//	//static��̬�� union�����壨�����壩 void�޵�  volatile c������ʱ������  whileѭ��
//
//	//include��define���ǹؼ��� ��Ԥ����ָ��
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
//	u_int;//typedef���Ͷ��� ����������
//	return 0;
//}
 //static----��̬�� 
//1.���ξֲ�����
//2.����ȫ�ֱ���
//3.���κ���

//#include<stdio.h>
//void test() {
//	static int a = 1;//static���ξֲ��������ı��˾ֲ��������������ڣ��������Ǹı��˱����Ĵ洢���ͣ�
//	                    //�ڴ��Ϊջ��  �ֲ����������Ĳ��� ���� ��̬�ڴ�����  ��̬�� ȫ�ֱ��� static���εľ�̬���� 
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


//�����ⲿ���� extern           ȫ�ֱ��������������п��� ����Ҫ����
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

//#define���峣���ͺ�     ��һ��Ԥ����ָ��
//1.define�������

//#define MAX 1000
//#include<stdio.h>
//int main() {
//	printf("%d", MAX);
//	return 0;
//
//}

//2.define�����
//#define ADD(X,Y) X+Y//��Ϊ�����滻��������Ҫ�ó�20  ���� x+y���ɣ�x+y��
//#include<stdio.h>
//int main() {
//
//	printf("%d",4* ADD(2, 3));//�𰸲���20  ��Ϊ������4*2+3=11 ��Ϊ�����滻
//	return 0;
//}


//ָ��


//�ڴ�����ô��ŵ�  32λ 32����ַ�ߡ��������ߡ���ͨ�硪��1/0 32�����������ֱ�ʾ
//һ���ֽ���һ���ڴ浥Ԫ 64λ�������ܹ����Ա�ʾ2^64 /1024^3gb�ڴ�


#include<stdio.h>
int main() {

	int a = 0;
	printf("%p", a);//��ӡ��ַ%p
	//int* pa = &a;//c������pa����ָ�����
	//*˵��pa��ָ�����  int˵��paָ��Ķ�����int����

	return 0;
}
