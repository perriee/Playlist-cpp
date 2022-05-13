#include <iostream>
using namespace std;

int main(){
	// operator
//	1. aritmatika (+ - / * %)
//	2. penugasan
//	3. pembanding
//	4. logika
//	5. bitwise
//	6. lain - lain 
	
	float a;
	float b;
	int tambah;
	int kurang;
	float bagi;
	int kali;
	int sisaBagi;
	
	cout << "========== INPUT ==========" << endl << endl;
	cout << "Masukkan a : "; cin >> a;
	cout << "Masukkan b : "; cin >> b;
	
	tambah = a + b;
	kurang = a - b;
	bagi = a / b;
	kali = a * b;
//	sisaBagi = a % b;
	
	cout << endl << endl;
	cout << "========== OUTPUT ==========" << endl << endl;
	cout << a << " + " << b << " = " << tambah << endl;
	cout << a << " - " << b << " = " << kurang << endl;
	cout << a << " : " << b << " = " << bagi << endl;
	cout << a << " x " << b << " = " << kali << endl;
	cout << a << " % " << b << " = " << sisaBagi << endl;
	
	return 0;
}

