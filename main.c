#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

int f(int i) {             //����ײ�n!��ʵ�֣��ݹ飩
	if (i == 1 || i == 0)
		return 1;
	return i * f(i - 1);
}

int main(void)
{
	int f(int i);//��������ײ�ĺ���f
	int i = 0; //i��������
	int j = 0;
	int x = 0;
	int n = 7;//n��ʾ��ӡ������
	for (i ; i < n; i++) {
		for (j = 0; j <= i; j++) {
			x = f(i) / (f(i - j)*f(j));//����ʽ����չ����ϵ����ʽ
			printf("%d ", x);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}