#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string baris;
	
	// membuka file dalam mode menulis.
	ofstream outfile;
	//menunjuk ke sebuah nama file
	outfile.open("E:\\pemdas\contohfile.txt");

	cout << ">= Menulis file, \'q\' untuk keluar " << endl;


	//untlimited loop untuk menulis
	while (true) {
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika user memasukan karakter 
		if (baris == "q")break;
		//menulis dan memasukan nilai dari 'baris' ke dalam file
		outfile << baris << endl; 
	}
	//selesai dalam menulis sekarang tutup filenya
	outfile.close();

	//membuka file dalam mode membaca
	ifstream infile;
	//menunjuk ke sebuah file
	infile.open("E:\\pemdas\contohfile.txt");

	cout << endl << ">= membuka dan membaca file " << endl;
	//jika file ada maka
	if (infile.is_open())
	{
		//melakukan perulangan setiap baris
		while (getline(infile, baris))
		{
			//dan tampilkan di sini
			cout << baris << '\n';
		}

		//tutup file tersebut setelah selesai
		infile.close();
	}
	 
	// jika tidak ditemukan file maka akan menampikan ini
	else cout << "unable to open file";
		return 0;
}