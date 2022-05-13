#include <iostream>
using namespace std;

int main(){
	
	int nilai;
	
	cout << "Masukkan nilainya mas: "; cin >> nilai;
	
	cout << endl;
	
	if(nilai > 80 && nilai <= 100){
		cout << ">> A" << endl;
	} else  if(nilai > 60 && nilai <= 80){
		cout << ">> B" << endl;
	} else if(nilai > 40 && nilai <= 60){
		cout << ">> C" << endl;
	} else if(nilai > 20 && nilai <= 40){
		cout << ">> D" << endl;
	} else if(nilai > 0 && nilai <= 20){
		cout << ">> E" << endl;
	} else {
		cout << ">> Error: Nilai tidak valid" << endl;
	}
	
	
	
	
	return 0;
}

