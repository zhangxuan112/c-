//forѭ��

//#include<stdio.h>
//int main() {
//	for (int i = 0; i <= 10; i++) {//forѭ������������÷ֺŸ���	ѭ��������������ҿ�	
//		if (i == 5)
//			break;
//	
//			printf("%d", i);//��forѭ���ڸı�ѭ���������ܻ���ѭ��
//	}
//
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int i= 0;
//	int j = 0;
//	for (i = 0; i < 3; i++) {
//		for (j ; j < 3; j++) {//��ʱ3����Ϊ�ڶ��ο�ʼ����Ƕ�׵�forѭ�� j�������ϴε�ֵ
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
//	}//2��hehe
//
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int i, k;
//	for (i = 0, k = 0; k = 0; i++, k++) {//����0��ѭ��  ��Ϊ�ж����k=0�Ǹ�ֵ 0��ʾ��
//		k++;
//		}
//
//	return 0;
//}

//do whileѭ��  doѭ����䣻  while�����ʽ����
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







//��ϰ����n�Ľ׳�
// 
//����1��+2��+3!.....+10!
// 
//��һ�����������в��Ҿ����ĳ������n��
//��дint binsearch��int x��int v[]��int n�����ܣ���v[0]<=v[1]<=v[2]<=.....v[n-1]�������в���x

//��д���룬��ʾ����ַ��������ƶ������м���

//��дdiamagneticʵ�֣�ģ���û���½�龰������ֻ�ܵ�¼���Ρ���֮��ϣ�����������룬���������ȷ��
//����ʾ��¼�ɹ���������ξ�����������˳�����

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
//}����2
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
//����3
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
