#include <iostream>
#include <math.h>
using namespace std;
int binary_decimal(int);

int main(void)
{
    int number;
    cout << "��J�@�ӤG�i�쪺��";
    cin >> number;
    cout << "�Q�i�� =" << binary_decimal(number);
    
    system("pause");
    return 0; 
}

int binary_decimal (int x)
{
    int sum, y;
    y = 1;
    sum = 0;
    while(x >= 1)
    {
         if((x % 10) == 1)
         {
              sum = sum + pow(2,(y - 1));  
         }
         x = x / 10;
         y++;
    }
    return sum;
}
