#include <iostream>
using namespace std;
//Menghitung Volume Tabung
float HitungVolumeTabung(float jari,float tinggi){
	float volume_tabung;
	volume_tabung = 3.14*jari*jari*tinggi;
	return volume_tabung;
	}
//Menghitung Volume Kerucut
void HitungVolumeKerucut(float &Volume_Kerucut){
	float jari,tinggi;
	cout<<"Menghitung Volume Kerucut" <<endl;
	cout<<"Input Jari-Jari(r) : ";
	cin>>jari;
	cout<<"Input tinggi(t) : ";
	cin>>tinggi;
	Volume_Kerucut=(3.14)*jari*jari*tinggi*(0.333);
	}
//Menghitung Keliling Segitiga
int HitungKelilingSegitiga(int sisi_1,int sisi_2,int sisi_3){
	int Keliling_Segitiga;
	Keliling_Segitiga = sisi_1+sisi_2+sisi_3;
	return Keliling_Segitiga;
	}
//Mengitung Luas Segitiga
void HitungLuasSegitiga(float &Luas_Segitiga){
	float alas,tinggi;
	cout<<"Menghitung Luas Segitiga" <<endl;
	cout<<"Input alas(a) : ";
	cin>>alas;
	cout<<"Input tinggi(t) : ";
	cin>>tinggi;
	Luas_Segitiga=(0.5)*alas*tinggi;
	}
//Mwnghitung Keliling Persegi Panjang
void HitungKelilingPersegiPanjang(int &Keliling_PersegiPanjang){
	int Panjang,Lebar;
	cout<<"Menghitung Keliling Persegi Panjang" <<endl;
	cout<<"Input Panjang(P) : ";
	cin>>Panjang;
	cout<<"Input Lebar(L) : ";
	cin>>Lebar;
	
	Keliling_PersegiPanjang = 2*(Panjang+Lebar);	
	}
//Mwnghitung Luas Persegi Panjang
int HitungLuasPersegiPanjang(int panjang,int lebar){
	int Luas_PersegiPanjang;
	Luas_PersegiPanjang = panjang*lebar;
	return Luas_PersegiPanjang;
	}

int main(){
	int pilih_1;
	float jari,volume_tabung,tinggi;
	string ulang;
    int  HitungLuasPersegiPanjang(int panjang,int lebar);
    
    do{
        cout << "MENU : " << endl;
        cout << "+=======================================================+" << endl;
        cout << "|                  PROGRAM MENGHITUNG                   |" << endl;
        cout << "|=======================================================|" << endl;
        cout << "| 1. Volume Tabung                                      |" << endl;
        cout << "| 2. Volume Kerucut                                     |" << endl;
        cout << "| 3. Keliling Segitiga                                  |" << endl;
        cout << "| 4. Luas Segitiga                                      |" << endl;
        cout << "| 5. Keliling Persegi Panjang                           |" << endl;
        cout << "| 6. Luas Persegi Panjang                               |" << endl;
        cout << "+=======================================================+" << endl;
        cout << "Pilih no : ";
	    cin >> pilih_1;    
    if (pilih_1 == 1){
		cout << "Menghitung Volume Tabung" << endl;
		cout << "Input jari-jari(r) : ";
		cin>>jari;
		cout << "Input Tinggi(t) : ";
		cin>>tinggi;
		
		volume_tabung = 3.14*jari*jari*tinggi;
		
		cout<<"Volume Tabung : "<<volume_tabung<<endl;
        cout << "=========================================================" << endl;
		}
	if (pilih_1 == 2){
		
		float Volume_Kerucut = 0;
		HitungVolumeKerucut(Volume_Kerucut);
		cout << "Volume Kerucut : " << Volume_Kerucut << endl;
        cout << "=========================================================" << endl;
		}
	if (pilih_1 == 3){
		int sisi_1,sisi_2,sisi_3;
		
		cout<<"Input sisi_1(s1)     : ";
		cin>>sisi_1;
		cout<<"Input sisi_2(s2)     : ";
		cin>>sisi_2;
		cout<<"Input sisi_3(s3)     : ";
		cin>>sisi_3;
		cout<<"Keliling Segitiga    : " << HitungKelilingSegitiga (sisi_1,sisi_2,sisi_3) << endl;
		
        cout << "=========================================================" << endl;
		}
	if (pilih_1 == 4){
		float Luas_Segitiga = 0;

		HitungLuasSegitiga (Luas_Segitiga);
		cout<<"Luas Segitiga        : " << Luas_Segitiga << endl;
        cout << "=========================================================" << endl;
		}
	if (pilih_1 == 5){
		int Keliling_PersegiPanjang = 0;
		
        HitungKelilingPersegiPanjang (Keliling_PersegiPanjang);
		cout << "Keliling Persegi Panjang   : " << Keliling_PersegiPanjang << endl;
        cout << "=========================================================" << endl;
		}
	if (pilih_1 == 6){
		int panjang,lebar;
		
		cout<<"Input Panjang(p)     : ";
		cin>>panjang;
		cout<<"Input lebar(l)       : ";
		cin>>lebar;
		cout<<"Luas Persegi Panjang : " << HitungLuasPersegiPanjang (panjang,lebar) <<endl;
        cout << "=========================================================" << endl;
		}
	if (pilih_1 > 6 || pilih_1 < 1){
		cout<<"\nTidak ada di pilihan menu"<<endl;
        cout << "=========================================================" << endl;
		}
	cout<<"Mau Ulangi Lagi? (Y/N) ";
	cin>>ulang;
		}
	while(ulang == "y" || ulang == "Y");
    int terkecil, terbesar, bil1, bil2, bil3;
	cout<<"\nMasukan Bilangan ke-1 : ";
	cin>>bil1;
	cout<<"Masukan Bilangan ke-2 : ";
	cin>>bil2;
	cout<<"Masukan Bilangan ke-3 : ";
	cin>>bil3;
	//Menentukan nilai terkecil
	terkecil=bil1;
	if (bil2 < terkecil){
		terkecil=bil2;
	}
	if (bil3 < terkecil){
		terkecil=bil3;
	}
	//Menentukan nilai terbesar
	terbesar=bil1;
	if (bil2 > terbesar){
		terbesar=bil2;
	}
	if (bil3 > terbesar){
		terbesar=bil3;
	}
	
	cout << "Nilai Terkecil adalah " << terkecil << endl;
	cout << "Nilai Terbesar adalah " << terbesar << endl;

	return 0;
}
