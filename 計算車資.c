#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int m, money, t;
    t = 0;
    printf("��J�A�����{��");
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
              printf("���� %d ��",money);              
         }
    } 
    else
    {
        money = 80;
        printf("���� %d ��",money); 
    }
     
     
    system("pause");
    return 0;   
}
