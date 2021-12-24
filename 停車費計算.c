#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int day,time;
    
    
    printf("請輸入星期幾?(數字)");
    scanf("%d",&day);
    printf("請輸入停幾分鐘?(數字)");
    scanf("%d",&time);
    if( time == 0)
    {
        printf("需要繳交的金額 = 0");
    }
    if( day > 5 && time > 180) 
    {
        printf("需要繳交的金額 = %d",one(day,time));
    }
    if( day > 5 && time <= 180 && time > 0) 
    {
        printf("需要繳交的金額 = %d",two(day,time));
    }
    if( day < 6 && time > 60) 
    {
        printf("需要繳交的金額 = %d",three(day,time));
    }
    if( day < 6 && time <= 60 && time > 0) 
    {
        printf("需要繳交的金額 = %d",four(day,time));
    }
    
    system("pause");
    return 0;     
}

int one(day,time)
{
    int f, m;
     
    f = 0;
  sit1:  time = time - 60;
    f = f + 1;
    if(time < 60 && time >= 1)
    {
         f = f + 1;
    }
    else if (time <= 0)
    {
         
         f = f;
    }
    else
    {
         goto sit1;
    }
    if(f >= 6)
    {
         m = f * 50 / 10 * 8;
    }
    else
    {
         m = f * 50;
    }
    return m;
        
} 

int two(day,time)
{
    return 50 * 3;
} 

int three(day,time)
{
    int f, m;
    
    f = 0;
  sit1:  time = time - 60;
    f = f + 1;
    if(time < 60 && time >= 1)
    {
         f = f + 1;
    }
    else if (time <= 0)
    {
         
         f = f;
    }
    else
    {
         goto sit1;
    }
    if(f >= 6)
    {
         m = f * 20 / 10 * 8;
    }
    else
    {
         m = f * 20;
    }
    return m;
} 

int four(day,time)
{
    return 20;
} 
