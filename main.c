#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

int f(int i) {             //计算阶层n!的实现（递归）
	if (i == 1 || i == 0)
		return 1;
	return i * f(i - 1);
}

int main(void)
{
	int f(int i);//声明计算阶层的函数f
	int i = 0; //i代表行数
	int j = 0;
	int x = 0;
	int n = 7;//n表示打印的行数
	for (i ; i < n; i++) {
		for (j = 0; j <= i; j++) {
			x = f(i) / (f(i - j)*f(j));//二项式定理展开求系数公式
			printf("%d ", x);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}