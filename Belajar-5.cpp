#include <iostream>
using namespace std;

int main(){
	// input dan output
	
	string nama, hobi;
	int umur;
	
	cout << "==========INPUT==========" << endl << endl;
	cout << "Masukkan Nama Anda : "; cin >> nama;
	cout << "Masukkan Umur Anda : "; cin >> umur;
	cout << "Masukkan Hobi Anda : "; cin >> hobi;
	
	cout << endl << endl;
	cout << "==========OUTPUT==========" << endl << endl;
	cout << "Nama : " << nama << endl;
	cout << "Umur : " << umur << " tahun" << endl;
	cout << "Hobi : " << hobi << endl;
	
	return 0;
}

