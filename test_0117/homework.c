#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////��1-100��9�ĸ���
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n9�ĸ����ǣ�%d", count);
//	return 0;
//}

//1-1/2+1/3-1/4+...-1/100
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i += 2)
//	{
//		sum += 1.0 / i;
//	}
//	for (i = 2; i <= 100; i += 2)
//	{
//		sum -= 1.0 / i;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//			sum += flag * 1.0 / i;
//			flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//�ҵ�һ��������������
//int main()
//{
//	int arr[] = {-1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	//int max = 0;
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}

//����Ļ�����9*9�˷��ھ���
int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		int j = 1;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);//%2d�������λ�������Ҷ��룩��%-2d������룩
		}
		printf("\n");
	}
	return 0;
}