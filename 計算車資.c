#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int m, money, t;
    t = 0;
    printf("輸入你的里程數");
    scanf("%d",&m);
    
    if(m > 1500)
    {
         m = m -1500;
  sit1:  if(m > 500)
         {
              t = t + 1;
              m = m - 500;
              goto sit1;
         }
         else
         {
              t = t + 1;
              money = t * 10 + 80;
              printf("車資 %d 元",money);              
         }
    } 
    else
    {
        money = 80;
        printf("車資 %d 元",money); 
    }
     
     
    system("pause");
    return 0;   
}
