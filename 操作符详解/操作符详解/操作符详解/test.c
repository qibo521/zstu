#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main//                                             ����������+-*/%
//{
//	double a = 5 / 2.0;//��2��1
//	printf("%lf\n", a);
//
//}

//int main()//                                            ��λ������>> <<
//{
//	int a = -1;
//	int arr[] = { 1,2,3,4,5 };
//	//00000000000000000000000000010000
//	
//	//>>  ���Ʋ�����
//	//�ƶ����Ƕ�����λ
//	int b= a << 1;
//	printf("%d", b);
//	//1.��������
//	//�ұ߶�������߲�ԭ����λyes
//	//2.�߼�����
//	//�ұ߶�������߲���
//
//}

//int main()//                                            λ������& | ^
//{
//	//��������z�ַ�
//	int a = 5, b = 10;
//	//char a = 'c', b = 'd';
//	//printf("before: a=%c b=%c\n", a, b);
//	printf("before: a=%d b=%d\n", a, b);
//	//1.��ʱ����
//	//int tmp = 0;
//	//tmp = a;
//	//a = b;
//	//b = tmp;
//	//printf("after : a=%c b=%c\n", a, b);
//	//printf("after : a=%d b=%d\n", a, b);
//	//2.�Ӽ���
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//printf("after : a=%2d b=%2d\n", a, b);
//	//3.���
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("after : a=%2d b=%2d\n", a, b);
//	return 0;
//}


//int main()          //��һ�������洢���ڴ��еĶ�������1�ĸ���
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//
//
//	//1.����һ
//	//while (num != 0)
//	//{
//	//	if (num % 2 == 1)
//	//		count++;
//	//	num = num / 2;
//	//������
//	//for (int i = 0; i < 32; i++)
//	//{
//	//	if (1 == ((num >> i) & 1))
//	//		count++;
//	//}
//	//3.������
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//
//	printf("%d", count);
//	return 0;
//}

//int main()//                                               ��ֵ������=
//{         //                                               ���ϸ�ֵ��+= -= *= /= %= >>= <<= &= |= ^=
//	a >>= 1;
//	a = a >> 1;
//}

//int main()//                                  ֻ��һ�������� ��Ŀ������! - + & sizeof ~ -- ++ * (����)
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;//a=20;
//	printf("%d", a);
//
//
//}

//int main()                                                                     sizeof
//{
//	int a = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	//
//	printf("%d ", sizeof(a));//4
//  printf("%d ", sizeof(int));//4
//	printf("%d ", sizeof(c));//1
//  printf("%d ", sizeof(char));//1
//	printf("%d ", sizeof(p));//4
//  printf("%d ", sizeof(char*));//4
//	printf("%d ", sizeof(arr));//40
//  printf("%d ", sizeof(int [10]));//40
//
//	return 0;
//}

//int main()
//{
//	//short s = 0;
//	//int a = 10;
//	//printf("%d ", sizeof(s = (a + 5)));//2  //sizeof()������ı��ʽ����ʵ����
//	//printf("%d ", s);//0
//
//	int a = 0;
//	//~���������ƣ�λȡ��
//	//00000000000000000000000000000000 ���� 0
//	//11111111111111111111111111111111 ���� ~0
//	//10000000000000000000000000000001 ԭ��
//	printf("%d",~a);//-1
//}
//

//int main()//                                                    ()ǿ������ת��
//{
//	int a = (int)3.14;//
//}

//                                                                ��ϵ������ > >= < <= != ==

//int main()    //                                                �߼������� && ||
//{
//	int a = 0;
//	int b = 5;
//	//int c = a && b;
//	int c = a || b;
//	printf("%d", c);
//}

//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;//               &&����0���治��
//	i = a++ || ++b || d++;//2 2 3 4//        ||����1���治��
//	printf("%d %d %d %d", a, b, c, d);//1 2 3 4
//
//}

//int main()//                                           ��Ŀ������    ���������� exp1 ? exp2 : exp3      
//{                                                                  //1����2��1�ٱ��3
//	//int a=0, b=0;
//
//	//if (a > 5)
//	//	b = 3;
//	//else
//	//	b = -3;
//
//	//b = (a > 5 ? 3 : -3);
//	//printf("%d", b);
//
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	if (a > b)
//		max = a;
//	else
//		max = b;
//
//	max = (a > b ? a : b);
//
//
//}

//int main()//                                                   ���ű��ʽ ��
//{        //                                          �������ʽ��������һ�����ʽ
//	int a = 1;
//	int b = 2;
//	int c = (a>b,a=b+10,a,b=a+1);//c=13
//}

//�±����� �������� �ṹ��Ա
//1.�±����ò�������һ��������+һ������ֵ       []
//int main()
//{
//	int a[10] = { 0 };
//	a[4] = 10;
//}
//2.�������ò�����
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("%d", max);
//}
//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//3.�ṹ��Ա
//ѧ��
//����һ���ṹ������-struct student
//struct student
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	//ʹ��struct student ������� ������һ��ѧ������s1 ����ʼ��
//	struct student s1 = {"����",20,"2022330300111"};
//	struct student* ps = &s1;
//
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	//�ṹ��ָ��->��Ա��
//	/*printf("%s\n", ( * ps).name);
//	printf("%s\n", (*ps).age);*/
//	//printf("%s\n",s1.name);
//	//printf("%d\n", s1.age);
//	//printf("%s\n", s1.id);
//	//�ṹ�����.��Ա��
//	return 0;
//}

//int main()            //                                    ��ʽ����ת��
                                                          //��������
//{
	//char a=3;//sizeof(char)==1
	//00000011
	//char b = 127;
	//01111111
	//char c = a + b;
	//10000010
	//printf("%d", c);

//	char c = 1;
//	printf("%u", sizeof(c));//1
//	printf("%u", sizeof(+c));//4
//	printf("%u", sizeof(!c));//1
//}

int main()//                                                       ����ת��
{
	//long double 
	//double
	//float
	//unsigned long int
	//long int 
	//unsigned int
	//int

	int i = 0;
	int a = (++i) + (++i) + (++i);
	printf("%d", a);


}










