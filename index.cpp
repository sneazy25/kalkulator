include <iostream>
using namespace std;

int main() {

  char kal;
  float angka1, angka2;

  cout << "Welcome In Kalkulator C++\n\n";

  cout << "Masukan operator: (+)(-)(x)(:): ";
  cin >> kal;

  cout << "Masukkan angka 1: ";
  cin >> angka1;

  cout << "Masukkan angka 2: ";
  cin  >> angka2;

  switch(kal) {

    case '+':
      cout << "Hasil:" << angka1 + angka2 << "\n";
      break;

    case '-':
      cout << angka1 << " - " << angka2 << " = " << angka1 - angka2;
      break;

    case 'x':
      cout << angka1 << " * " << angka2 << " = " << angka1 * angka2;
      break;

    case ':':
      cout << angka1 << " / " << angka2 << " = " << angka1 / angka2;
      break;

    default:

      cout << "Error ngab!!";
      break;
  }

  return 0;
}
