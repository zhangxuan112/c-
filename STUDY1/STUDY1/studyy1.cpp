//#include <stdio.h>
//int main()
//{
//	char ch = 'A';
//	printf("%c\n", ch); //%cָ��ӡ�ַ���ʽ������
//	int age = 20;       //%f��ӡ���������� %p�Ե�ַ��ʽ��ӡ
//	printf("%d\n", age);//%dʮ��������
//	                    //short int������
//	                    //int ���� char�ַ���
//	                    //long ������
//	                    //���� 
//	long num = 100;
//	printf("%d\n", num);
//
//
//
//	printf("%d\n", sizeof(char));1//sizeof��һ�������� ���ڼ������ͻ��߱�����ռ�ռ�Ĵ�С00
//	printf("%d\n", sizeof(long)); //������4��8byte C���Ա�׼ֻ�ǹ涨sizeof��long��>=sizeof��int��
//	printf("%d\n", sizeof(float));4
//	printf("%d\n", sizeof(long long));8
//	printf("%d\n", sizeof(int));4
//	printf("%d\n", sizeof(short));2
//	printf("%d\n", sizeof(double));8
//	//����20
//	short age = 20;//���ڴ�Ҫ����byteҲ����16��bit�Ŀռ�洢20=age����ѶϢ
//	float weight = 94.6;//���ڴ�Ҫ4���ֽ�Ҳ����32��bit
//	
//	return 0;
//}



//#include<stdio.h>
//int num = 1000;//ȫ�ֱ��� �����ڣ�{}��֮��ı��� Ҳ����������{}��ֻ�����ȼ�����  �ֲ����ȹ���
//int main()
//{
//
//	int num = 100;//�ֲ����� ������{}����ı���  ��ʱ������������Ϊ{}
//	              //���ֱ���ȡ��������Ҫ�ظ� ��������ͬʱ �ֲ���������
//	              //������δ���100  ���Ҿֲ�����ֻ����{}����Ч
//	printf("%d\n", num);
//	return 0;
//}



////����2
//#include<stdio.h>
//int main() {//�������������ĺ͵ĳ���
//	
//	int num1 = 0;
//  int sum = 0;
//	int num2 = 1;//��Щ���ֿ�������
//	//C���Թ涨������Ҫ�����ڵ�ǰ��������ǰ��
////�������� ʹ�����뺯�� scanf
//	scanf_s("%d%d", &num1, &num2);//ȡ��ַ����&
//	
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}


//����3
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

//���Ҫʹ�������ļ��ı��� ������һ�� ����extern int g_val ��ʱmain�������Ե����������

//����4
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

