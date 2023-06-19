#include <iostream>
#include <fstream>
using namespace std;

int main() {
	string baris;
	
	// membuka file dalam mode menulis.
	ofstream outfile;
	//menunjuk ke sebuah nama file
	outfile.open("E:\pemdas\contohfile.txt");

	cout << ">= Menulis file, \'q\' untuk keluar " << endl;


	//untlimited loop untuk menulis
	while (true) {
		//mendapatkan setiap karakter dalam satu baris
		getlin(cin, baris);
		//loop akan berhenti jika user memasukan karakter 
		if (baris == "q")break;
		//menulis dan memasukan nilai dari 'baris' ke dalam file
		outfile << baris << endl; 
	}
}