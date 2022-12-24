#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	char arr[8000];//CCHNCHN
//	scanf("%s", arr);
//	char* p = arr;
//	long long c = 0;
//	long long ch = 0;//c的次数决定ch的次数，但不是简简单单的将c的次数赋值给ch
//	long long chn = 0;//ch的次数又决定了chn的次数；
//	while (*p)//第三个c很关键，从开始到现在有3个c了然后再遇到H就组成了3个CH但不要忘记前面两个C组成的CH所以需要
//	{//把前面的加起来。
//		if (*p == 'C')
//		{
//			c++;
//		}
//		else if (*p == 'H')
//		{
//			ch = ch + c;
//		}
//		else if (*p == 'N')
//		{
//			chn = chn + ch;
//		}
//		p++;
//	}
//	printf("%lld", chn);
//	return 0;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int i = 1;//i从1开始不能从0开始
//	while ((i * a) % b != 0)
//	{
//		i++;//i*a 如果能取模b==0那么i*a肯定是a,b,的公倍数，因为i从小到达递增，
//		//所以一开始的i就是最小公倍数；
//	}
//	printf("%d", i * a);
//	return 0;
//}
//int main()
//{
//	int a, b, c;
//	scanf("%d%d", &a, &b);
//	int a1 = a;
//	int b1 = b;
//	while (c = a % b)//根据辗转相除法求最大公约数。
//	{  
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	//最后b是最大公约数。注意！这里a b 的值已经变化，不能再使用了，所以
//	//上面需要重新赋值给新的变量。
//	printf("%d", a1*b1 / b);
//	return 0;
//
//}
//试处法
//int is_prime(int n)
//{
//	int j;
//	for (j = 2;j <= n - 1;j++)
//	{
//		if (n % j ==0 )
//		{
//			return 0;
//		}
//	}
//	return 1;//能走到这里的一定是素数了
//}
//int main()
//{
//	int count = 0;
//	int i;
//	for (i = 100;i <= 999;i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}KiKi去重整数并排序
int main()
{
	int n;
	scanf("%d", &n);
	int arr[1000] = { 0 };
	//1.输入数据
	int i;
	for (i = 0;i < n;i++)
	{
		scanf("%d", &arr[i]);
	}
	//2.排序---最简单的冒泡排序
	for (i = 0;i < n - 1;i++)
	{
		int j;
		for (j = 0;j < n - 1 - i;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	//3.去重---两两比较，相同往前覆盖。
	for (i = 0;i<n;i++)
	{
		if (arr[i] == arr[i + 1])
		{
			int k;
			for (k = i;k<n-1;k++)
			{
				arr[k] = arr[k + 1];
			}
			n--;
			i--;
		}
	}
	//4.打印
	for (i = 0;i < n;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}