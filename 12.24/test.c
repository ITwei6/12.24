#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	char arr[8000];//CCHNCHN
//	scanf("%s", arr);
//	char* p = arr;
//	long long c = 0;
//	long long ch = 0;//c�Ĵ�������ch�Ĵ����������Ǽ�򵥵��Ľ�c�Ĵ�����ֵ��ch
//	long long chn = 0;//ch�Ĵ����־�����chn�Ĵ�����
//	while (*p)//������c�ܹؼ����ӿ�ʼ��������3��c��Ȼ��������H�������3��CH����Ҫ����ǰ������C��ɵ�CH������Ҫ
//	{//��ǰ��ļ�������
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
//	int i = 1;//i��1��ʼ���ܴ�0��ʼ
//	while ((i * a) % b != 0)
//	{
//		i++;//i*a �����ȡģb==0��ôi*a�϶���a,b,�Ĺ���������Ϊi��С���������
//		//����һ��ʼ��i������С��������
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
//	while (c = a % b)//����շת����������Լ����
//	{  
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	//���b�����Լ����ע�⣡����a b ��ֵ�Ѿ��仯��������ʹ���ˣ�����
//	//������Ҫ���¸�ֵ���µı�����
//	printf("%d", a1*b1 / b);
//	return 0;
//
//}
//�Դ���
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
//	return 1;//���ߵ������һ����������
//}
//int main()
//{
//	int count = 0;
//	int i;
//	for (i = 100;i <= 999;i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}KiKiȥ������������
int main()
{
	int n;
	scanf("%d", &n);
	int arr[1000] = { 0 };
	//1.��������
	int i;
	for (i = 0;i < n;i++)
	{
		scanf("%d", &arr[i]);
	}
	//2.����---��򵥵�ð������
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
	//3.ȥ��---�����Ƚϣ���ͬ��ǰ���ǡ�
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
	//4.��ӡ
	for (i = 0;i < n;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}