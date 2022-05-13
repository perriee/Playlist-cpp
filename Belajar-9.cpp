#include <iostream>
using namespace std;

int main(){
	
//	PERCABANGAN -- MEMUTUSKAN DALAM MENGAMBIL PILIHAN
//	
//	IF --------- 1 KONDISI >> aman 
//	IF ELSE ---- 2 KONDISI >> aman
//	IF ELSE IF - LEBIH DARI 2 KONDISI (KOMPLEKS) 
//
//	if(kondisi operator_perbandingan){
//		statement / pernyataan;
//	}
//	

	int pilihan;
	
	cout << "Pilih dong bang: \n1. Aku\n2. Dia\n3. Ndak dua-duanya" << endl;
	cout << "Kamu pilih siapa (1-3): "; cin >> pilihan;
	
	cout << endl;
	
	if(pilihan == 1){
		cout << ">> Awww maaciww udah pilih akuuhhhh >3<" << endl;
	} else if(pilihan == 2){
		cout << ">> Ohh jadi kamu lebih milih dia nihhhh? ydh gpp" << endl;
	} else if(pilihan == 3){
		cout << ">> Lemah bgt si masa milih gitu doang gabisa, HUH !" << endl;
	} else {
		cout << ">> Woyyy, pilihannya cuma sampe 3 bangggg !!!!" << endl;
	}
	
	
	return 0;
}

