#include <iostream>
using namespace std;

int a[20];   
int n;      

void input() {
	while (true) {
		cout << " Masukkan banyaknya elemen pada array :";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\n Array dapat mempunyai maksimal 20 elemen.\n";
		}
		cout << endl;
		cout << "===================" << endl;
		cout << " Masukkan elemen Array" << endl;
		cout << "===================" << endl;
		
		for (int i = 0; i < n; i++) {
			cout << "Data ke-" << (i + 1) << ":";
			cin >> a[i];
		}
	}
}
   
