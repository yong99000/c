//#include <stdio.h>
//int main()
//{
//	printf("�ȳ��ϼ���\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("�ȳ��ϼ���");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("�ȳ��ϼ���\n�ȳ��ϼ���\n�ȳ��ϼ���\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("�ȳ��ϼ���\n");
//	printf("�ȳ��ϼ���");
//	printf("�ȳ��ϼ���\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("��� 1��\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 1;
//	printf("��� %d��\n", apple);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("Ű���� 3��\n");
//	printf("���콺 2��\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int keyboard = 3;
//	int mouse = 2;
//	printf("Ű����: %d��\n", keyboard);
//	printf("���콺: %d��\n", mouse);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int coin1 = 500;
//	int coin2 = 1000;
//	printf("%d + %d = %d\n",
//		coin1, coin2, coin1 + coin2);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char A;
//	A = 'A';
//	printf("A = %c, A = %d\n", A, A);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	double pi;
//	pi = 3.14;
//	float e = 2.718;
//	printf("pi = %.2lf, e = %.3f.. \n", pi, e);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	double pi;
//	pi = 3.14;
//	char r;
//	r = 5;
//	float area ;
//	area = pi * r * r;
//	float cir;
//	cir = pi * r * 2;
//	printf("area = %f", area);
//	printf("cir = %f", cir);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char b;
//	b = 3;
//	char t;
//	t = 5;
//	char h;
//	h = 7;
//	char area;
//	area = (b + t) * h / 2;
//	printf("area = %d", area);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int k;
//	printf("���ϴ� ���ڸ� �Է� : ");
//	scanf("%d", &k); //vs: scanf_s
//	printf("�Է��� ���ڴ� : %d\n", k);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int y, x;
//	printf("���ϰ� ���� �� 2�� �Է� : ");
//	scanf("%d %d", &y, &x); //scanf_s
//	printf("�� ���� ���� %d �Դϴ�.\n", y + x);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char a, b, c;
//	printf("���� �� �� �Է� : ");
//	scanf("%c%c%c", &a, &b, &c);
//	printf("������� : %c%c%c\n", a, b, c);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int r;
//	printf("�������� �Է� : ");
//	scanf("%d", &r);
//	double pi;
//	pi = 3.14;
//	float area;
//	area = r * r * pi;
//	float cir;
//	cir = r * 2 * pi;
//	printf("���� ���̴� %f�Դϴ�.\n", area);
//	printf("���� �ѷ��� %f�Դϴ�.\n", cir);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int W1, W2, H;
//	printf("�غ��� ����, ������ ����, ���̸� ������� �Է� : ");
//	scanf("%d %d %d", &W1, &W2, &H);
//	float area;
//	area = (W1 + W2) * H / 2.0;
//	printf("��ٸ����� ���̴� %f�Դϴ�.\n", area);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 15;
//	int b = 3;
	//printf("%d + %d = %d\n", a, b, a + b);
	//printf("%d - %d = %d\n", a, b, a - b);
	//printf("%d * %d = %d\n", a, b, a * b);
	//printf("%d / %d = %d\n", a, b, a / b);
	//printf("%d %% %d = %d\n", a, b, a % b);
	//return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number = 1;
//	number = number + 3;
//	printf("%2d\n", number);
//	number -= 2;
//	printf("%2d\n", number);
//	number--;
//	printf("%2d\n", number);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", a++);
//	printf("%d\n", a);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", ++a);
//	printf("%d\n", a);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	printf("���� �� ���� �Է� : ");
//	scanf("%d %d", &a, &b);
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);
//	return 0;
//}