#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
int panjang, tinggi, a, b;
cout<<"Masukkan Panjang :";
cin>>panjang;
cout<<"Masukkan Tinggi : ";
cin>>tinggi;

for (a=1; a<=tinggi; a++)
{

for( b=1; b<=panjang;  b++)
if (panjang%2 == 0 && tinggi%2 == 0)
{cout<<"Parameter Harus angka ganjil!"<<endl;}
else if (panjang%2 == 1 && tinggi%2 == 0)
{cout<<"Parameter Harus angka ganjil!"<<endl;}
else if (panjang%2 == 0 && tinggi%2 == 1)
{cout<<"Parameter Harus angka ganjil!"<<endl;}
else 
{cout<<"=";}

cout<<"\n";
}
return 0;
}
