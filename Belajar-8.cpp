#include <iostream>
using namespace std;

int main(){
	
//	OPERATOR PERBANDINGAN = MEMBANDINGKAN 2 BUAH NILAI -> TRUE (1) ATAU FALSE (0)
//	
//	OPERATOR ---- KETERANGAN                ---- CONTOH ---- HASIL (BOOLEAN)
//	==       ---- SAMA DENGAN               ---- 4 == 4 ---- TRUE (1)
//	!=       ---- TIDAK SAMA DENGAN         ---- 4 != 4 ---- FALSE (0)
//	>        ---- LEBIH DARI                ---- 4 > 3  ---- TRUE (1)
//	<        ---- KURANG DARI               ---- 4 < 3  ---- FALSE (0)
//	>=       ---- LEBIH BESAR SAMA DENGAN   ---- 4 >= 4 ---- TRUE (1)
//	<=       ---- LEBIH KECIL SAMA DENGAN   ---- 2 <= 4 ---- TRUE (1)
	
	int x = 4;
	int y = 3;
	bool hasil; // variabel = nilainya bisa berubah
	
	hasil = x == y;
	cout << x << " sama dengan " << y << " kah ? " << hasil << endl;
	
	hasil = x != y;
	cout << x << " tidak sama dengan " << y << " kah ? " << hasil << endl;
	
	hasil = x > y;
	cout << x << " lebih besar dari " << y << " kah ? " << hasil << endl;
	
	hasil = x < y;
	cout << x << " lebih kecil dari " << y << " kah ? " << hasil << endl;
	
	hasil = x >= y;
	cout << x << " lebih besar atau sama dengan " << y << " kah ? " << hasil << endl;
	
	hasil = x <= y;
	cout << x << " lebih kecil atau sama dengan " << y << " kah ? " << hasil << endl; 
	
	cout << endl << endl << endl;
	
	hasil = "SufryGanteng" == "sufryganteng";
	cout << "SufryGanteng tu sama dengan sufryganteng ga si ? " << hasil << endl;
	
	hasil = "SufryGanteng" == "SufryGanteng";
	cout << "SufryGanteng tu sama dengan SufryGanteng ga si ? " << hasil << endl;
	
	cout << endl << endl << endl;
	
	hasil = 'c' != 'C';
	cout << "c tu sama ga si dengan C ? " << hasil << endl;
	
	
	return 0;
}

