#include<stdio.h>

int cnt = 0;

void hanoi_tower(int n, char from, char tmp, char to)
{
    if (n == 1){ printf("원판 1을 %c에서 %c으로 옮긴다.\n", from, to); cnt += 1;}
    
    else {
        hanoi_tower(n - 1, from, to, tmp); 
        printf("원판 %d를 %c에서 %c으로 옮긴다.\n", n, from, to); cnt += 1;
        hanoi_tower(n - 1, tmp, from, to); 
    }
}

int main(void)
{
    hanoi_tower(5, 'A', 'B', 'C');
    printf("%d 번\n", cnt);
    return 0;
}