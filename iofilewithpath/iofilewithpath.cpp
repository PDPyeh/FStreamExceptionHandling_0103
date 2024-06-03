#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
	string baris;
	string NamaFile;

	ofstream outfile;
	//membuat objek
	outfile.open("ContohFile.txt");

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;

	//unlimited loop
	