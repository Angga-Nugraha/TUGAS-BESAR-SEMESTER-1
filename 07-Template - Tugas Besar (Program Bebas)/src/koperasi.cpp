#include <iostream>
#include <conio.h>
using namespace std;

string nama[50], tgl_lhr[10], user[10], user2[10], pass[8], pass2[8];
long long int nik[16];
int pilihan, i, depo_awal[50], tambah, pinjam, total, cashback;
char pil, back;


//prototipe function
void daftar();
void transaksi();
void login (string user2[], string pass[]);


int main(){
	back : system("cls");
	cout<<"+++++++++KOPERASI SIMPAN PINJAM+++++++++"<<endl;
	cout<<"|| 1. PENDAFTARAN                     ||"<<endl;
	cout<<"|| 2. LOGIN                           ||"<<endl;
	cout<<"||++++++++++++++++++++++++++++++++++++||"<<endl;
	cout<<" Masukan Pilihan : ";
	cin>>pilihan;
	switch (pilihan){
	case 1: system ("cls"); 
		daftar();
		system("cls");
		cout<<" Akun Berhasil Di Daftarkan..."<<endl;
		for(i = 1; i <= 1; i++){
			cout<<" Nama\t\t : "<<nama[i]<<endl;
			cout<<" NIK\t\t : "<<nik[i]<<endl;
			cout<<" Tanggal Lahir\t : "<<tgl_lhr[i]<<endl;
			cout<<" Username\t : "<<user[i]<<endl;
			cout<<" Password\t : "<<pass2[i]<<endl;
			cout<<" Saldo Awal\t : Rp."<<depo_awal[i]<<endl;
			cout<<"-----------------------------------"<<endl;
			cout<<" Save & Login (y/t) : ";
			cin>>pil;
				if(pil == 'y' || pil == 'Y'){
					goto back;
				}else{
					cout<<" Pendaftaran Di Batalkan"<<endl;
				}
		}
	break;

	case 2: system ("cls");
		login(user2, pass);
	break;
	
	default:
		cout<<" Masukan salah...."<<endl;
		goto back;
	break;
	}
	cout<<"**Terima Kasih sudah Berlangganan Bersama KSP**"<<endl;

	getch();
	return 0;
}



void login (string user2[], string pass[]){
	cout<<"+++++++++KOPERASI SIMPAN PINJAM+++++++++"<<endl;
	back:
	cout<<" Username\t : ";		cin>>user2[i];
	cout<<" Password\t : "; 	cin>>pass[i];
	if(user2[i] == user[i] && pass[i] == pass2[i]){
		cout<<" Login Berhasil"<<endl;
		transaksi();
		}else{
			cout<<" Correct Password/Username....!!!"<<endl;
			cout<<"---------------------------------"<<endl;
			goto back;
			}
}		




void transaksi(){
	system("cls");
	back : system("cls");
	cout<<"+++++++++KOPERASI SIMPAN PINJAM+++++++++"<<endl;
	cout<<" Hi, Mr."<<nama[i]<<endl;
	cout<<" 1. CEK SALDO"<<endl;
	cout<<" 2. TAMBAH SALDO"<<endl;
	cout<<" 3. PENGAJUAN PINJAMAN"<<endl;
	cout<<"++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout<<" Masukan Pilihan : ";
	cin>>pilihan;
		switch (pilihan){
		case 1: system("cls");
			cout<<"+++++++++KOPERASI SIMPAN PINJAM+++++++++"<<endl;
			cout<<" SALDO ANDA   : Rp."<<depo_awal[i]<<endl;
		break;

		case 2: system("cls");
			cout<<"+++++++++KOPERASI SIMPAN PINJAM+++++++++"<<endl;
			cout<<" SALDO ANDA     : Rp."<<depo_awal[i]<<endl;
			cout<<" TAMBAH SALDO   : Rp."; cin>>tambah;
			depo_awal[i] = depo_awal[i] + cashback + tambah;
			cout<<"\n******Penambahan saldo Berhasil******"<<endl;
			cout<<" SALDO ANDA     : Rp."<<depo_awal[i]<<endl;

		break;

		case 3: system("cls");
		cout<<" SALDO ANDA     Rp.: "<<depo_awal[i]<<endl;
		cout<<" JUMLAH PINJAM  Rp.: ";	cin>>pinjam;
		if(pinjam < depo_awal[i] + cashback){
			cout<<"\n******Pengajuan Pinjaman Berhasil******"<<endl;
			cout<<" Total Pinjaman : Rp."<<pinjam<<endl;
				if(pinjam > 2000000){
					cashback = 0.02 * pinjam;
					total = depo_awal[i] - pinjam;
					depo_awal[i] = total;
				}else if (pinjam > 1000000){
					cashback = 0.01 * pinjam;
					total = depo_awal[i] - pinjam;
					depo_awal[i] = total;
				}else{
					cashback = 0;
					total = depo_awal[i] - pinjam;
					depo_awal[i] = total + cashback;
				}
			cout<<" SALDO ANDA     : Rp."<<depo_awal[i]<<endl;
		}else{
			cout<<"\n******Pengajuan Pinjaman Gagal******"<<endl;
			cout<<"*****Saldo Anda Tidak Mencukupi*****"<<endl;
		}
		break;

		default:
			cout<<" Masukan salah..."<<endl;
		break;
		}
		cout<<"--------------------------------------"<<endl;
		cout<<" Kembali ?(y/t) : ";
		cin>>back;
		if(back == 'y' || back =='Y'){
			goto back;
		}else{
			cout<<" Transaksi selesai..."<<endl;
		}

}




void daftar(){
	cout<<"++++++++++Form Pendaftaran KSP++++++++++"<<endl;
		for(i = 1; i <= 1; i++){
			cout<<" Nama Lengkap\t : "; 	cin>>nama[i];
			cout<<" Nomor KTP\t : "; 		cin>>nik[i];
			cout<<" Tanggal Lahir\t : "; 	cin>>tgl_lhr[i];
			cout<<" Username\t : ";			cin>>user[i];
			cout<<" Password\t : ";			cin>>pass[i];
			back :
			cout<<" Ulang Password\t : ";	cin>>pass2[i];
			if(pass[i] == pass2[i]){
				cout<<" Good..."<<endl;
			}else{
				cout<<" Correct Password....!!!"<<endl<<endl;
				goto back;
			}
			cout<<" Saldo Awal\t : ";		cin>>depo_awal[i];
			pass == pass2;
			cout<<endl;
		}
	}
