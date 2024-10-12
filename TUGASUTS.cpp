#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string namaMhs, NPM, kodeMhs, jurusan;
    int pembayaranKe, jumlahCicilan = 0;
    float pembayaranAwal = 0, besarCicilan = 0;
    float uangKuliah, uangKuliahTerbayar, sisaUangKuliah;
    char lagi;

    do {
    	cout << setprecision(12);
    	cout << "                                        <-------! PUNYA DHANNEYY !-------> :D" << endl;
		cout << "!------------------------------------------!" << endl << endl;
		
		//UNTUK INPUT YA PAK
        cout << "Masukkan Nama Mahasiswa: ";
        getline(cin, namaMhs);/*SAYA MENGGUNAKAN GETLINE KARENA PADA SAAT MEMASUKAN NAMA LENGKAP
								DENGAN SPASI DAN KETIKA SAYA INGIN MELANJUTKAN INPUT KE
								NPM TETAPI DIA AKAN LANGSUNG MASUK INPUT KE KODE, SEMENTARA NPM DI LEWATKAN*/

        cout << "Masukkan NPM: ";
        cin >> NPM;

        cout << "Masukkan Kode (SI/TI/KA/MI): ";
        cin >> kodeMhs;

        cout << "Masukkan Pembayaran ke: ";
        cin >> pembayaranKe;
        cout<<endl<<"*------------------------------------------*"<<endl<<endl;
        
        //LOGIKA UNTUK MENCARI JURUSAN,PEMBAYARAN AWAL, JUMLAH CICILAN, DAN BESAR CICILAN YANG DI INPUT DARI KODE :)_
        if (kodeMhs == "SI" || kodeMhs == "si" || kodeMhs == "Si" || kodeMhs == "sI") {
            jurusan = "Sistem Informasi";
            pembayaranAwal = 2100000;
            jumlahCicilan = 7;
            besarCicilan = 300000;
        } else if (kodeMhs == "TI" || kodeMhs == "ti" || kodeMhs == "Ti" || kodeMhs == "tI") {
            jurusan = "Teknik Informatika";
            pembayaranAwal = 2500000;
            jumlahCicilan = 7;
            besarCicilan = 300000;
        } else if (kodeMhs == "KA" || kodeMhs == "ka" || kodeMhs == "Ka" || kodeMhs == "kA") {
            jurusan = "Komputer Akutansi";
            pembayaranAwal = 1750000;
            jumlahCicilan = 6;
            besarCicilan = 200000;
        } else if (kodeMhs == "MI" || kodeMhs == "mi" || kodeMhs == "Mi" || kodeMhs == "mI") {
            jurusan = "Manajemen Informatika";
            pembayaranAwal = 1500000;
            jumlahCicilan = 6;
            besarCicilan = 250000;
        } else {
            cout << "Kode tidak valid!" << endl;
            continue;
        }

		//ARITMATIKA UNTUK MENCARI SISA UANG KULIAH, UANG KULIAH TERBAYAR, DAN JUMLAH UANG KULIAH YANG HARUS DI BAYAR PAK:)
        uangKuliah = pembayaranAwal + (jumlahCicilan * besarCicilan);
        uangKuliahTerbayar = pembayaranAwal + (pembayaranKe * besarCicilan);
        sisaUangKuliah = uangKuliah - uangKuliahTerbayar;

        cout << endl;
        cout << "+-----------------------------------------------+" << endl;
        cout << "|            PEMBAYARAN UANG KULIAH             |" << endl;
        cout << "+-----------------------------------------------+" << endl;
        cout << "| " << left << setw(20) << "Nama Mahasiswa"      << ": " << setw(23) << namaMhs << " |" << endl;
        cout << "| " << left << setw(20) << "NPM"                << ": " << setw(23) << NPM << " |" << endl;
        cout << "| " << left << setw(20) << "Kode"               << ": " << setw(23) << kodeMhs << " |" << endl;
        cout << "| " << left << setw(20) << "Jurusan"            << ": " << setw(23) << jurusan << " |" << endl;
        cout << "| " << left << setw(20) << "Pembayaran Awal"    << ": " << setw(23) << pembayaranAwal << " |" << endl;
        cout << "| " << left << setw(20) << "Jumlah Cicilan"     << ": " << setw(23) << jumlahCicilan << " |" << endl;
        cout << "| " << left << setw(20) << "Besar Cicilan"      << ": " << setw(23) << besarCicilan << " |" << endl;
        cout << "| " << left << setw(20) << "Pembayaran ke"      << ": " << setw(23) << pembayaranKe << " |" << endl;
        cout << "| " << left << setw(20) << "Uang Kuliah"        << ": " << setw(23) << uangKuliah << " |" << endl;
        cout << "| " << left << setw(20) << "Uang Kuliah Terbayar" << ": " << setw(23) << uangKuliahTerbayar << " |" << endl;
        cout << "| " << left << setw(20) << "Sisa Uang Kuliah"   << ": " << setw(23) <<  sisaUangKuliah << " |" << endl;
        cout << "+-----------------------------------------------+" << endl;

        cout << "Masih Ingin Menghitung [Y/N]: ";
        cin >> lagi;
        cin.ignore();/*AGAR TIDAK TERJADI ERROR SEPERTI INPUT SEBELUMNYA, JIKA TIDAK MENGGUNAKAN INI
									MAKA INPUT NAMA AKAN DI LEWATKAN OTOMATIS*/
									
    } while (lagi == 'y' || lagi == 'Y');

    return 0;
}

										/* TERIMA KASIH :) */
