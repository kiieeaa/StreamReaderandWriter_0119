#include <iostream>
#include <exception>
using namespace std;

int main()
{
	try {
		cout << "Selamat Belajar di prodi TI UMY" << endl;

		cout << "Pernyataan tidak akan dieksekusi" << endl;
	}
	catch (int a) {

		cout << "pengecualian akan dieksekusi" << endl;
	}
}
