#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int hello(int argc, char** argv) {
	printf("hello, word!\n");
	printf("%s\n", "hello, word!");
	printf("%s %s\n", "hello,","1234");
} 

int main()
{
	int num1; // 정수형 변수 선언
	int num2;
	int num3;
	
	num1 = 10;
	num2 = 20;
	num3 = 30;
	
	printf("%d %d %d\n", num1, num2, num3); // 10 20 30: 변수에 저장된 값을 %d로 출력 
	
	return 0;
}

int main2()
{
	int num1, num2, num3; // 변수를 콤마로 구분하여 변수 여러 개를 선언
	
	num1 = 10;
	num2 = 20;
	num3 = 30;
	
	printf("%d %d %d\n", num1, num2, num3); // 10 20 30: 변수에 저장된 값을 %d로 출력
	return 0;
 }
 
 int main3()
 {
 	int num1 = 10;
 	int num2 = 20, num3 = 30;
 	
 	printf("%d %d %d\n", num1, num2, num3); // 10 20 30: 변수에 저장된 값을 %d로 출력
	return 0;
 }

