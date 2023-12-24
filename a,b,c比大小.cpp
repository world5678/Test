#include<stdio.h>
int main()
{
	int a, b, c, max;
		printf("ÇëÊäÈëa,b,c:\n");
		scanf_s("%d,%d,%d", &a, &b, &c);
		max = a;
		if (max <b)max = b;
		if (max < c)max = c;
		printf("×î´óÖµÎª£º %d\n", max);
return 0;
}
