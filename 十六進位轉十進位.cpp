#include <stdio.h>
#include <iostream>
#include <math.h>
#include <cstring>

using namespace std;
unsigned int hexa(int,int);

int hexadecimal_decimal(int);

int main(void)
{
    int str,sum,i;
    char s[16];
    sum = 0;
    
    cout << "��J�@�ӤQ���i�쪺��";
    gets(s);                           //�x�s�r��  
    str = strlen(s);                   //��r����� 
    
   for(i=0;i<str;i++)
    {
        if(s[i]>='A' && s[i] <='F')
        { 
             sum = sum + (s[i]-'A'+10) * hexa(16,str-i-1);
        }
        else if((s[i]>='0' && s[i] <='9'))
        { 
             sum = sum + (s[i]-'0') * hexa(16,str-i-1);
        }                                     
    }
    
    cout << "�Q�i�� =" << sum;
    system("pause");
    return 0; 
}

unsigned int hexa(int x,int y)
{
   int i, n;
   for(i=0;i<=y;i++) n = pow(x,i);
   return n;
}
