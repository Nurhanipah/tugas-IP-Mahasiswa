// PROGRAM IP MAHASISWA
#include <iostream>
using namespace std;

// variabel
float nilai[100], jumlahNilai, jmlRata, tmp;
int mahasiswa = 0, lulus = 0, tdkLulus = 0;
bool test;

// prototype
void input();
bool isWithinRange(float x, int max, int min);

// Fungsi Main
int main()
{
	input();

	// hasil jumlah nilai rata-rata mahasiswa
	jmlRata = jumlahNilai / mahasiswa;
	

	// untuk menampilkan semua nilai
	if(mahasiswa==0){
		cout <<endl;
		cout <<endl;
		cout<< "============================="<<endl;  
		cout<< "=     --Data Tidak Ada--    ="<<endl;
		cout<< "============================="<<endl;
	}
	else {
	cout <<endl;
	cout <<endl;
	cout << "==============================" <<endl;
	cout << "Jumlah Mahasiswa      = " << mahasiswa << endl;
	cout << "Nilai Rata - Rata     = " << jmlRata << endl;
	cout << "Mahasiswa Yang Lulus  = " << lulus << endl;
	cout << "Mahasiswa Tidak lulus = " << tdkLulus << endl;
	cout << "==============================";
	}
	
	
	return 0;
}

// input IP mahasiswa
void input()
{
		cout <<endl;
		cout <<endl;
		cout << "================================================"<<endl;
		cout << "==        --Program IP Mahasiswa--            =="<<endl;  
		cout << "================================================"<<endl;  
		cout <<endl;
		cout <<endl; 
	for (int i = 0; i < 100; i++) {

		cout << "Masukan IP Mahasiswa : ";
		cin >> tmp;


		if (tmp == -999)
			return;

		test = isWithinRange(tmp, 0, 4);
		if (test == true) {

			nilai[mahasiswa] = tmp;
			jumlahNilai += nilai[mahasiswa];
			
			// berapa banyak yang lulus
			if (nilai[mahasiswa] > 2.75){
				lulus++;
			} 
			else { // < 2.75 , berapa banyak yang tidak lulus
				tdkLulus++;
			}
			// menghitung setiap IP yang valid
			mahasiswa++;

		}
		
		
	}
}

// x sebuah nilai dari IP MHS
// min nilai terkecil dari IP
// max nilai terbesar dari IP
// return true jika benar dan sebaliknya
bool isWithinRange(float x, int min, int max) {

	return (x >= 0 && x <= max);
}