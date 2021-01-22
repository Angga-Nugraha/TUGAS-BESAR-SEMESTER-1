#include <iostream>
#include <conio.h>
#include <algorithm>
#include <array>


using namespace std;

int angka[50]; //VARIABLE ARRAY YANG DAPAT MENAMPUNG MAKSIMAL 50 KARAKTER
int n, counter;
const size_t arraySize = 10;

void shorting_asc();

void shorting_dsc();

/*void printArray(array  <int, arraySize> &angka){
        cout << "array : ";
    for(int &a : angka){
        cout << a << " ";
    }
        cout<<endl;
}
void short_library(){
    std::array <int, arraySize> angka = {9,3,1,2,6,5,7,8,0,4};
    cout <<"Sebelum di shorting"<<endl;
    printArray(angka);
    cout<<endl;
    cout<<"Sesudah di shorting"<<endl;
    std::sort(angka.begin(), angka.end());
    printArray(angka);
}*/

int main(){
    ulang : system("cls");
    cout<<"================================="<<endl;
    cout<<" \tSHORTING PADA C++"<<endl;
    cout<<" \t  <BUBLESHORT>"<<endl;
    cout<<"================================="<<endl;
    cout<<" Masukan jumlah angka : ";
    cin>>n;
    cout<<"---------------------------------"<<endl;
    for (int i = 1; i <= n; i++){
        cout<<" Masukan angka ke - "<<i;
        cout<<" : "; 
        cin>>angka[i];
    }

system ("cls");
    cout<<"================================="<<endl;
    cout<<" \tSHORTING PADA C++"<<endl;
    cout<<"================================="<<endl;
    cout<<" Nilai sebelum di shorting : "<<endl;
    cout<<" { ";
    for(int i = 1; i <= n; i++){
        cout<<angka[i]<<" ";
    }
    cout<<"}";
    cout<<endl<<endl;

    cout<<" Nilai sesudah di shorting secara ascending: "<<endl;
    shorting_asc();
    cout<<" Nilai sesudah di shorting secara discending: "<<endl;
    shorting_dsc();
    cout<<"---------------------------------"<<endl;

    char lagi;
    cout<<" Lagi (y/t)? : ";
    cin>>lagi;
    if(lagi == 'y' || lagi == 'Y'){
        goto ulang;
    }else{
        cout<<" Program selesai...";
    }

    getch();
    return 0;
}

void shorting_asc(){
    for(int i = 1; i <= n; i++){
        for(int j = i+1; j <= n; j++){
            counter = angka[i];
            if(angka[i] > angka[j]){

                angka[i] = angka[j];
                angka[j] = counter;
            }
        }
    }
    cout<<" { ";
    for(int i = 1; i <= n; i++){
    cout<<angka[i]<<" ";
    }
    cout<<"}"<<endl<<endl;
}

void shorting_dsc(){
    for(int i = n; i > 0; i--){
        for(int j = i-1; j > 0; j--){
                counter =  angka[i];
            if(angka[i] > angka[j]){       
                angka[i] = angka[j];
                angka[j] = counter;
            }
        }
    }
    cout<<" { ";
    for(int i = 1; i <= n; i++){
        cout<<angka[i]<<" ";
    }
    cout<<"}"<<endl;

}