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
//			printf("�ҵ��±�Ϊ%d\n��ֵΪ", kxia);
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
//		Sleep(100);//˯��2����
//		system("cls");//�����Ļ
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
//		printf("����������\n");
//		scanf("%s", mima);//���ﲻ��Ҫ&��Ϊ���鱾�����ǵ�ַ
//		if (strcmp(mima  ,"123") == 0) {//�����ַ����Ƚ���strcmp���� ��ͬʱ����ֵΪ0
//			//���mima==��123���Ƚϵ��ǵ�ַ û������
//			printf("������ȷ\n"); break;
//		}
//		else {
//			printf("������ȷ����������\n");
//		};
//	};
//	if (i == 3) {
//		printf("����ȫ��\n�˳�");
//	}
//	return 0;
//}
//дһ����������Ϸ  �Զ�����һ��1-100������
//�¶�����Ϸ���� �´��˻���ߴ�С  ֱ���¶�
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
//	//1.���������
//	 
//	int ret = rand()%100+1;//rand ��һ���޲η���int�ĺ��� ������һ��0-32767�����ֵ���ͬ���ÿ�ζ���һ����
//	                       //��rand����ܴ�������ȡģ100 �� retһ����0-99
//	printf("%d\n", ret);
//	//2.������
//	int guess = 0;
//	while (1) {
//		printf("������֣���\n");
//		scanf_s("%d", &guess);
//		if (guess < ret) {
//			printf("��С��\n");
//		}
//		else if (guess > ret) {
//			printf("�´���\n");
//		}
//		else{
//			printf("�¶���\n");
//			break;
//		}
//	}
//}
//int main() {
//	int input = 0;
//	srand((unsigned int)time(NULL));//��ʱ�������ʼ������srand��unsigned int seed��
//	do {
//		menu();//��ӡ�˵�
//			printf("��ѡ�񣺡�");
//			scanf_s("%d", &input);
//			switch (input) {
//			case 1:
//				printf("������\n");
//				game();
//				break;
//			case 0:
//				printf("�˳���Ϸ\n");
//				break;
//			default:
//				printf("ѡ���������ѡ��\n");
//				break;
//			}
//			
//	} while (input);
//
//	return 0;
//}
//����һ��
//void menu() {
//	printf("��ѡ��0/1\n");
//
//}
//void game() {
//	int input = 0;
//	int ret = rand() % 100 + 1;
//	printf("%d\n", ret);	
//	while (1) {
//		scanf_s("%d", &input);
//		if (input > ret) {
//			printf("�´���\n");
//		}
//		else if (input < ret) {
//			printf("��С��\n");
//		}
//		else {
//			printf("�¶���\n");
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
//			printf("��Ϸ��ʼ\n");
//			game();
//			break;
//		case 0:
//			printf("��Ϸ����\n");
//			break;
//		default:
//			printf("������ѡ��\n");
//			break;
//		}
//
//
//
//	} while (i);
//	return 0;
//}
//д���뽫���������Ӵ�С���

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
//��ӡ1-100֮��3�ı���������
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
//������������ �����������ֵ����Լ��
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
//			printf("���Լ����%d",max);
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
//��ӡ1000-2000�������
//#include<stdio.h>
//int main() {
//	int i = 0;
//	for (i = 1000; i <= 2000; i = i + 4) {
//		printf("%d\n", i);
//	}
//
//	return 0;
//}

//��ӡ100-200֮�������