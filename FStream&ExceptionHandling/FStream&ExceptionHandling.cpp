#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
	string baris;

	ofstream outfile;
	//membuat objek
	outfile.open("ContohFile.txt");

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;

	//unlimited loop
	while(true) {
		cout << "- ";
		getline(cin, baris);
		if (baris == "q") break;
		outfile << baris << endl;
	}
	outfile.close();

	ifstream infile;
	infile.open("contohfile.txt");

	cout << endl << ">= Membuka dan membaca file " << endl;
}

