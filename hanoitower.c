#include <stdio.h>
#include <stdlib.h>
long double count = 0;
void move(int n, char a, char b, char c)
{
	if (n == 1)
	{
		printf("%c->%c\n", a, c);
		count++;
	}
	else
	{
		move(n - 1, a, c, b);
		printf("%c->%c\n", a, c);
		count++;
		move(n - 1, b, a, c);
	}
}

int main()
{
	int n;
	count = 0;
	printf("输入阶数：");
	scanf_s("%d", &n);
	move(n, 'a', 'b', 'c');
	printf("一共%.0Lf步\n",count);
	system("pause");
	return 0;
}