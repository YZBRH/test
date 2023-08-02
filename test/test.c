#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 1;//变量初始化
//	scanf("%d", &a);//输入
//	while (b <= a)
//	{
//		if (b % 2 == 1)
//		{
//			printf("%d ", b);
//			b++;
//		}
//		else
//			b++;
//	}
//
//	return 0;
//}//奇数输出



//int min = 0;
//int max = 0;
//int a = 0;//数据初始化
//int main()
//{
//	printf("请输入两个年份>>");
//    scanf("%d %d", &min, &max);//输入部分
//	int a = min;
//	while (a <= max)
//		if (a % 4 == 0 && a % 100 != 0)
//		{
//			printf("普通闰年%d", a);
//			a++;
//		}
//		else 
//			a++;
//	while (a <= max)
//		if (a % 400 == 0)
//			printf("世纪闰年%d", a);
//
//
//	return 0;
//}//闰年输出




//int main()
//{
//	int a = 3;
//	int b = 2;
//	int c = 1;
//	int load = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		load = a;
//		a = b;
//		b = load;
//	}
//	if (a < c)
//	{
//		load = a;
//		a = c;
//		c = load;
//	}
//	if (b < c)
//	{
//		load = b;
//		b = c;
//		c = load;
//	}
//	printf("从大至小比较为>>%d %d %d", a, b, c);//输出
//
//
//	return 0;
//}//三个数比大小



//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int a = 0;
//	printf("请输入两个数>>");
//	scanf("%d %d", &num1, &num2);
//	a = num1;
//	while (a <= num2)
//	{
//		if (a % 3 == 0)
//			printf("%d ", a);
//		a++;
//	}
//
//	return 0;
//}//求3的倍数

//int main()
//{
//	int n = 3;
//	int r = 1;
//	int put = 1;
//	scanf("%d", &n);
//	for (r = 1; n >= r; r++)
//		put = put * r;
//	if (n <= 0)
//		printf("非法输入");
//	if (n < r && n > 0)
//		printf("%d", put);
//
//
//	return 0;
//}//求n的阶乘

//int main()
//{
//	int n = 0;
//	int r = 1;
//	int sum = 0;
//	int put = 1;
//	for (n = 1; n <= 10; n++)
//	{
//		put = 1;
//		for (r = 1; n >= r; r++)
//		{
//			put = put * r;
//		}
//		sum = sum + put;
//	}
//
//	printf("%d", sum);
//	return 0;
//}//1到10的阶乘相加


//int main()
//{
//	int a = 1;
//	int b = 1;
//	int i = 0;//行数控制
//	for (i = 1; i <= 9; i++)
//	{
//		for (b = 1; b <= i; b++)
//		{
//			printf("%dx%d=%2d ", a, b, a * b);
//		}
//		a++;
//		printf("\n");
//	}
//	return 0;
//}//九九乘法表



//int compare(a, b)
//{
//	if (a >= b)
//		return a;
//	else
//		return b;
//}//两数比较得出较大值
//
//int main()
//{
//	int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, put;
//	scanf("%d %d %d %d %d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10);
//	put = compare(num1, num2);
//	put = compare(put, num4);
//	put = compare(put, num5);
//	put = compare(put, num6);
//	put = compare(put, num7);
//	put = compare(put, num8);
//	put = compare(put, num9);
//	put = compare(put, num10);
//	printf("%d", put);
//
//	return 0;
//}//十个数比较出最大值


//int main()
//{
//	int min, max;
//	scanf("%d %d", &min, &max);
//	int a = min;//输出使用
//	int b = 2;//判断使用
//	int c = 0;
//	while (a <= max)
//	{
//		if (a <= 1)
//		{
//			a = 2;
//		}//排除min小于2时
//		while (a >= b)
//		{
//			if (a % b != 0 && a != b)
//			{
//				b++;
//				continue;
//			}
//			if (a != b)
//			{
//				break;
//			}
//			else
//			{
//				printf("%d ", a);
//				break;
//			}
//		}
//		a++;
//		b = 2;
//
//	}
//
//	return 0;
//}//求min~~max间的所有质数

//int main()
//{
//	int arr1[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//
//	int sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		sum = sum + arr1[i];
//	}
//
//	sum = sum / 10.0;
//	printf("%d", sum);
//	return 0;
//}//求10个数平均值



//int main() {
//	int n, m, i, p;
//	scanf("%d %d\n", &n, &m);
//	int arr[n][m];
//	for (i = 0; i < n; i++)
//	{
//		for (p = 0; p < m; p++)
//		{
//			scanf("%d", &arr[i][p]);
//		}
//	}
//
//	for (i = 0; i < m; i++)
//	{
//		for (p = 0; p < n; p++)
//		{
//			printf("%d ", arr[p][i]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}//矩阵转置(VS2019不支持)


//int main()
//{
//	int arrA[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arrB[10] = { 2,3,4,5,6,7,8,9,10,11};
//	int load = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		load = arrA[i];
//		arrA[i] = arrB[i];
//		arrB[i] = load;
//	}
//	printf("arrA = ");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arrA[i]);
//	}
//	printf("arrB = ");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arrB[i]);
//	}
//
//	return 0;
//}//数组交换



//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入两个数:>>");
//	scanf("%d %d", &a, &b);
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("最大公约数为:>>%d", b);
//	return 0;
//}//求两数的最大公约数


//#include <time.h>
//int main()
//{
//	time_t timep;
//	struct tm* p;
//	time(&timep);
//	p = localtime(&timep);
//	printf("year:%04d \nmonth:%02d \nday:%02d \nhour:%02d  \nminter:%02d \nsecond:%02d \nweekday:%d \ndays:%d \nisdst:%d", 1900 + p->tm_year, 1 + p->tm_mon, p->tm_mday, p->tm_hour, p->tm_min, p->tm_sec, p->tm_wday, p->tm_yday, p->tm_isdst);
//	return 0;
//}//系统时间


//int is_prime(int a)
//{
//	int b;
//	if (a == 2)
//	{
//		return 1;
//	}
//	for (int i = 2; i < a; i++)
//	{
//		if (a % i == 0)
//		{
//			b = i;
//			return 0;
//		}
//		return 1;
//	}
//}//判断是否为素数
//int main()
//{
//	for (int i = 100; i <= 200; i++)
//	{
//		int r = is_prime(i);
//		if (r == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}



//int leapYear(int a)
//{
//	if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int  main()
//{
//	int a = 0;
//	printf("输入年份:>>");
//	scanf("%d", &a);
//	int r = leapYear(a);
//	if (r == 1)
//		printf("是闰年\n");
//	else
//		printf("不是闰年\n");
//	return 0;
//}//判断闰年


//void init(int arr[10])
//{
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//	}
//}//数组初始化
//void print(int arr[10])
//{
//	for(int i = 0;i< 10;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}//打印数组元素
//void reverse(int arr[10])
//{
//	int arr1[10];
//	for (int i = 0; i < 10; i++)
//	{
//		arr1[i] = arr[9 - i];
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = arr1[i];
//	}
//}//数组倒序


//int main()
//{
//	int n = 0;
//	int i = 1;
//	int j = 1;
//	printf("想要多大乘法表？输入数字:>>");
//	scanf("%d", &n);
//	while(i <= n)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%dx%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//		i++;
//	}
//
//	return 0;
//}//任意数字乘法表