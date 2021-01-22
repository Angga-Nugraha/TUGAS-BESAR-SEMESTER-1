#include <iostream>
#include <conio.h>

using namespace std;


//FUNGSI UNTUK MENENTUKAN BILANGAN PRIMA/BUKAN PRIMA
int prima(int bil, int i, int counter){
    counter = 0;
    for ( i = 1; i <= bil; i++){
        if(bil % i == 0){
            counter++;
        }
    } 
    cout<<bil;
    if(counter == 2){
        cout<<" Adalah Bilangan Prima dan"<<endl;
    }else{
        cout<<" Bukan Bilangan Prima dan"<<endl;
    }
}
int ganjil(int bil){
    if(bil % 2 == 0){
        cout<<bil<<" Adalah Bilangan Genap";
    }else if(bil % 2 == 1){
        cout<<bil<<" Termasuk Bilangan Ganjil";
    }
}

    int main(){
    int bil, i, counter;
    char lagi;

    ulang :
        system("cls");


    cout<<"=================+================="<<endl;
    cout<<"    PROGRAM MENENTUKAN BILANGAN "<<endl;
    cout<<"      GANJIL - GENAP & PRIMA   "<<endl;
    cout<<"=================+================="<<endl;
    cout<<endl;
    cout<<"Masukan Sembarang Bilangan (+) : ";
    cin>>bil;
    cout<<endl;
    cout<<"-----------------------------------"<<endl;
    prima(bil,i,counter); 
    ganjil(bil);
    cout<<endl;
    cout<<"-----------------------------------"<<endl;
    
    cout<<"Apakah anda ingin mengulang (y/t)? : ";
    cin>>lagi;
        if(lagi == 'y' || lagi == 'Y'){
            goto ulang;
        }
        cout<<"Program selesai...";
    



getch();
    return 0;
}
