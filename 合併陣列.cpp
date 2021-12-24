#include <iostream>
#include<cstdlib>
#include <time.h>

using namespace std;
void nember(int [],int []);
void merge(int [],int [],int []);
void bubble_sort(int [],int []);

int main(void)
{
    int a[10], b[10] ,c[20], i;
    srand(time(NULL));
    nember(a,b);
    bubble_sort(a,b);
    merge(a,b,c);
    for(i=0;i<10;i++)
      cout << a[i] << " ";
    cout << endl; 
    for(i=0;i<10;i++)
      cout << b[i] << " ";
    cout << endl;
    for(i=0;i<20;i++)
      cout << c[i] << " ";
    cout << endl;
    
    system("pause");
    return 0;
}

void nember(int a[],int b[])
{
    int i;
    for(i=0;i<10;i++)
    {
       a[i] = rand() % 100;
       b[i] = rand() % 100;
    }
}

void bubble_sort(int a[],int b[])
{
     int i,j,temp;
     
     for(i=0;i<9;i++)
        for(j=0;j<9-i;j++)
           if(a[j] >a[j+1])
           {
              temp = a[j];
              a[j] = a[j+1];
              a[j+1] = temp;
           }
     for(i=0;i<9;i++)
        for(j=0;j<9-i;j++)
           if(b[j] >b[j+1])
           {
              temp = b[j];
              b[j] = b[j+1];
              b[j+1] = temp;
           }
}
 
void merge(int a[],int b[],int c[])
{ 
    int m, n;
    m=10;
    n=10;
    while(m+n > 0)  
    {    
        if(m > 0 && n > 0)  
        {  
            if (a[m-1] > b[n-1])  
            {  
                c[m+n-1] = a[m-1];  
                m = m - 1;  
            }  
            else
            {  
                c[m+n-1] = b[n-1];  
                n = n - 1;  
            }  
        }  
        else if(n > 0)
        {  
            c[m+n-1] = b[n-1];  
            n = n - 1;  
        }
        else
        {  
            c[m+n-1] = a[m-1];
            m = m - 1;  
        }  
    }  
}
