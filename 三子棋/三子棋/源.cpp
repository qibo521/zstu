//#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	int year, month, day, total = 0;
//
//
//	int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//
//	while (scanf("%d%d%d", &year, &month, &day) != EOF)
//	{
//		printf("%d-%d-%d\n", year, month, day);
//		for (int i = 1; i <= month - 1; i++)
//		{
//			total += a[i];
//		}
//		total += day;
//		if (month > 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
//		{
//			total += 1;
//
//		}
//		printf("%d\n", total);
//		total = 0;
//	}
//
//	return 0;
//}
