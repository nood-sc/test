#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�ڶ��ֳ��� const���εĳ�����
//int main()
//{
//	//������ const���Σ�����const int a=10��a��ֵ�̶���֮�󲻿ɸ��ġ� 
//	return 0;
//}
//�����ֳ���#define����ı�ʶ������������#define MAX 10000��֮�󲻿ɸ��ġ�

//ö�ٳ���--����һһ�оٵĳ���
//�Ա�
enum Sex
{
	MAKE,
	FAMALE,
	SECRET

};

int main()
{
	enum Sex s = FAMALE;
	return 0;
}