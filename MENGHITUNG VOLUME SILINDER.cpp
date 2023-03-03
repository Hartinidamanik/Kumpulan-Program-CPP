#include <iostream>
using namespace std;

int main() 
{
cout << "\tMENGHITUNG VOLUME SILINDER\n";
cout << "\t==========================\n\n ";
  float jari2, tinggi, volume;
  const float phi = 3.14;

  cout << "Masukkan jari-jari: ";
  cin >> jari2;

  cout << " Masukkan tinggi   : ";
  cin >> tinggi;

  volume = 4/3 *( phi * jari2 * jari2)* tinggi;

  cout << " \nVolume silinder adalah: " << volume << endl;

  return 0;
}

