#include <iostream>
using namespace std;

class Capacity_bottle   //水平容量
{
      private:
         int h1,h2,h3; //h1上高,h2中高,h3下高 
         int r1,r2;    //r1上半徑,r2下半徑 
      public:
         Capacity_bottle();
         void get_Capacity_sample();   //獲得容積樣本 
         float get_Capacity_under();  //獲得下面容積  
         float get_Capacity_mid();    //獲得中間容積 
         float get_Capacity_top();    //獲得上面容積  
         float get_Capacity_bottle(); //獲得水瓶容積  
         
         void input_Capacity();
         void print_Capacity();
};

Capacity_bottle::Capacity_bottle() //初始化 
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
     cout << "輸入水瓶上半徑(頂部) :" << endl;
     cin >> r1; 
     cout << "輸入水瓶下半徑(底部) :" << endl;
     cin >> r2;
     cout << "輸入水瓶上高(頂部到彎曲處) :" << endl;
     cin >> h1; 
     cout << "輸入水瓶中高(彎曲處到垂直處) :" << endl;
     cin >> h2; 
     cout << "輸入水瓶下高(垂直處到底部) :" << endl;
     cin >> h3; 
}

void Capacity_bottle::print_Capacity()
{
     cout << "水瓶容積 : " << get_Capacity_bottle() << endl;
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















