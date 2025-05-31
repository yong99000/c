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
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10+50;
//	printf("첫숫자 : %d\n", randInt);// 0 ~ 9
//	printf("다음숫자 : %d", nextInt);// 50 ~ 59
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("내 주머니에 있는 돈은");
//	int myMoney = (rand() % 10 + 1) * 1000;
//	printf("%d원이다.\n", myMoney);
//	int coin500 = rand() % 4 * 500;
//	int coin100 = rand() % 5000;
//	coin100 = coin100 / 100 * 100;
//	printf("그리고 과자의 가격은");
//	printf(" %d원이다.", coin500 + coin100);
//	printf("\n나는 과자를 살 수 있을까?");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple == 15)
//	{
//		printf("apple은 15개 있습니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 18;
//	if (apple != 17)
//	{
//		printf("apple은 17개가 아닙니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple > 7)
//	{
//		printf("apple은 7개보다 많습니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple < 20)
//	{
//		printf("apple은 20개보다 적습니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple)
//	{
//		printf("apple은 0개가 아닙니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 0;
//	if (!apple)
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 0;
//	if (apple == 10)
//	{
//		printf("apple은 10개 있습니다.\n");
//	}
//	else if (apple == 0)
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (!apple)
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	else
//	{
//		printf("apple은 0개가 아닙니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int k;
//	printf("숫자를 입력해주세요 : ");
//	scanf("%d", &k);
//	if (k > 0)
//	{
//		printf("k는 양수 입니다.\n");
//	}
//	else if (k == 0)
//	{
//		printf("k는 0 입니다.\n");
//	}
//	else
//	{
//		printf("k는 음수 입니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int k;
//	printf("숫자를 입력해주세요 : ");
//	scanf("%d", &k);
//	if (10 <= k && k <= 99)
//	{
//		printf("input은 두 자리 숫자입니다.\n");
//	}
//	else
//	{
//		printf("input은 두 자리 숫자가 아닙니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("키가 150 이상입니다.\n");
//	}
//	if (height > 160)
//	{
//		printf("키가 160 이상입니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("키가 150 이상입니다.\n");
//	}
//	else if (height > 160)
//	{
//		printf("키가 160 이상입니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int age;
//	printf("나이를 입력하세요 : ");
//	scanf("%d", &age);
//	if (age >= 15)
//	{
//		printf("전체 관람가, 12세 관람가, 15세 관람가");
//	}
//	else if (age >= 12)
//	{
//		printf("전체 관람가, 12세 관람가");
//	}
//	else
//	{
//		printf("전체관람가");
//	}
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	char ch;
//	printf("A, B, C 중에 하나를 누르고 Enter를 누르세요 : ");
//	scanf("%c", &ch);
//	switch (ch)
//	{
//	case 'A':
//	case 'a':
//		printf("A를 눌렀습니다.\n"); break;
//	case 'B':
//		printf("B를 눌렀습니다.\n"); break;
//	case 'b':
//		printf("b를 눌렀습니다.\n"); break;
//	case 'C':
//		printf("C를 눌렀습니다.\n"); break;
//	case 'c':
//		printf("c를 눌렀습니다.\n"); break;
//	default :
//		printf("잘못 눌렀습니다.\n");
//	}
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	char ch = 'Z';
//	printf("문자 입력 : ");
//	scanf("%c", &w);
//	if (w == 'A')
//		printf("A 출력\n");
//	else if (w == 'B')
//		printf("B 출력\n");
//	else if (w == 'C')
//		printf("C 출력\n");
//	else
//		printf("모름\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int num = 100;
//	if (num != 100)
//		printf("100 아니네요.\n");
//	    printf("아쉽네요.\n");
//
//	printf("프로그램을 종료\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char initial;
//	printf("문자 입력 : ");
//	scanf("%c", &initial);
//	if (initial >= 0x61 && initial <= 'z')
//		printf("소문자 입니다.\n");
//	else if (initial >= 'A' && initial <= 'Z')
//		printf("대문자 입니다.\n");
//	return 0;
//
//}
//#include <stdio.h>
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer)
//	printf("숫자1이 숫자2보다 큽니다.\n");
//	else
//	{
//		if (number < answer)
//			printf("숫자2가 숫자1보다 큽니다.\n");
//		else
//			printf("숫자1과 숫자2가 같습니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer)
//		printf("숫자1이 숫자2보다 큽니다.\n");
//	else if (number < answer)
//		printf("숫자2가 숫자1보다 큽니다.\n");
//	else
//		printf("숫자1과 숫자2는 같습니다.\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int score = 75;
//	if (score > 90)
//		printf("성적은 A등급 입니다.\n");
//	else if (score > 80)
//		printf("성적은 B등급 입니다.\n");
//	else if (score > 70)
//		printf("성적은 C등급 입니다.\n");
//	else if (score > 60)
//		printf("성적은 D등급 입니다.\n");
//	else
//		printf("성적은 F등급 입니다.\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number = -11;
//	if (number > 0)
//		printf("number는 양수입니다.\n");
//	else if (number < 0)
//		printf("number는 음수입니다.\n");
//	else
//		printf("number는 0입니다.\n");
//	if (number % 2 == 0)
//		printf("number는 짝수입니다.\n");
//	else
//		printf("number는 홀수입니다.\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char initial;
//	printf("문자 입력 : ");
//	scanf("%c", &initial);
//	if (initial == 'w')
//		printf("위 방향키를 입력하셨습니다.\n");
//	else if (initial == 'a')
//		printf("좌 방향키를 입력하셨습니다.\n");
//	else if (initial == 'd')
//		printf("우 방향키를 입력하셨습니다.\n");
//	else if (initial == 's')
//		printf("아래 방향키를 입력하셨습니다.\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int gauge;
//	printf("숫자를 입력 : ");
//	scanf("%d", &gauge);
//	if (gauge >= 45 && gauge <= 55)
//		printf("Perfect");
//	else if (gauge >= 35 && gauge <= 65)
//		printf("Excellent");
//	else
//		printf("good");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int input;
//	printf("숫자를 입력 : ");
//	scanf("%d", &input);
//	if (input % 3 == 0)
//	{
//		printf("input은 3의 배수입니다.\n");
//		if (input % 6 == 0)
//			printf("input은 6의 배수입니다.\n");
//	    if (input % 9 == 0)
//			printf("input은 9의 배수입니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char command = 'i';
//	switch (command)
//	{
//	case 'i': printf("아이템창 오픈\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char command = 'i';
//	switch (command)
//	{
//	case 'i' : printf("아이템창 오픈\n");
//	case 'm': printf("지도창 오픈\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char command = 'm';
//	switch (command)
//	{
//	case 'i': printf("아이템창 오픈\n");
//	case 'm': printf("지도창 오픈\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char command = 'm';
//	switch (command)
//	{
//	case 'i': printf("아이템창 오픈\n"); break;
//	case 'm': printf("지도창 오픈\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char command;
//	printf("커맨드를 입력하세요 : ");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case 'i': printf("아이템창 오픈\n"); break;
//	case 'm': printf("지도창 오픈\n"); break;
//	default: printf("지정된 기능이 없습니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char number = 1;
//	switch (number)
//	{
//	case 1: printf("one\n"); break;
//	case 2: printf("two\n"); break;
//	case 3: printf("three\n"); break;
//	}
//	return 0;
//}
//# include <stdio.h>
//int main()
//{
//	int input1, input2;
//	char oper;
//	int result;
//
//	printf("숫자를 입력 : ");
//	scanf("%d", &input1);
//	printf("추가 숫자 입력 : ");
//	scanf("%d", &input2);
//	printf("기호를 입력 : ");
//	scanf(" %c", &oper);
//
//	switch (oper)
//	{
//	case '+':
//		result = input1 + input2;
//		printf("%d\n", result); break;
//	case '-':
//		result = input1 - input2;
//		printf("%d\n", result); break;
//	case '*':
//		result = input1 * input2;
//		printf("%d\n", result); break;
//	case '/':
//		result = input1 / input2;
//		printf("%d\n", result); break;
//	case '%':
//		result = input1 % input2;
//		printf("%d\n", result); break;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int month;
//	printf("월을 입력 : ");
//	scanf("%d", &month);
//
//	switch (month)
//	{
//	case 1:
//		printf("1월 > January"); break;
//	case 2:
//		printf("2월 > February"); break;
//	case 3:
//		printf("3월 > March"); break;
//	case 4:
//		printf("4월 > April"); break;
//	case 5:
//		printf("5월 > May"); break;
//	case 6:
//		printf("6월 > June"); break;
//	case 7:
//		printf("7월 > July"); break;
//	case 8:
//		printf("8월 > August"); break;
//	case 9:
//		printf("9월 > September"); break;
//	case 10:
//		printf("10월 > October"); break;
//	case 11:
//		printf("11월 > November"); break;
//	case 12:
//		printf("12월 > December"); break;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char command;
//	printf("<, a 왼쪽 이동 \n");
//	printf(">, d 오른쪽 이동 \n");
//	scanf("%c", &command);
//	
//	switch (command)
//	{
//	case '<':
//	case 'a':
//		// case를 여러개 써서 같은 코드 실행 가능
//		printf("왼쪽으로 이동합니다.\n"); break;
//	case '>':
//	case 'd':
//		printf("오른쪽으로 이동합니다.\n"); break;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number;
//	const int option = 3;
//	printf("메뉴를 선택하세요");
//	printf("1.새 게임 2.이어하기 3.옵션\n");
//	scanf("%d", &number);
//
//	switch (number)
//	{
//	case 1:
//		printf("새 게임 시작.\n"); break;
//	case 2:
//		printf("세이브 테이터 로드.\n"); break;
//	case option:
//		printf("옵션 세팅.\n"); break;
//	default:
//		printf("지정된 기능이 없습니다.\n"); break;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number;
//	
//	printf("숫자를 입력 : ");
//	scanf("%d", &number);
//
//	switch (number)
//	{
//	case 3: case 6: case 9:
//		printf("짝"); break;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char command = 'x';
//
//	switch (command)
//	{
//	case 'x': printf("알파벳 x 입력.\n"); break;
//	case 'X': printf("엑스표 입력.\n"); break;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i_menu;
//	printf("1.더하기 2.빼기\n");
//	scanf("%d", &i_menu);
//	switch (i_menu)
//	{
//	case 1: 
//	{
//		int number1, number2;
//		{
//			printf("숫자 두 개를 입력하세요\n");
//			scanf("%d %d", &number1, &number2);
//			printf("%d+%d = %d\n", number1, number2, number1 + number2); break;
//		}
//	}
//	case 2:
//	{
//		int number3, number4;
//		{
//			printf("숫자 두 개를 입력하세요\n");
//			scanf("%d %d", &number3, &number4);
//			printf("%d-%d = %d\n", number3, number4, number3 - number4); break;
//		}
//	}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i_menu;
//	printf("1.더하기 2.빼기\n");
//	scanf("%d", &i_menu);
//	switch (i_menu)
//	{
//	case 1:
//	{
//		int number1, number2;
//		printf("숫자 두 개를 입력하세요\n");
//		scanf("%d %d", &number1, &number2);
//		printf("%d+%d = %d\n", number1, number2, number1 + number2); break;
//	}
//	case 2:
//	{
//		int number3, number4;
//
//		printf("숫자 두 개를 입력하세요\n");
//		scanf("%d %d", &number3, &number4);
//		printf("%d-%d = %d\n", number3, number4, number3 - number4); break;
//	}
//
//	}
//	return 0;
//	}
//}
//#include <stdio.h>
//int main()
//{
//	char command;
//
//	printf("w, a, s, d 입력 : ");
//	scanf("%c", &command);
//
//	switch (command)
//	{
//	case 'w':
//		printf("위 방향키를 입력하셨습니다.\n"); break;
//	case 'a':
//		printf("좌 방향키를 입력하셨습니다.\n"); break;
//	case 'd':
//		printf("우 방향키를 입력하셨습니다.\n"); break;
//	case 's':
//		printf("아래 방향키를 입력하셨습니다.\n"); break;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int Appetizer, MainDish, Dessert;
//
//	printf("Appetizer 1.캐비어, 2.샐러드, 3.푸아그라 중 선택 : ");
//	scanf("%d", &Appetizer);
//	printf("MainDish 1.스테이크, 2.생선요리, 3.양갈비 중 선택 : ");
//	scanf("%d", &MainDish);
//	printf("Dessert 1.케잌, 2.아이스크림, 3.초콜릿무스 중 선택 : ");
//	scanf("%d", &Dessert);
//	printf("주문한 음식은 ");
//	switch (Appetizer)
//	{
//	case 1:
//		printf("캐비어, "); break;
//	case 2:
//		printf("샐러드, "); break;
//	case 3:
//		printf("푸아그라, "); break;
//	}
//	switch (MainDish)
//	{
//	case 1:
//		printf("스테이크, "); break;
//	case 2:
//		printf("생선요리, "); break;
//	case 3:
//		printf("양갈비, "); break;
//    }
//	switch (Dessert)
//	{
//	case 1:
//		printf("케잌"); break;
//	case 2:
//		printf("아이스크림"); break;
//	case 3:
//		printf("초콜릿무스"); break;
//	}
//	pritnf(" 입니다.")
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	while (i < 100)
//	{
//		printf("%3d(%02x) ", i, i);
//		if (i >= 70 && i < 80) { i++; continue; }
//		if (i % 10 == 9) printf("\n");
//		if (i == 93) break;
//		i++;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	while (0)
//	{
//		printf("조건이 참일 경우 반복출력\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	while (1)
//	{
//		printf("조건이 참일 경우 반복출력\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int count = 0;
//	while (count < 3)
//	{
//		printf("현재 count : %d\n", count);
//		printf("count가 3보다 작은 동안 반복\n");
//		count++;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int count = 3;
//	while (count > 0)
//	{
//		printf("현재 count : %d\n", count);
//		printf("count가 0보다 큰 동안 반복\n");
//		count--;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	while (i < 6)
//	{
//		printf("c");
//		i++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int num = -10;
//	while (num <= 0)
//	{
//		printf("%d\n", num);
//		num++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	while (num <= 100)
//	{
//
//		if (num % 5 == 0)
//			printf("%d\n", num);
//		num++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int count = 3;
//	while (count)
//	{
//		if (count == 1)
//		{
//			break;
//		}
//		printf("현재 count : %d\n", count);
//		printf("count가 0이 아니면 반복\n");
//		count--;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char alphabet;
//	while (1)
//	{
//		printf("알파벳을 입력해주세요(다른 것 입력시 다시입력):");
//		scanf(" %c", &alphabet);
//		if (alphabet >= 'a' && alphabet <= 'z')
//		{
//			printf("소문자를 입력하셨습니다.\n");
//		}
//		else if (alphabet >= 'A' && alphabet <= 'Z')
//		{
//			printf("대문자를 입력하셨습니다.\n");
//		}
//		else
//		{
//			continue;
//		}
//		printf("입력한 겂 : %c\n", alphabet);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int number, total = 0;
//	while (1)
//	{
//		printf("양수를 입력해주세요(0입력시 종료);");
//		scanf("%d", &number);
//		if (number == 0) { break; }
//		else if (number < 0) { continue; }
//
//		total = total + number;
//		printf("%d\n", total);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int num = 1;
//	int total = 1;
//	while (1)
//	{
//		if (total >= 50000) { break; }
//		total = total * num;
//		num++;
//	}
//	printf("%d\n", total);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char alphabet = 'A';
//	while (alphabet <= 'Z')
//	{
//		if (alphabet == 'F')
//		{
//			alphabet++;
//			continue;
//		}
//		printf(" %c\n", alphabet);
//		alphabet++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int num;
//	int total = 0;
//	int player = 0;
//	while (1)
//	{
//		printf("%c : ",'A'+ player);
//		scanf("%d", &num);
//
//		if (num < 1 || num > 3)
//		{
//			printf("숫자는 1~3을 입력해주세요");
//			continue;
//		}
//
//		total += num;
//		printf("=> %d\n", total);
//
//		if (total >= 31)
//		{
//			break;
//		}
//		//player = !player;
//		player = ++player % 25;
//	}
//	printf("%c가 졌습니다.", 'A' + player);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int temperature = 20;
//	do
//	{
//		printf("현재 온도 : %d도\n", temperature);
//		temperature--;
//	} 
//	while (temperature > 28);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int input;
//	enum {GAMEOVER, NEWGAME, LOADGAME, OPTION};
//	do
//	{
//		printf("\n메뉴를 선택하세요.\n");
//		printf("1.새 게임 2.이어하기 3.옵션 (0:게임종료)\n");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case NEWGAME:
//			printf("새 게임 시작\n"); break;
//		case LOADGAME:
//			printf("세이브 데이터 로드\n"); break;
//		case OPTION:
//			printf("옵션 세팅\n"); break;
//		}
//	}
//	while(input != GAMEOVER);
//	printf("게임을 종료합니다.\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int select;
//	enum { LOGIN=1, SIGNIN, OPTION, MAKER };
//	do
//	{
//		printf("\n메뉴를 선택하세요.\n");
//		printf("1.로그인 2. 회원가입 3.옵션 4.만든 사람들");
//		scanf("%d", &select);
//
//			//if (select < 1 || select > 4)
//			//{
//			//	printf("프로그램을 종료합니다.\n");
//			//	continue;
//			//}
//
//			switch (select)
//			{
//			case LOGIN:
//				printf("아이디, 비밀먼호 입력\n"); break;
//			case SIGNIN:
//				printf("회원가입 진행\n"); break;
//			case OPTION:
//				printf("사용자 설정\n"); break;
//			case MAKER:
//				printf("제작자\n"); break;
//			}
//			
//	} while (select > 0 || select < 5);
//	return 0;
//}