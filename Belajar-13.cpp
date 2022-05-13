#include <iostream>
using namespace std;

int main(){
	
//	PERULANGAN -----> MENGULANG BARIS PROGRAM.
//
//	TOLONG PRINT KAN (INI PERULANGAN KE-1 SAMPAI DENGAN KE-10)
	
//	perulangan di bagi menjadi 2:
//		1. counted loop (perulangan yg udah jelas mau di ulang berapa kali)
//		2. uncounted loop (perulangan yg belum jelas mau di ulang berapa kali)
//		
//	perulangan:
//		1. for -> counted loop
//		2. while -> uncounted
//		3. do while -> uncounted

//	for(start;kondisi;increment/decrement){
//		pernyataan / statement;
//	}
	
	for(int i = 10; i >= 1; i--){
		cout << "Ini adalah perulangan ke-" << i << endl;
	}
	cout << endl << "Perulangan Berhenti ..." << endl;
	
	return 0;
}

