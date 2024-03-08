#include <iostream>
using namespace std;

int a[20];   // deklarasikan array a dengan ukuran 20
int n;       // deklarasikan variabel n untuk menyimpan banyaknya elemen pada array 

void input() {  // prosedur untuk input
	while (true) {   //looping
		cout << "Masukkan banyaknya elemen pada array : "; //output kelayar
		cin >> n; // input dari pengguna
		if (n <= 20) //jika n kurng dari atau sama dengan 20
			break;  // keluar dari loop
		else {       // jika n lebih dari 20
			cout << "\n Array dapat mempunyai  makasimal lebih dari 20 elemen. \n"; /// output kelayar
		}
	}
	cout << endl;                              //output baris kosong
	cout << "==================" << endl;     // ouput kelayar
	cout << "masukkan elemen array" << endl;  // output kelayar
	cout << "===================" << endl;    // output kelayar

	for (int i = 0; i < n; i++) {        // looping dengan i dimulai dari 0 hingga n-1
		cout << " Data ke-" << (i + 1) << ": ";  // ouput kelayar
		cin >> a[i];                             // input dari pengguna
	}
}

void bublesortarray() {
	int pass = 1;
	do {
		for (int j = 0; j <= n - 1 - pass; j++) {
			if (a[j] > a[j + 1]) {
				int temp;
				temp = a[j];
				a[j] = a[j + 1];
				a[j+1]= temp;
			}
		}
		pass = pass + 1;
	} while (pass <= n - 1);
}