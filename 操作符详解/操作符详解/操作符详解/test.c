#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main//                                             算术操作符+-*/%
//{
//	double a = 5 / 2.0;//商2余1
//	printf("%lf\n", a);
//
//}

//int main()//                                            移位操作符>> <<
//{
//	int a = -1;
//	int arr[] = { 1,2,3,4,5 };
//	//00000000000000000000000000010000
//	
//	//>>  右移操作符
//	//移动的是二进制位
//	int b= a << 1;
//	printf("%d", b);
//	//1.算术右移
//	//右边丢弃，左边补原符号位yes
//	//2.逻辑右移
//	//右边丢弃，左边补零
//
//}

//int main()//                                            位操作符& | ^
//{
//	//交换两个z字符
//	int a = 5, b = 10;
//	//char a = 'c', b = 'd';
//	//printf("before: a=%c b=%c\n", a, b);
//	printf("before: a=%d b=%d\n", a, b);
//	//1.临时变量
//	//int tmp = 0;
//	//tmp = a;
//	//a = b;
//	//b = tmp;
//	//printf("after : a=%c b=%c\n", a, b);
//	//printf("after : a=%d b=%d\n", a, b);
//	//2.加减法
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//printf("after : a=%2d b=%2d\n", a, b);
//	//3.异或
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("after : a=%2d b=%2d\n", a, b);
//	return 0;
//}


//int main()          //求一个整数存储在内存中的二进制中1的个数
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//
//
//	//1.方法一
//	//while (num != 0)
//	//{
//	//	if (num % 2 == 1)
//	//		count++;
//	//	num = num / 2;
//	//方法二
//	//for (int i = 0; i < 32; i++)
//	//{
//	//	if (1 == ((num >> i) & 1))
//	//		count++;
//	//}
//	//3.方法三
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//
//	printf("%d", count);
//	return 0;
//}

//int main()//                                               赋值操作符=
//{         //                                               复合赋值符+= -= *= /= %= >>= <<= &= |= ^=
//	a >>= 1;
//	a = a >> 1;
//}

//int main()//                                  只有一个操作数 单目操作符! - + & sizeof ~ -- ++ * (类型)
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
//	//printf("%d ", sizeof(s = (a + 5)));//2  //sizeof()括号里的表达式补真实运算
//	//printf("%d ", s);//0
//
//	int a = 0;
//	//~按（二进制）位取反
//	//00000000000000000000000000000000 补码 0
//	//11111111111111111111111111111111 补码 ~0
//	//10000000000000000000000000000001 原码
//	printf("%d",~a);//-1
//}
//

//int main()//                                                    ()强制类型转换
//{
//	int a = (int)3.14;//
//}

//                                                                关系操作符 > >= < <= != ==

//int main()    //                                                逻辑操作符 && ||
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
//	//i = a++ && ++b && d++;//               &&遇到0后面不看
//	i = a++ || ++b || d++;//2 2 3 4//        ||遇到1后面不看
//	printf("%d %d %d %d", a, b, c, d);//1 2 3 4
//
//}

//int main()//                                           三目操作符    条件操作符 exp1 ? exp2 : exp3      
//{                                                                  //1真表达2，1假表达3
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

//int main()//                                                   逗号表达式 ，
//{        //                                          整个表达式结果是最后一个表达式
//	int a = 1;
//	int b = 2;
//	int c = (a>b,a=b+10,a,b=a+1);//c=13
//}

//下标引用 函数调用 结构成员
//1.下标引用操作符：一的数组名+一个索引值       []
//int main()
//{
//	int a[10] = { 0 };
//	a[4] = 10;
//}
//2.函数调用操作符
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
//3.结构成员
//学生
//创建一个结构体类型-struct student
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
//	//使用struct student 这个类型 创建了一个学生对象s1 并初始化
//	struct student s1 = {"张三",20,"2022330300111"};
//	struct student* ps = &s1;
//
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	//结构体指针->成员名
//	/*printf("%s\n", ( * ps).name);
//	printf("%s\n", (*ps).age);*/
//	//printf("%s\n",s1.name);
//	//printf("%d\n", s1.age);
//	//printf("%s\n", s1.id);
//	//结构体变量.成员名
//	return 0;
//}

//int main()            //                                    隐式类型转换
                                                          //整型提升
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

int main()//                                                       算术转换
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










