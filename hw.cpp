//#include <stdio.h>
//int main()
//{
//	int a;
//	float b;
//	a = 123.45;
//	b = 200;
//	printf("a의 값 ==> %d\n", a);
//	printf("b의 값 ==> %f\n", b);
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
//	printf("a, b의 값 ==> %d, %d\n", a, b);
//	printf("c, d의 값 ==> %5.1f, %5.1f\n", c, d);
//}

//#include <stdio.h>
//int main()
//{
//	int a, b, c, d;
//	a = 100 + 100;
//	b = a + 100;
//	c = a + b - 100;
//	d = a + b + c;
//	printf("a, b, c, d 의 값 ==> %d, %d, %d, %d\n", a, b, c, d);
//	a = b = c = d = 100;
//	printf("a, b, c, d 의 값 ==> %d, %d, %d, %d\n", a, b, c, d);
//	a = 100;
//	a = a + 200;
//	printf("a 의 값 ==> %d\n", a);
//}
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	int result;
//	char k;
//
//	printf("첫 번째 계산할 값 ==> ");
//	scanf("%d", &a);
//	printf("+ - * / % ==> ");
//	scanf(" %c", &k);
//	printf("두 번째 계산할 겂 ==> ");
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
//	printf("\n줄 바꿈\n연습 \n");
//	printf("\t탭키\t연습 \n");
//	printf("이것을\r덮어씁니다 \n");
//	printf("\a\a\a삐소리 3번 \n");
//	printf("글자가 \"강조\"되는 효과 \n");
//	printf("\\\\\\ 역슬래시 세 개 출력 \n");
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
//		printf("100보다 작군요..\n");
//		printf("거짓이므로 앞의 문장은 안 보이겠죠?\n");
//	}
//	printf("프로그램 끝!\n");
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int a;
//	printf("정수를 입력하세요 ==>");
//	scanf("%d", &a);
//	if (a % 2 == 0)
//	{
//		printf("짝수를 입력했군요..\n");
//	}
//	else
//	{
//		printf("홀수를 입력했군요..\n");
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
//			printf("50보다 크고 100보다 작군요..\n");
//		}
//		else
//		{
//			printf("와~~ 100보다 크군요..\n");
//		}
//	}
//	else
//	{
//		printf("에게~~ 50보다 작군요..\n");
//	}
//}