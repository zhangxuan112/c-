#define _CRT_SECURE_NO_WARNINGS 1
////�ֲ��������������ڡ�����ֲ���Χ������ʼ�����ֲ���Χ��������
////ȫ�ֱ������������ڡ����ǳ������������
//#include <stdio.h>
//int main() {
//	//const-������
//	const int n = 10;//n�Ǳ��� �������г����ԣ�����n�ǳ�����
//
//	//int arr[n] = { 0 };//
//	
//	//n = 20;
//
//
//	const int num = 4;//const���εĳ����� ��˼�Ǿ��г����Եı���
//	printf("%d\n\n", num);
//	   // num = 8;
//	//printf("%d\n", num);
//
//	//3;//���泣��  ֱ��д������ֵ 
//	//100;//���泣��
//	return 0;
//};


//����define����ı�ʶ������
//#include<stdio.h>
//
//int main() {
//#define MAX 10000;//���Է�������Ҳ���Է������� ���ڳ���
//	int n = MAX;
//	printf("%d", n);
//
//
//	return 0;
//}



//ö�ٳ��� ����һһ�оٵ���  �����Ա�
//#include<stdio.h>
//enum Sex {       //enum��ö�ٹؼ���
//	MALE = 3,      //����ֵ
//	FEMALE,SECRET      //����ö�����͵ı�����δ������ȡֵ
//};
//
//int main() {
//	enum Sex s=MALE ;
//	printf("%d\n", MALE);
//	return 0;
//}



//�ַ�������һ���ַ�-��˫������������һ���ַ�
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
//	//�ַ����� -������һ����ͬ���͵�Ԫ��
//	//char arr[] = "hello";
//	
//	char arr1[] = "abc";   //�൱������Щ�ַ�abc\0
//	char arr2[] = {'a','b','c',};//���������\0���ת���ַ��൱��abc+δ֪������Ҫ���� �ַ�������Ϊ���ֵ
//
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	//��һ���ַ����ĳ���
//	int len = strlen("abc"); //strlen�Ǹ��ؼ����൱�� string length
//	printf("%d\n", len);//��ӡ�����������ַ���ɵ��ַ��� ��ΪĬ�ϴ��ڵ�\0���������������
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	return 0;
//}



//#include<stdio.h>;
//int main() {
	//printf("c:\test\test.c");//���Ƿ��������ӡ������û��t��  ��Ϊ\t�ᱻʶ��Ϊһ���ַ�����ĳ�����
	//printf("c:\\test\\test.c");  //���һ�����Դ�ӡ����ַ
	//printf("ab\ncd");   //\n�ǻ��е�ת���ַ�
	//printf("(areyouok??)");//��Щ��������������ģ���������ɡ��������������ʺ�Ҫ����\����

	//printf("%c\n", '\'');//����Ҫ��ӡһ��������Ҫ�õ�\���Ÿ��� ��ֹ�޷����嵥���ŵĽ�β
	//ע�� printf��ӡ��ʱ��Ҫָ����ʽ%d 100   %c 'a'    %s "abc"

	//printf("\a\a\a\a\a");// \a�Ǿ����ַ�����

	//   ����ת���ַ��ܽ�����
	/*\'���ڱ�ʾ�ַ�������
		\"���ڱ�ʾһ���ַ����ڲ���˫����
		\\���ڱ�ʾһ����б�ܣ���ֹ��������Ϊһ��ת�����з�
		\a�����ַ�.����
		\b�˸��
		\f��ֽ��
		\n���з�
		\r�س���
		\tˮƽ�Ʊ��
		\v��ֱ�Ʊ��
		\ddd ddd��ʾ1-3���˽��Ƶ����� ��\130
		\xdd dd��ʾ2��ʮ�����Ƶ����֡���\x30 0
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
//	//������ʽ���
//	int sum=ADD(num1, num2);
//	printf("%d", sum);
//
//	return 0;
//}