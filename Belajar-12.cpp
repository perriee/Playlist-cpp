#include <iostream>
using namespace std;

int main(){
	
	// PROGRAM KAAASSSIIIIIIIRRRRRRRRRR !!!!!
	
	int nasiGoreng = 15000;
	int mieGoreng = 17000;
	int pecelLele = 23000;
	int pecelAyam = 25000;
	int menu, bayar, total, kembalian;
	string nama;
	 
	cout << "===================================" << endl;
	cout << "           DANVERZ RESTO           " << endl;
	cout << "     MAKAN MEWAH GA HARUS MAHAL    " << endl;
	cout << "===================================" << endl;
	cout << "Menu: " << endl;
	cout << "[1] Nasi Goreng  \tRp.15.000" << endl;
	cout << "[2] Mie Goreng  \tRp.17.000" << endl;
	cout << "[3] Pecel Lele  \tRp.23.000" << endl;
	cout << "[4] Pecel Ayam  \tRp.25.000" << endl;
	cout << "===================================" << endl << endl;
	
	cout << "----------- DATA PEMESAN ----------" << endl;
	cout << "Nama Pemesan : "; cin >> nama;
	cout << "Pesanan      : "; cin >> menu;
	cout << "Jumlah Bayar : "; cin >> bayar;
	cout << "-----------------------------------" << endl << endl;
	
	if(menu == 1){
		total = nasiGoreng;
		kembalian = bayar - nasiGoreng;
	} else if(menu == 2){
		total = mieGoreng;
		kembalian = bayar - mieGoreng;
	} else if(menu == 3){
		total = pecelLele;
		kembalian = bayar - pecelLele;
	} else if(menu == 4){
		total = pecelAyam;
		kembalian = bayar - pecelAyam;
	} else {
		cout << ">> Error: Menu tidak ditemukan !" << endl << endl;
	}
	
	cout << "========= NOTA PEMBAYARAN =========" << endl;
	cout << "Nama Pemesan : " << nama << endl;
	cout << "Total Bayar  : Rp. " << total << endl;
	cout << "Jumlah Bayar : Rp. " << bayar << endl;
	cout << "Kembalian    : Rp. " << kembalian << endl;
	cout << "===================================" << endl << endl;
	
	
	return 0;
}

