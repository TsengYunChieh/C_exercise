#include <iostream>
using namespace std;

class Capacity_bottle   //�����e�q
{
      private:
         int h1,h2,h3; //h1�W��,h2����,h3�U�� 
         int r1,r2;    //r1�W�b�|,r2�U�b�| 
      public:
         Capacity_bottle();
         void get_Capacity_sample();   //��o�e�n�˥� 
         float get_Capacity_under();  //��o�U���e�n  
         float get_Capacity_mid();    //��o�����e�n 
         float get_Capacity_top();    //��o�W���e�n  
         float get_Capacity_bottle(); //��o���~�e�n  
         
         void input_Capacity();
         void print_Capacity();
};

Capacity_bottle::Capacity_bottle() //��l�� 
{
      r1 = 0;
      r2 = 0;
      h1 = 0;
      h2 = 0;
      h3 = 0;
}

float Capacity_bottle::get_Capacity_under()
{
      return 3.14159 * r2 * r2 * h3;
}

float Capacity_bottle::get_Capacity_mid()
{
      return ( 3.14159 * r2 * r2 * ( h1 + h2) / 3) - ( 3.14159 * r1 * r1 * h1 / 3);
}

float Capacity_bottle::get_Capacity_top()
{
      return 3.14159 * r1 * r1 * h1;
}

float Capacity_bottle::get_Capacity_bottle()
{
      return get_Capacity_under() + get_Capacity_mid() + get_Capacity_top();
}

void Capacity_bottle::get_Capacity_sample()
{
    cout << "         " <<"_____" << endl;
    cout << "         " << "*" <<"   "<< "*"<< endl;
    cout << "         " << "*" <<"   "<< "*" << endl;
    cout << "         " <<"-----" << endl;
    cout << "        " << "*" <<"     " << "*" << endl;
    cout << "       " << "*" <<"       " << "*" << endl;
    cout << "      " << "*" <<"         " << "*" << endl;
    cout << "     " << "*" <<"           " << "*" << endl;
    cout << "     " << "-------------" << endl;
    cout << "     " << "*" <<"           " << "*" << endl;
    cout << "     " << "*" <<"           " << "*" << endl;
    cout << "     " << "*" <<"           " << "*" << endl;
    cout << "     " << "*" <<"           " << "*" << endl;
    cout << "     " << "*" <<"           " << "*" << endl;
    cout << "     " << "*" <<"           " << "*" << endl;
    cout << "     " << "*" <<"           " << "*" << endl;
    cout << "     " << "*" <<"           " << "*" << endl;
    cout << "     " << "*" <<"           " << "*" << endl;
    cout << "     " << "-------------" << endl;
}

void Capacity_bottle::input_Capacity()
{
     cout << "��J���~�W�b�|(����) :" << endl;
     cin >> r1; 
     cout << "��J���~�U�b�|(����) :" << endl;
     cin >> r2;
     cout << "��J���~�W��(�������s���B) :" << endl;
     cin >> h1; 
     cout << "��J���~����(�s���B�쫫���B) :" << endl;
     cin >> h2; 
     cout << "��J���~�U��(�����B�쩳��) :" << endl;
     cin >> h3; 
}

void Capacity_bottle::print_Capacity()
{
     cout << "���~�e�n : " << get_Capacity_bottle() << endl;
}

int main(void)
{
    Capacity_bottle a;
    a.get_Capacity_sample();
    a.input_Capacity();
    a.print_Capacity();
    
    system("pause");
    return 0;
}















