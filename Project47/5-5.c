//��1 2 3 4�����֣���ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
//#include<stdio.h>
//int main()
//{
//	int x, y, z;
//	int sum = 0;
//	for (x = 1; x < 5; x++)
//	{
//		for (y = 1; y < 5; y++)
//		{
//			for (z = 1; z < 5; z++)
//			{
//				if (x != y && y != z && x != z)
//				{
//
//					printf("%d%d%d  ", x, y, z);
//					sum++;
//					printf("%d\n", sum);
//				}
//			}
//	
//		}
//	}
//	return 0;
//}
//һ����������100����һ����ȫƽ�������ټ���168����һ����ȫƽ����
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	long long a = 0;
//	long long x, y;
//	for (a = 1; a < 10000; a++)
//	{
//		x = sqrt(a + 100);
//		y = sqrt(a + 268);
//		if (x * x == a + 100 && y * y == a + 268)
//		{
//			printf("%d\n", a);
//		}
//	}
//
//	return 0;
//}
//����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
////����������������·ݴ���3ʱ��Ҫ���Ƕ��һ��
//#include<stdio.h>
//int main()
//{
//	int day, month, year, sum, leap;
//	scanf("%d %d %d", &year, &month, &day);
//	switch (month)
//	{
//	case 1:sum = 0;
//		break;
//	case 2:sum = 31;
//		break;
//	case 3:sum = 59;
//		break;
//	case 4:sum = 90;
//		break;
//	case 5:sum =120;
//		break;
//	case 6:sum =151;
//		break;
//	case 7:sum =181;
//		break;
//	case 8:sum = 212;
//		break;
//	case 9:sum = 243;
//		break;
//	case 10:sum = 273;
//		break;
//	case 11:sum = 304;
//		break;
//	case 12:sum = 334;
//		break;
//	default:printf("data error");
//		break;
//	}
//	sum = sum + day;
//	if ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))
//		leap = 1;
//	else
//	{
//		leap = 0;
//	}
//	if (leap == 1 && month > 2)
//		sum++;
//	printf("it is the %dth day", sum);
//	return 0;
//}
//����������������С������������
//#include<stdio.h>
//int main()
//{
//	int a, b, c, t;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a > c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b > c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
////yo��**�����ĸc��ͼ��
//#include<stdio.h>
//int main()
//{
//	printf("hello C world\n");
//	printf("****\n");
//	printf("*\n");
//	printf("*\n");
//	printf("****\n");
//	return 0;
//}
