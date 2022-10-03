#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	int n;
	cout << "\tElija una opcion: " << endl;
	cout << "\n1. Para imprimir mi biografia: " << endl;
	cout << "2. Para salir: " << endl;
	cin >> n;
	if (n == 1) {
		do {
			cout << "\nCI: 8536657" << endl;
			cout << "CU: 35 - 4539" << endl;
			cout << "Correo electronico : alvarofabianvillenam@gmail.com" << endl << endl;
			cout << "\tPara imprimir nuevamente presione 1:" << endl;
			cout << "\tPara salir cualquier letra" << endl;
			cin >> n;

		} while (n == 1);
	}
	system("pause");
	return 0;
}