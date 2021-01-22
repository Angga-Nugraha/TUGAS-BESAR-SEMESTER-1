#include <iostream>
#include <conio.h>
#include <ctime>
#include <iomanip>
#include <string>
#include <limits>


using namespace std;



string nama_barang[50];
int jumlah[50];
int harga_barang[50];
int total_harga[50];
string oprt;
int jum_barang, bayar, total_bayar, kembalian, sub_total;
int cashback, tunai; 

//MENGGUNAKAN FILE HEADER <CTIME> UNTUK MEMANGGIL FUNGSI TIME_T
    time_t now = time(0);
    char* date_time = ctime(&now);
//FUNGSI UNTUK LIST BARANG BELANJA
void daftar_belanja();
//FUNGSI UNTUK PROSES PEMBAYARAN
void pil_bayar();
//FUNGSI UNTUK MENAMPIKAN TOTAL SELURUH TRANSAKSI
void struk();


int main(){
    ulang: system("cls");

    cout<<"=+=+=+=+=+=+=+=TUGAS_BESAR=+=+=+=+=+=+=+="<<endl;
    cout<<"|        PROGRAM KASIR MINIMARKET       |"<<endl;
    cout<<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+="<<endl;
    cout<<" Operator Kasir      : ";
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    getline(cin,oprt);
    cout<<" Jumlah semua barang : ";
    cin>>jum_barang;
    daftar_belanja();  

    system ("cls");
        cout<<"=+=+=+=+=+=+=+=TUGAS_BESAR=+=+=+=+=+=+=+="<<endl;
        cout<<"         PROGRAM KASIR MINIMARKET        "<<endl;
        cout<<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+="<<endl;

        for ( int i = 1; i <= jum_barang; i++){
        cout<<setiosflags(ios::right)<<setw(2)<<nama_barang[i];
        cout<<"\n"<<setiosflags(ios::right)<<setw(24)<<jumlah[i];
        cout<<setiosflags(ios::right)<<setw(6)<<harga_barang[i];
        cout<<setiosflags(ios::right)<<setw(10)<<total_harga[i]<<endl;
        }
        
        
        cout<<"-----------------------------------------"<<endl;
        cout<<" Total belanja "<<setw(25)<<sub_total<<endl;
        //DISKON BELANJA UNTUK BELANJA > 100000 = 20%, DAN >= 50000 = 10%
        if(sub_total > 100000){
            cashback = sub_total * 0.10;
        }else if(sub_total >= 50000){
            cashback = sub_total * 0.05;
        }else{
            cashback = 0;
        }

                total_bayar = sub_total - cashback;
                cout<<" Diskon       "<<setw(20)<<"("<<cashback<<")"<<endl;
                cout<<" Total Bayar   "<<setw(25)<<total_bayar<<endl;
                cout<<"-----------------------------------------"<<endl;
                cout<<" 1. Cash"<<endl;
                cout<<" 2. Debit"<<endl;
                cout<<"-----------------------------------------"<<endl;
                cout<<" Bayar (1-2) ?: ";
                cin>>bayar;
                pil_bayar();
                cout<<endl;
                struk();


        cout<<"    BCA PASPOR/SOLITAIRE-TRXID:153738"<<endl;
        cout<<"  N0:**************9066,PURCHASE:"<<total_bayar<<endl;
        cout<<"  TERIMA KASIH. SELAMAT BELANJA KEMBALI"<<endl;
        cout<<"===== LAYANAN KONSUMEN MINIMARKET ====="<<endl;
        cout<<"    SMS:081 389 042 ***  CALL:0812345"<<endl;
        cout<<"        EMAIL:17200002@ARS.CO.ID"<<endl;

        char lagi;
        cout<<"\n Apakah anda ingin mengulang(y/t)? ";
        cin>>lagi;
            if (lagi == 'y' || lagi == 'Y'){
                goto ulang;
            }else{
            cout<<" Program selesai..."<<endl;
            }

getch();
    return 0;
}



void struk(){
        system ("cls");
        cout<<"=+=+=+=+=+=+=+=TUGAS_BESAR=+=+=+=+=+=+=+="<<endl;
        cout<<"         PROGRAM KASIR MINIMARKET        "<<endl;
        cout<<"            1720/"<<oprt<<"/0002"<<endl;
        cout<<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+="<<endl;
        cout<<"        "<<date_time;
        cout<<"-----------------------------------------"<<endl;

        for ( int i = 1; i <= jum_barang; i++){
        cout<<setiosflags(ios::right)<<setw(2)<<nama_barang[i];
        cout<<"\n"<<setiosflags(ios::right)<<setw(24)<<jumlah[i];
        cout<<setiosflags(ios::right)<<setw(6)<<harga_barang[i];
        cout<<setiosflags(ios::right)<<setw(10)<<total_harga[i]<<endl;
        }
        
        cout<<"-----------------------------------------"<<endl;
        cout<<" Total belanja  "<<setw(24)<<sub_total<<endl;
        cout<<" Diskon       "<<setw(20)<<"("<<cashback<<")"<<endl;
        cout<<" Total Bayar  "<<setw(26)<<total_bayar<<endl;
        if(bayar == 1){
            cout<<" Tunai        "<<setw(26)<<tunai<<endl;
            }else{
                cout<<" Debit        "<<setw(26)<<total_bayar<<endl;
            }
        
        cout<<" Kembalian    "<<setw(26)<<kembalian<<endl;
        cout<<"-----------------------------------------"<<endl;

}


void pil_bayar(){
     switch (bayar){
        case 1: system ("cls");
            cout<<" Total belanja"<<setw(25)<<sub_total<<endl;
            cout<<" Diskon       "<<setw(20)<<"("<<cashback<<")"<<endl;
            cout<<" Total Bayar  "<<setw(25)<<total_bayar<<endl;
            cout<<"-----------------------------------------"<<endl;
            cout<<" Tunai  : ";
            cin>>tunai;
            kembalian = tunai - total_bayar;
        break;
        case 2: system("cls");
            cout<<" Total belanja"<<setw(25)<<sub_total<<endl;
            cout<<" Diskon       "<<setw(20)<<cashback<<endl;
            cout<<" Total Bayar  "<<setw(25)<<total_bayar<<endl;
            cout<<"-----------------------------------------"<<endl;
            cout<<" Non Tunai   : "<<total_bayar;
            kembalian = tunai - total_bayar == 0;
        break;
        default:
        cout<<" Masukan Salah..."<<endl;
        break;
        system("cls");
        }
}


void daftar_belanja(){
        for(int i = 1; i <= jum_barang; i++){
            cout<<endl;
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<" Nama Barang\t: ";   getline(cin,nama_barang[i]);
            cout<<" Jumlah\t\t: ";      cin>>jumlah[i];
            cout<<" Harga\t\t: ";       cin>>harga_barang[i];
            cout<<"-----------------------------------------"<<endl;

            total_harga[i] = jumlah[i]*harga_barang[i];
            sub_total += total_harga[i];
        }
}