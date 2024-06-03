#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;
	string NamaFile;

	cout << "Mauskan Nama File : ";
	cin >> NamaFile;


	ofstream outfile;

	outfile.open(NamaFile + ".txt", ios::out);

	cout << ">= menuliskan file, \'q\' untuk keluar" << endl;


	while (true) {

	}

}
