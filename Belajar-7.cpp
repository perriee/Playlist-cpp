#include <iostream>
using namespace std;

int main(){

//	1.  Umur Asa adalah 10 tahun, umur Asi adalah 3 tahun lebih muda dari Asa,
//		dan umur Aspal 7 tahun lebih tua dari Asi. Berapakah umur Asi dan Aspal?
//		
//	2.  Umur Sufry adalah 3/2 dari umur Joulecha. Umur Joulecha adalah 12 tahun. 
//		Berapakah Umur Sufry?
//		
//	3.  Sebuah persegi panjang memiliki panjang 8 cm dan lebar 12 cm. Berapakah
//		keliling persegi panjang tersebut?
//		
//	4.  Sebuah lingkaran memiliki jari - jari 4 cm. Berapakah keliling lingkaran?
	
	cout << "==================== NOMOR 1 ====================" << endl << endl;
	
	int umurAsa = 10;
	int umurAsi = umurAsa - 3;
	int umurAspal = umurAsi + 7;
	
	cout << "Umur Asa   : " << umurAsa << " tahun" << endl;
	cout << "Umur Asi   : " << umurAsi << " tahun" << endl;
	cout << "Umur Aspal : " << umurAspal << " tahun" << endl;
		
	cout << endl << endl;	
	cout << "==================== NOMOR 2 ====================" << endl << endl;
	
	int umurJou = 12;
	int umurSu = 1.5 * umurJou;
	
	cout << "Umur Joulecha : " << umurJou << " tahun" << endl;
	cout << "Umur Sufry    : " << umurSu << " tahun" << endl;
	
	cout << endl << endl;	
	cout << "==================== NOMOR 3 ====================" << endl << endl;
	
	int p = 8;
	int l = 12;
	int kelPerPan = p * l;
	
	cout << "Keliling persegi panjang dengan panjang " << p << " cm dan lebar " << l << " cm adalah " << kelPerPan << " cm." << endl;
	
	
	cout << endl << endl;	
	cout << "==================== NOMOR 4 ====================" << endl << endl;
	
	int r = 4;
	int kelLing = 2 * 3.14 * r;
	
	cout << "Keliling lingkaran dengan jari - jari " << r << " cm adalah " << kelLing << " cm." << endl;
	
	
	cout << endl << endl;	
	cout << "==================== NOMOR 5 ====================" << endl << endl;
	
	string nama;
	int umur;
	
	cout << "Siapa Kamu : "; cin >> nama;
	cout << "Berapa Umur Kamu : "; cin >> umur;
	
	cout << endl << endl;
	cout << "===== HASIL TERAWANG =====" << endl << endl;
	cout << "Aku tebak nama kamu adalah " << nama << " kann ??" << endl;
	cout << "Aku terawang umur kamu 10 tahun lagi adalah " << umur + 10 << " tahun" << endl;
	
	return 0;
}

