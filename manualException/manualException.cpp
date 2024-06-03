
#include <iostream>
#include <exception>
#include <array>
using namespace std;

int main() {
	try {
		cout << "Selamat belajar di prodi TI UMY" << endl;
		cout << "Pernyataan tidak akan di eksekusi" << endl;
	}
	catch (int a) {
		cout << "Pengecualian akan di eksekusi" << endl;
	}
	catch (...) {
		cout << "default pengecualian dieksekusi" << endl;
	}

	return 0;
}


