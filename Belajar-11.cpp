#include <iostream>
using namespace std;

int main(){
	
//	PERCABANGAN 
//	
//	IF ELSE IF --X SWITCH CASE
//	SWITCH CASE ---V IF ELSE IF

	int pilihan;
	
	cout << "========== DANVERZ RESTO ==========" << endl << endl;
	cout << "Menu: \n1. Nasi Goreng\n2. Mie Goreng\n3. Pecel Lele\n4. Pecel Ayam" << endl << endl;
	cout << "Pilihan: "; cin >> pilihan;
	
	cout << endl;
	
	switch(pilihan){
		case 1: 
			cout << ">> Kamu memilih Nasi Goreng" << endl;
			break;
		case 2: 
			cout << ">> Kamu memilih Mie Goreng" << endl;
			break;
		case 3:
			cout << ">> Kamu memilih Pecel Lele" << endl;
			break;
		case 4:
			cout << ">> Kamu memilih Pecel Ayam" << endl;
			break;
		default:
			cout << ">> Pilihannya cuma ada 4 WOOYYY !!!!" << endl;
	}
	

	return 0;
}

