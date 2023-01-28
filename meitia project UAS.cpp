#include<iostream>
using namespace std;

struct apk  {
  string i_spt, i_sow, i_b12, i_snpcht, i_snw, i_b62, i_snct, i_now, i_612;
} ;

void aplikasi_selfie(){
	apk selfie[9];
		selfie[0].i_spt    = "jumlah penginstall Snapchat = 1M++\n";
		selfie[1].i_sow    = "jumlah penginstall Snow = 100 JT++\n";
		selfie[2].i_b12    = "jumlah penginstall B612 = 500 JT++\n";
		selfie[3].i_snpcht = "rating aplikasi Snapchat = 4,3 ulasan\n";
		selfie[4].i_snw    = "rating aplikasi Snow = 4,5 ulasan\n";
		selfie[5].i_b62    = "rating aplikasi B612 = 4,7 ulasan\n";
		selfie[6].i_snct   = "kapasitas download aplikasi Snapchat = 59 MB\n";
		selfie[7].i_now    = "kapasitas download aplikasi Snow = 144 MB\n";
		selfie[8].i_612    = "kapasitas download aplikasi B612 =143 MB\n";

	menu:
	system("cls");
	int pilihan;
	char ulang;
	do
	{
    cout << "=====REKOMENDASI APLIKASI SELFIE AESTHETIC VERSION ANDROID YANG SAYA PILIH=====" << endl;
	cout << " - Snapchat " << endl;
	cout << " - Snow "     << endl;
	cout << " - B612 "     << endl;
	cout << "==================================================================" << endl;
	cout << "\t PENILAIAN APLIKASI SELFIE PADA PLAYSTORE \t\t"                   << endl;
	cout << "==================================================================" << endl;
	cout << "1. Jumlah Peng-install aplikasi"                          << endl;
	cout << "2. Rating Dari Aplikasi tersebut"                         << endl;
	cout << "3. Kapasitas Memori Mendownload dari Aplikasi tersebut"   << endl;

	cout << "Pilihan saya :" ;
	cin>>pilihan;

	switch(pilihan){
		case 1:
			system ("cls");
					char jmlhinstal;
					  char ulang;
					  do
					  {
					  	system ("cls");
					    cout << "==Jumlah Peng-install Aplikasi Selfie== " << endl;
						cout << "A. jumlah peng-install aplikasi Snapchat" << endl;
						cout << "B. jumlah peng-install aplikasi snow"     << endl;
						cout << "C. jumlah peng-install aplikasi B612"     << endl;
						cout << "D. kembali ke menu utama" << endl;

						cout << "Masukan Pilihan Aplikasi Selfie : ";
					    cin >> jmlhinstal;

					    switch(jmlhinstal){
					    case 'a':
					        cout << selfie[0].i_spt << endl;
					        break;
					    case 'b':
					        cout << selfie[1].i_sow << endl;
					        break;
					    case 'c':
					        cout << selfie[2].i_b12 << endl;
					        break;
					    case 'd':
					        goto menu;
					        break;
					    default:
					        cout << "Menu tidak tersedia" << endl;
					    }
					    cout << endl;

					    cout << "Ingin memilih menu lain (y/t)? ";
					    cin >> ulang;
					    cout << endl;
					  }
					  while (ulang!= 't');

					  cout << "Terimakasih...";

					  cout << endl;

					break;

		case 2:
			system ("cls");
					char ratingapk;
					  char ulang2;
					  do
					  {
					  	system ("cls");
					    cout << "Rating Aplikasi Selfie " << endl;
						cout << "A. Rating aplikasi Snapchat" << endl;
						cout << "B. Rating aplikasi Snow    " << endl;
						cout << "C. Rating aplikasi B612    " << endl;
						cout << "D. kembali ke menu utama" << endl;

						cout << "Masukan Pilihan Aplikasi Selfie : ";
					    cin >> ratingapk;

					    switch(ratingapk){
					    case 'a':
					        cout << "Rating aplikasi Snapchat    : 4,3\n";
					        break;
					    case 'b':
					        cout << "Rating aplikasi Snow        : 4,5\n";
					        break;
					    case 'c':
					        cout << "Rating aplikasi B612        : 4,7\n";
					        break;
					    case 'd':
					        goto menu;
					        break;
					    default:
					        cout << "Menu tidak tersedia" << endl;
					    }
					    cout << endl;

					    cout << "Ingin memilih menu lain (y/t)? ";
					    cin >> ulang2;
					    cout << endl;
					  }
					  while (ulang2 != 't');

					  cout << "Terimakasih...";

					  cout << endl;

					break;

		case 3:
			system ("cls");
			char memoriapk;
					  char ulang3;
					  do
					  {
					  	system ("cls");
					    cout << "Kapasitas Memori Aplikasi "   << endl;
						cout << "A. Memori Aplikasi Snapchat"  << endl;
						cout << "B. Memori Aplikasi Snow"      << endl;
						cout << "C. Memori Aplikasi B612"      << endl;
						cout << "D. Kembali ke menu utama"     << endl;
						cout << "Masukan Pilihan Aplikasi Selfie : ";
					    cin >> memoriapk;

					    switch(memoriapk){
					    case 'a':
					        cout << "Memori Aplikasi Snapchat  :59mb\n";
					        break;
					    case 'b':
					        cout << "Memori Aplikasi Snow      :144mb\n";
					        break;
					    case 'c':
					        cout << "Memori Aplikasi B612      :143mb\n";
					        break;
					    case 'd':
					        goto menu;
					        break;
					    default:
					        cout << "Menu tidak tersedia" << endl;
					    }
					    cout << endl;

					    cout << "Ingin memilih menu lain (y/t)? ";
					    cin >> ulang3;
					    cout << endl;
					  }
					  while (ulang3 != 't');

					  cout << "Terimakasih...";

					  cout << endl;

					break;
		default:
			system ("cls");
			cout << "Menu Tidak Tersedia" << endl;
 		}
 	cout << endl;

 	cout << "Ingin memilih menu lain (y/t)" << endl;
 	cin >> ulang;
 	cout << endl;
	}

	while (ulang!= 't');
}
int main(){
 aplikasi_selfie();
return 0;
}
