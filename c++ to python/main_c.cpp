//c++����C��ʽ
#include<stdio.h>


extern "C" __declspec(dllexport) void fun_name()//������
{
	printf("11111\n");
}
//���ɿ���̨
// ����>>����ddl
//����>>���ɽ������>>dll�ŵ�python��