#include <iostream>
#include <conio.h>

using namespace std;

int batas; // variable global

//FUNGSI UNTUK MENGGAMBAR PERSEGI
void persegi_full(int x, int y){

    cout<<"Untuk Pola Gambar ke - 1"<<endl;
    cout<<"      PERSEGI-1"<<endl;
    cout<<"Masukan Batas Pola : ";
    cin>>batas;
    cout<<endl;
    for(int x = 1; x <= batas; x++){
        for(int y = 1; y <= batas; y++){
            cout<<"*";
        }
        cout<<endl;
    }
}
//FUNGSI UNTUK MENGGAMBAR PERSEGI BOLONG
void persegi_bolong(int x, int y){
    cout<<"Untuk Pola Gambar ke - 2"<<endl;
    cout<<"      PERSEGI-2"<<endl;
    cout<<"Masukan Batas Pola : ";
    cin>>batas;
    cout<<endl;
    for(int x = 1; x <= batas; x++){
        for(int y = 1; y <= batas; y++){
            if(x == 1 || x == batas || y == 1 || y == batas){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
//FUNGSI UNTUK MENGGAMBAR SEGITIGA SIKU-SIKU (KIRI)
void segitiga_siku1(int a, int b){
    cout<<"Untuk Pola Gambar ke - 3"<<endl;
    cout<<"      SEGITIGA-1"<<endl;
    cout<<"Masukan Batas Pola : ";
    cin>>batas;
    cout<<endl;
    for(int a = 1; a <= batas; a++){
        for(int b = 1; b <= a; b++){
            cout<<"*";
        }
        cout<<endl;
    }

}
//FUNGSI UNTUK MENGGAMBAR SEGITIGA SIKU-SIKU (KANAN)
void segitiga_siku2(int a, int b, int c){
    cout<<"Untuk Pola Gambar ke - 4"<<endl;
    cout<<"      SEGITIGA-2"<<endl;
    cout<<"Masukan Batas Pola : ";
    cin>>batas;
    cout<<endl;
    for(int a = 1; a <= batas; a++){
        for(int b = 1; b <= a; b++){
            cout<<" ";
        }
           for(int c = batas; c >= a; c--){
                cout<<"*";
            }
        
        cout<<endl;
    }

}



//FUNGSI UTAMA
int main(){
int n,pil,x,y,a,b,c;
    ulang : system("cls");

    cout<<" MENGGAMBAR BIDANG DATAR"<<endl;
    cout<<"========================="<<endl;
    cout<<" 1. Pola Ke - 1"<<endl;
    cout<<" 2. Pola Ke - 2"<<endl;
    cout<<" 3. Pola Ke - 3"<<endl;
    cout<<" 4. Pola Ke - 4"<<endl;
    cout<<"-------------------------"<<endl;
    cout<<"Masukan pilihan (1-4) : ";
    cin>>pil;
    switch (pil){
    case 1: system("cls");
        persegi_full(x,y);
    break;
    case 2: system ("cls");
        persegi_bolong(x,y);
    break;
    case 3: system("cls");
        segitiga_siku1(a,b);
    break;
    case 4: system("cls");
        segitiga_siku2(a,b,c);
    break;
    default:
    cout<<"Salah masukan pilihan !!!"<<endl;
        break;
    }
    cout<<"\n-------------------------"<<endl;
    char lagi;
    cout<<"Kembali (y/t)? : ";
    cin>>lagi;
        if(lagi == 'y' || lagi == 'Y'){
            goto ulang;
        }
        cout<<"Program selesai...";

    
    



    getch();
    return 0;
}
