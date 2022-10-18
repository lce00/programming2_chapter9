#include<stdio.h>


int update(int n)
{
    static int item = 100;
    item = item + (int) n;

}
int print_stat()
{
    // printf("%d\n", item);
}

int main()
{
       int opt, n; 

       while(1) {
           printf("판매 및 입고: 1, 재고확인: 2, 종료 3\n"); 
           scanf("%d", &opt); 

           if  (opt == 1) {
                printf("변경 수량을 입력하시오: \n"); 
                scanf("%d", &n); 
           }

          switch (opt) {
          case 1: 
              update(n); 
              break; 
          case 2: 
              print_stat();
              break; 
          case 3: 
              goto out; 
           default: 
              printf("잘못 선택함\n");
           }
       }
      
out: 
       return 0; 
}
