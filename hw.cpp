//#include <stdio.h>
//int main()
//{
//	int a;
//	float b;
//	a = 123.45;
//	b = 200;
//	printf("a�� �� ==> %d\n", a);
//	printf("b�� �� ==> %f\n", b);
//}

//#include <stdio.h>
//int main()
//{
//	int a, b;
//	float c, d;
//	a = 100;
//	b = a;
//	c = 111.1f;
//	d = c;
//	printf("a, b�� �� ==> %d, %d\n", a, b);
//	printf("c, d�� �� ==> %5.1f, %5.1f\n", c, d);
//}

//#include <stdio.h>
//int main()
//{
//	int a, b, c, d;
//	a = 100 + 100;
//	b = a + 100;
//	c = a + b - 100;
//	d = a + b + c;
//	printf("a, b, c, d �� �� ==> %d, %d, %d, %d\n", a, b, c, d);
//	a = b = c = d = 100;
//	printf("a, b, c, d �� �� ==> %d, %d, %d, %d\n", a, b, c, d);
//	a = 100;
//	a = a + 200;
//	printf("a �� �� ==> %d\n", a);
//}
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	int result;
//	char k;
//
//	printf("ù ��° ����� �� ==> ");
//	scanf("%d", &a);
//	printf("+ - * / % ==> ");
//	scanf(" %c", &k);
//	printf("�� ��° ����� �� ==> ");
//	scanf("%d", &b);
//
//	if (k == '+') {
//		result = a + b;
//		printf("%d + %d = %d\n", a, b, result);
//	}
//
//	if (k == '-') {
//		result = a - b;
//		printf("%d - %d = %d\n", a, b, result);
//	}
//}

//#include <stdio.h>
//int main()
//{
//	printf("%d\n", 123);
//	printf("%5d\n", 123);
//	printf("%05d\n", 123);
//
//	printf("%f\n", 123.45);
//	printf("%7.1f\n", 123.45);
//	printf("%7.3f\n", 123.45);
//
//	printf("%s\n", "Basic-C");
//	printf("%10s\n", "Basic-C");
//}

//#include<stdio.h>
//int main()
//{
//	printf("\n�� �ٲ�\n���� \n");
//	printf("\t��Ű\t���� \n");
//	printf("�̰���\r����ϴ� \n");
//	printf("\a\a\a�߼Ҹ� 3�� \n");
//	printf("���ڰ� \"����\"�Ǵ� ȿ�� \n");
//	printf("\\\\\\ �������� �� �� ��� \n");
//}
//#include <stdio.h>
//int main()
//{
//	printf("%d", 111+222);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 200;
//	if (a < 100)
//	{
//		printf("100���� �۱���..\n");
//		printf("�����̹Ƿ� ���� ������ �� ���̰���?\n");
//	}
//	printf("���α׷� ��!\n");
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int a;
//	printf("������ �Է��ϼ��� ==>");
//	scanf("%d", &a);
//	if (a % 2 == 0)
//	{
//		printf("¦���� �Է��߱���..\n");
//	}
//	else
//	{
//		printf("Ȧ���� �Է��߱���..\n");
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int a = 75;
//	if (a > 50)
//	{
//		if (a < 100)
//		{
//			printf("50���� ũ�� 100���� �۱���..\n");
//		}
//		else
//		{
//			printf("��~~ 100���� ũ����..\n");
//		}
//	}
//	else
//	{
//		printf("����~~ 50���� �۱���..\n");
//	}
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int a;
//	printf("1 ~ 4 �߿� �����ϼ��� : ");
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//		printf("1�� �����ߴ�.\n");
//		break;
//	case 2:
//		printf("2�� �����ߴ�.\n");
//		break;
//	case 3:
//		printf("3�� �����ߴ�.\n");
//		break;
//	case 4:
//		printf("4�� �����ߴ�.\n");
//		break;
//	default:
//		printf("1 ~ 4 �߿� �����ϼ���.\n");
//	}
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int year;
//	printf("������ �Է��ϼ��� : ");
//	scanf("%d", &year);
//
//	switch (year % 12)
//	{
//	case 0:
//		printf("�����̶�\n"); break;
//	case 1:
//		printf("�߶�\n"); break;
//	case 2:
//		printf("����\n"); break;
//	case 3:
//		printf("������\n"); break;
//	case 4:
//		printf("���\n"); break;
//	case 5:
//		printf("�Ҷ�\n"); break;
//	case 6:
//		printf("ȣ���̶�\n"); break;
//	case 7:
//		printf("�䳢��\n"); break;
//	case 8:
//		printf("���\n"); break;
//	case 9:
//		printf("���\n"); break;
//	case 10:
//		printf("����\n"); break;
//	case 11:
//		printf("���\n"); break;
//	}
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	char ch;
//	printf("A, B, C �߿� �ϳ��� ������ Enter�� �������� : ");
//	scanf("%c", &ch);
//	switch (ch)
//	{
//	case 'A':
//		printf("A�� �������ϴ�.\n"); break;
//	case 'a':
//		printf("a�� �������ϴ�.\n"); break;
//	case 'B':
//		printf("B�� �������ϴ�.\n"); break;
//	case 'b':
//		printf("b�� �������ϴ�.\n"); break;
//	case 'C':
//		printf("C�� �������ϴ�.\n"); break;
//	case 'c':
//		printf("c�� �������ϴ�.\n"); break;
//	default :
//		printf("�߸� �������ϴ�.\n");
//	}
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	char ch = 'Z';
//		if (ch == 'A')
//			printf("A ��� \n");
//		if (ch == 'B')
//			printf("B ��� \n");
//		if (ch == 'C')
//			printf("C ��� \n");
//		else
//			printf("�� \n");
//}