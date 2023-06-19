#include <iostream>
using namespace std;

int main()
{
	try {
		cout << "Selamat Beljar di Prodi TI UMY" << endl;
		throw 1; //melemparkan sebuah integer maka
		cout << "Pernyataan tidak akan dieksekusi" << endl;

	}
	catch (int a) {
		//blok ini akan dieksekusi
		cout << "Pengecualian akan dieksekusi" << endl;

	}
	catch (...) {
		// jika selain integer maka blok ini akan diesekusi
		cout << "default pengecualian dieksekusi" << endl;
	}
	return 0;
}