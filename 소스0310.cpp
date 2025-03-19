//#include <stdio.h>
//int main()
//{
//	printf("안녕하세요\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("안녕하세요");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("안녕하세요\n안녕하세요\n안녕하세요\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("안녕하세요\n");
//	printf("안녕하세요");
//	printf("안녕하세요\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("사과 1개\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 1;
//	printf("사과 %d개\n", apple);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("키보드 3개\n");
//	printf("마우스 2개\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int keyboard = 3;
//	int mouse = 2;
//	printf("키보드: %d개\n", keyboard);
//	printf("마우스: %d개\n", mouse);
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
//	printf("원하는 숫자를 입력 : ");
//	scanf("%d", &k); //vs: scanf_s
//	printf("입력한 숫자는 : %d\n", k);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int y, x;
//	printf("더하고 싶은 값 2개 입력 : ");
//	scanf("%d %d", &y, &x); //scanf_s
//	printf("두 값의 합은 %d 입니다.\n", y + x);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char a, b, c;
//	printf("문자 두 개 입력 : ");
//	scanf("%c%c%c", &a, &b, &c);
//	printf("문자출력 : %c%c%c\n", a, b, c);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int r;
//	printf("반지름을 입력 : ");
//	scanf("%d", &r);
//	double pi;
//	pi = 3.14;
//	float area;
//	area = r * r * pi;
//	float cir;
//	cir = r * 2 * pi;
//	printf("원의 넓이는 %f입니다.\n", area);
//	printf("원의 둘레는 %f입니다.\n", cir);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int W1, W2, H;
//	printf("밑변의 길이, 윗변의 길이, 높이를 순서대로 입력 : ");
//	scanf("%d %d %d", &W1, &W2, &H);
//	float area;
//	area = (W1 + W2) * H / 2.0;
//	printf("사다리꼴의 넓이는 %f입니다.\n", area);
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
//	printf("숫자 두 개를 입력 : ");
//	scanf("%d %d", &a, &b);
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	int result;
//	char k;
//
//	printf("첫 번째 계산할 값 ==> ");
//	scanf("%d", &a);
//	printf("+ - * / %% ==> ");
//	scanf(" %c", &k);
//	printf("두 번째 계산할 값 ==> ");
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
//
//	if (k == '*') {
//		result = a * b;
//		printf(" %d * %d = %d\n", a, b, result);
//	}
//
//	if (k == '/') {
//		if (b != 0) {
//			result = a / b;
//			printf(" %d / %d = %d\n", a, b, result);
//		} else
//			printf(" 0으로 나누면 안됩니다. \n");
//	}
//
//	if (k == '%') {
//		if (b != 0) {
//			result = a % b;
//			printf(" %d %% %d = %d\n", a, b, result);
//		}
//		else
//			printf(" 0으로 나누면 나머지값이 안됩니다. \n");
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
//	int first = 1 % 4;
//	printf("%d = 1%%4\n", first);
//	int second = 5 % 3;
//	printf("%d = 5%%3\n", second);
//	int third = 4 % 2;
//	printf("%d = 4%%2\n", third);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d = 1%%4\n", number1);
//	printf("%d = 5%%3\n", number2);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int first = 1 % 3;
//	printf("%d = 1%%3\n", first);
//	int second = 2 % 3;
//	printf("%d = 2%%3\n", second);
//	int third = 3 % 3;
//	printf("%d = 3%%3\n", third);
//	int fourth = 4 % 3;
//	printf("%d = 4%%3\n", fourth);
//	int fifth = 5 % 3;
//	printf("%d = 5%%3\n", fifth);
//	int sixth = 6 % 3;
//	printf("%d = 6%%3\n", sixth);
//	return 0;	
//}
//#include <stdio.h>
//int main()
//{
//	int k;
//	printf("숫자를 입력 : ");
//	scanf("%d", &k);
//	int b;
//	b = k % 50;
//	printf("50으로 나눈 나머지 : %d", b);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int data1 = 6 / 2;
//	printf("%d = 6/2\n", data1);
//	int data2 = 6 / 3;
//	printf("%d = 6/3\n", data2);
//	int data3 = 6 / 4;
//	printf("%d = 6/4\n", data3);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d=", number1/ number2);
//	printf("%d/%d\n", number1, number2);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int coin;
//	printf("돈을 입력해주세요.(원)");
//	scanf("%d", &coin);
//
//	int coin10000 = coin / 10000;
//	coin = coin % 10000;
//	int coin5000 = coin / 5000;
//	coin = coin % 5000;
//	int coin1000 = coin / 1000;
//	printf("만원권 %d개, ", coin10000);
//	printf("오천원권 %d개, ", coin5000);
//	printf("천원권 %d개, ", coin1000);
//	printf("나머지는 동전입니다.");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int price;
//	printf("젤리 가격을 입력 : ");
//	scanf("%d", &price);
//
//	int coin;
//	coin = 1000 - price;
//
//	int c500 = coin / 500;
//	coin = coin % 500;
//	int c100 = coin / 100;
//	coin = coin % 100;
//	int c50 = coin / 50;
//	coin = coin % 50;
//	int c10 = coin / 10;
//	coin = coin % 10;
//	printf("오백원 %d개, ", c500);
//	printf("백원 %d개, ", c100);
//	printf("오십원 %d개, ", c50);
//	printf("십원 %d개, ", c10);
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10;
//	printf("첫숫자 : %d\n", randInt);
//	printf("다음숫자 : %d", nextInt);
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand((unsigned int)time(null));
	int randInt = rand() % 10;
	int nextInt = rand() % 10;
	printf("첫숫자 : %d\n", randInt);
	printf("다음숫자 : %d", nextInt);
	return 0;
}