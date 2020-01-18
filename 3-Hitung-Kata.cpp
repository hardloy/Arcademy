using namespace std;
#include <iostream>
#include <ctype.h>

int main()
{
      char kata[100];
      int a, spasi=0;
      
      cout << "\t Masukan Sebuah Kalimat : ";
      cin.getline(kata, sizeof(kata));

      for(a=0; kata[a]; a++)
      {
            if(isspace (kata[a]) || ispunct (kata[a]))
            {
                  spasi++;
            }
      }
      cout << "\t Jumlah Kata = " << spasi +1 << "\n\n";
      cout << "\t Kata yang anda masukan adalah : \n";
      cout << "\t ";

      for(a=0; kata[a]; a++)
      {
            if(isspace (kata[a]) || ispunct (kata[a]))
            {
                  spasi++;
                  cout << "\n";
                  cout << "\t";
            }
            cout << kata[a];
      }
      
      return 0;
}
