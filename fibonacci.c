#include <stdio.h>
 
int fibonacci(int num)
{
    if (num<=0)
        return 0;
    else if (num == 1)
        return 1;
    return fibonacci(num - 2) + fibonacci(num - 1);
}
 
int main()
{
    int input = 0;
    int i = 0;
    int answer;
    
    printf("몇 개월 후: ");
    scanf("%d", &input);
 
    for ( i = 0; i < input + 2; i++)
    {
        answer = fibonacci(i);
    }

    printf("%d 쌍\n", answer);

    puts("");
}
 