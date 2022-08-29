#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Fun(int n)
{
	if (n == 5)
		return 2;
	else
		return 2 * Fun(n + 1);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int m = Fun(n);
	printf("%d ", m);
	return 0;
}

				打印 乘法口诀表
void print_table(int input)
{
	int i = 1;
	for (i = 1; i < input + 1; i++)
	{
		int j = 1;
		
		for (j = 1; j < i + 1; j++)
		{
			int num = i * j;
			printf("%d*%d=%-3d ", i, j, i*j);
		}
		printf("\n");
	}
}
int main()
{
	int input = 0;
	scanf("%d", &input);
	print_table(input);
	return 0;
}

			递归打印一个整数的每一位
void print(int input)
{
	if (input < 10)
		printf("%d", input);
	else
	{
		printf("%d ", input % 10);
		print(input / 10);
	}
}
int main()
{
	int input = 0;
	scanf("%d", &input);
	print(input);
	return 0;
}

int main()
{
	char name[30];
	printf("what's your name?\n");
	scanf("%s", name);
	printf("hello,%s", name);
	return 0;
}

#include<string.h>

int my_strlen(char* arr)
{
	int count = 0;
	while (*arr != '\0')
	{
		count++;	//  计数器方法
		arr++;
	}
	return count;
}

void reverse_string1(char* arr)
{
	int left = 0;
	int right = strlen(arr) - 1;
	int right = my_strlen(arr) - 1;
	int tmp = 0;
	while (left < right)
	{
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

			倒叙修改某数组的内容，非简单打印
void reverse_string2(char* arr)
void reverse_string2(char arr[]) // 等价
{
	char tmp = arr[0];
	int len = my_strlen(arr);
	arr[0] = arr[len - 1];
	arr[len - 1] = '\0';
	if (my_strlen(arr+1) > 1)
	{
		reverse_string2(arr+1);
	}
	arr[len - 1] = tmp;
}
int main()
{
	char arr[] = "abcdefghig";
	reverse_string2(arr);
	printf("%s\n", arr);
	return 0;
}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d", &a, &b);
	c = a + b;
	printf("c=%d\n", c);
	getchar();
	return 0;
}

int DigitSum(unsigned int input)
{
	if (input > 9)
	{
		return DigitSum(input / 10 )+ input % 10;
	}
	else
		return input;
}
int main()
{
	unsigned int input = 0;
	scanf("%d", &input);
	int ret=DigitSum(input);
	printf("%d", ret);
	return 0;
}

			打印某个数的k次方
double Pow(int input, int k)
{
	int ret = 0;
	if (k < 0)
	{
		return(1.0 / (Pow(input, -k)));
	}
	else if (k >= 1)
	{
		return Pow(input,--k)*input;
	}
	else
	{
		return 1;
	}
	return ret;
}
int main()
{
	int input = 0;
	int k = 0;
	scanf("%d%d", &input,&k);
	double ret = Pow(input,k);
	printf("%lf", ret);
	return 0;
}