#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
	string baris;
	string NamaFile;

	cout << "Masukan Nama File : ";
	cin >> NamaFile;

	ofstream outfile;
	//membuat objek
	outfile.open(NamaFile + ".txt", ios::out);

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;


	//unlimited loop
	while (true) {
		cout << "- ";
		getline(cin, baris);
		if (baris == "q") break;
		outfile << baris << endl;
	}
	outfile.close();

	
}

