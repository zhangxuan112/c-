//��֧���switch
//switch�����α��ʽ��{�����}��
//#include<stdio.h>
//int main() {
//	
//	int day = 2;
//	scanf_s("%d",&day);
//	switch (day) {//()�����γ������ʽ
//
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("������\n");
//		break;
//	case 3:
//		printf("������\n");
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
//	switch (day) {//switch����Ƕ��ʹ��
//
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��");//�� break�����Ŀ���Ի���λ��
//		break;
//	default:
//		printf("�������");
//		break;
//			}
//	return 0;
//}


//ѭ���ṹ  while for  do while

//#include<stdio.h>
//int main() {
//	int i = 0;
//	while (i <= 10) {
//
//		if (i == 1)
//		{continue;
//	}//	break;//��whileѭ���У�break�������õ���ֹѭ�� continue������������ѭ���ٴ��ж�
//		printf("%d\n", i);
//		++i;
//	}
//
//	return 0;
//}

//gettchar �Ӽ��̻�ȡһ���ַ�  putchar ���һ���ַ�
//EOF end of file�ļ�������־
//CTRL+Z =getchar  ��ȡ����
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
//	printf("��������\n");
//	scanf_s("%s", password,20);
//	printf("ȷ������Y/N\n");
//	//��������
//	//getchar();//����scanf�����\n
//	int tmp = 0;
//	while ((tmp=getchar())!='\n') {//whiile����������������ַ�
//		
//			}
//	int ch = getchar();//�ַ���ascn��ֵ�洢�� ���Կ��Զ���Ϊint
//	if (ch == 'Y') {
//		printf("ȷ�ϳɹ�");
//	}
//	else {
//		printf("ȷ��ʧ��\n");
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

//forѭ��   �ѳ�ʼ�����жϡ�����������һ��
//for�����ʽ1�����ʽ2�����ʽ3��ѭ����䣻1�ǳ�ʼ�� 2���ж� 3�ǵ���

//#include<stdio.h>
//int main() {
//	int i = 1;//��ʼ��
//	while (i <= 10) {//�ж�
//
//		printf("%d ", i);//ִ��   
//		i++;//����
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