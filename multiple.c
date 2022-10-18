#include <stdio.h>

int multiple(int n) 	
{
    if (n == 1) return 3;
	else return multiple(n - 1) + 3;
}

int main()
{
    int i;

    for (i = 1; i <= 33; i++)
    {
        printf("%d\n", multiple(i));
    }
}